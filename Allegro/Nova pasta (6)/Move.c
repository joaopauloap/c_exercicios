#include <stdio.h>
#include <allegro.h>

int main(){
    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);

    BITMAP* buffer;
    buffer = create_bitmap(800,600);

    int x = 25;
    int y = 25;

    circlefill(screen,x,y,25,makecol(0,255,0));

    while(!key[KEY_ESC]){

    if(key[KEY_RIGHT]){
    x=x+1;
    blit(buffer,screen,0,0,0,0,800,600);
    clear(buffer);
    circlefill(buffer,x,y,25,makecol(0,255,0));
    }

    if(key[KEY_LEFT]){
    x=x-1;
    blit(buffer,screen,0,0,0,0,800,600);
    clear(buffer);
    circlefill(buffer,x,y,25,makecol(0,255,0));
    }

    if(key[KEY_UP]){
    y=y-1;
    blit(buffer,screen,0,0,0,0,800,600);
    clear(buffer);
    circlefill(buffer,x,y,25,makecol(0,255,0));
    }
    if(key[KEY_DOWN]){
    y=y+1;
    blit(buffer,screen,0,0,0,0,800,600);
    clear(buffer);
    circlefill(buffer,x,y,25,makecol(0,255,0));
    }

//----------------------------------------------
    }
    return 0;
}END_OF_MAIN();
