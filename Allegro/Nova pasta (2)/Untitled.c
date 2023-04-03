#include <stdio.h>
#include <allegro.h>
int main()
{
    int x = 0;
    int y = 255;

	allegro_init();
	install_keyboard();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800,600,0,0);

    BITMAP *IMG;
	IMG=load_bitmap("raio.bmp", NULL);
	draw_sprite(screen,IMG,30,30);


		textout_ex(screen,font,"Br",0,0,makecol(x,y,x),-1);
        textout_ex(screen,font,"as",15,0,makecol(y,y,x),-1);
        textout_ex(screen,font,"il",30,0,makecol(x,x,y),-1);

        readkey();

        return 0;
}
END_OF_MAIN();
