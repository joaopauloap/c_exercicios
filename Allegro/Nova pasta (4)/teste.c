#include <stdio.h>
#include <allegro.h>
#include <conio.h>
int main(){
    allegro_init();
    install_keyboard();
    set_color_depth(16);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);

    FONT *font;
    font = load_font("fonte.pcx",NULL,NULL);

    textout_ex(screen,font,"Hahaha!",0,0,makecol(255,0,0),-1);

    readkey();
    return 0;
}END_OF_MAIN();
