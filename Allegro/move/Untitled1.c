#include<stdio.h>
#include<allegro.h>

int main(){

    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0);

    BITMAP* buffer;
    buffer = create_bitmap(640,480);

    BITMAP* up;
    up = load_bitmap("up.bmp",NULL);

    BITMAP* down;
    down = load_bitmap("down.bmp",NULL);

    BITMAP* right;
    right = load_bitmap("right.bmp",NULL);

    BITMAP* left;
    left = load_bitmap("left.bmp",NULL);

    int y = 30;
    int x = 30;

    while(!key[KEY_ESC]){

        if(key[KEY_DOWN]){
            y=y+1;
            blit(buffer,screen,0,0,0,0,640,480);
            clear(buffer);
            draw_sprite(buffer,down,x,y);
        }

    if(key[KEY_UP]){
        y=y-1;
        blit(buffer,screen,0,0,0,0,640,480);
        clear(buffer);
        draw_sprite(buffer,up,x,y);
    }

  if(key[KEY_LEFT]){
        x=x-1;
        blit(buffer,screen,0,0,0,0,640,480);
        clear(buffer);
        draw_sprite(buffer,left,x,y);
    }

  if(key[KEY_RIGHT]){
        x=x+1;
        blit(buffer,screen,0,0,0,0,640,480);
        clear(buffer);
        draw_sprite(buffer,right,x,y);
    }

}}
END_OF_MAIN();

