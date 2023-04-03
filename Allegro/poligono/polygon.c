#include<stdio.h>
#include <allegro.h>

int main() {

 allegro_init();
 set_color_depth(32);
 set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);

 install_keyboard();
 install_mouse();
 show_mouse(screen);
 
	int points[12] = {50,50,100,100,100,150,50,200,0,150,0,100};
	
while(!key[KEY_ESC]){

	polygon(screen, 6, points, makecol(255, 0, 0));
}
 
return 0;
}
END_OF_MAIN()
