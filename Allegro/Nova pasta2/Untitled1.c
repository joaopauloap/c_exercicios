#include <stdio.h>
#include <allegro.h>

int main(){

    allegro_init();
    install_keyboard();
    set_color_depth(16);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
    while(!key[KEY_ESC]){
    //textout_ex(screen,font,"Teste OK",0,0,makecol(0,255,0),-1);

    line(screen,0,0,800,600,makecol(0,255,0));
    line(screen,800,0,0,600,makecol(0,0,255));
    line(screen,800,300,0,300,makecol(255,255,0));
    line(screen,400,600,400,0,makecol(255,0,0));
    //circlefill(screen,400,100,50,makecol(0,255,255));
    //rectfill(screen,50,10,50,10,makecol(255,255,0));
    }readkey();
    return 0;
}END_OF_MAIN();
