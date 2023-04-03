#include <allegro.h> /* Adiciona as funções do Allegro */
#include <stdio.h>

volatile int a = 0; /* variável global */

void func() {
    a++;
}
END_OF_FUNCTION();

int main() {
    int x=275,y=75,x2=340,y2=140;
    allegro_init();
    install_timer();
    install_mouse();
    install_keyboard();
    LOCK_VARIABLE(a);
    LOCK_FUNCTION(func);
    install_int(func,100);
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0);
    BITMAP *img = create_bitmap(640,480); /* Cria o BITMAP  */
    //while(!key[KEY_ESC]) {
       //clear_bitmap(img);
       //line(img,10,10, 200,200, makecol(0,0,255) ); /* Define dimensão e cor da linha  */
       //circle(img,300,300,100, makecol(255,0,0 ) );
       //rect(img,400,400,200,200, makecol(0,255,0 ) );
       //rectfill(img, 399,399,201,201, makecol(0,0,255));
       //triangle(img,400,400,400,200,200,200, makecol(255,0,0 ) );
       //vline(img, 10,10,100, makecol(255,0,0 ) );
       //hline(img, 10,10,100, makecol(255,0,0 ) );
       //blit(img,screen,0,0,0,0,640,480); /* Imprime a linha  */
       /*if(key[KEY_RIGHT]) {
            x++;
            clear_bitmap(img);
            circlefill(img,x,y,100,makecol(255,255,255));
            blit(img,screen,0,0,0,0,640,480);
       }*/

    //};
    char txt[40];
    sprintf(txt,"X: %d    Y: %d", x, y);
    textout(screen,font,txt,5,5,makecol(255,0,0));
    rectfill(img,x,y,x2,y2,makecol(0,0,255)); /* Retângulo Manupulável Azul  */
    rectfill(img,260,190,360,290,makecol(255,0,0)); /* Retângulo Estático Vermelho */
    blit(img,screen,0,0,0,0,640,480);
    while(!key[KEY_ESC]) {
        show_mouse(img);
        /* Movimentação por setas do teclado: Início */
        if(key[KEY_RIGHT]) {
            clear_bitmap(img);
            x++;x2++;
            rectfill(img,x,y,x2,y2,makecol(0,0,255));
            rectfill(img,260,190,360,290,makecol(255,0,0));
            blit(img,screen,0,0,0,0,640,480);
            sprintf(txt,"X: %d    Y: %d", x, y);
            textout(screen,font,txt,5,5,makecol(255,0,0));
        }
        if(key[KEY_LEFT]) {
            clear_bitmap(img);
            x--;x2--;
            rectfill(img,x,y,x2,y2,makecol(0,0,255));
            rectfill(img,260,190,360,290,makecol(255,0,0));
            blit(img,screen,0,0,0,0,640,480);
            sprintf(txt,"X: %d    Y: %d", x, y);
            textout(screen,font,txt,5,5,makecol(255,0,0));
        }
        if(key[KEY_UP]) {
            clear_bitmap(img);
            y--;y2--;
            rectfill(img,x,y,x2,y2,makecol(0,0,255));
            rectfill(img,260,190,360,290,makecol(255,0,0));
            blit(img,screen,0,0,0,0,640,480);
            sprintf(txt,"X: %d    Y: %d", x, y);
            textout(screen,font,txt,5,5,makecol(255,0,0));
        }
        if(key[KEY_DOWN]) {
            clear_bitmap(img);
            y++;y2++;
            rectfill(img,x,y,x2,y2,makecol(0,0,255));
            rectfill(img,260,190,360,290,makecol(255,0,0));
            blit(img,screen,0,0,0,0,640,480);
            sprintf(txt,"X: %d    Y: %d", x, y);
            textout(screen,font,txt,5,5,makecol(255,0,0));
        }
        /* Fim da movimentação com Teclado e início das verificações de posicionamento */
        if((x >= 259) && (x <= 360)) {
            if((y2 >= 190) && (y2 <= 354)) {
                clear_bitmap(img);
                x++;x2++;
                rectfill(img,x,y,x2,y2,makecol(0,0,255));
                rectfill(img,260,190,360,290,makecol(255,0,0));
                blit(img,screen,0,0,0,0,640,480);
                textout(screen,font,"colisao detectada",250,1,makecol(255,255,0));
                sprintf(txt,"X: %d    Y: %d", x, y);
                textout(screen,font,txt,5,5,makecol(0,255,0));
            }
        }
        if((x2 >= 259) && (x2 <= 360)) {
             if((y >= 125) && (y <= 285)) {
                clear_bitmap(img);
                x--;x2--;
                rectfill(img,x,y,x2,y2,makecol(0,0,255));
                rectfill(img,260,190,360,290,makecol(255,0,0));
                blit(img,screen,0,0,0,0,640,480);
                textout(screen,font,"colisao detectada",250,1,makecol(255,255,0));
                sprintf(txt,"X: %d    Y: %d", x, y);
                textout(screen,font,txt,5,5,makecol(0,255,0));
            }
        }
        if((y >= 190) && (y <= 290)) {
            if((x >= 194) && (x <= 359)) {
                clear_bitmap(img);
                y++;y2++;
                rectfill(img,x,y,x2,y2,makecol(0,0,255));
                rectfill(img,260,190,360,290,makecol(255,0,0));
                blit(img,screen,0,0,0,0,640,480);
                textout(screen,font,"colisao detectada",250,1,makecol(255,255,0));
                sprintf(txt,"X: %d    Y: %d", x, y);
                textout(screen,font,txt,5,5,makecol(0,255,0));
            }
        }
        if((y2 >= 190) && (y2 <= 290)) {
           if((x >= 196) && (x <= 359)) {
                clear_bitmap(img);
                y--;y2--;
                rectfill(img,x,y,x2,y2,makecol(0,0,255));
                rectfill(img,260,190,360,290,makecol(255,0,0));
                blit(img,screen,0,0,0,0,640,480);
                textout(screen,font,"colisao detectada",250,1,makecol(255,255,0));
                sprintf(txt,"X: %d    Y: %d", x, y);
                textout(screen,font,txt,5,5,makecol(0,255,0));
            }
        }
    };

    return 0;
}
END_OF_MAIN();
