#include<stdio.h>
#include<allegro.h>
#include<stdlib.h>

int main(){
	
	allegro_init();
	set_color_depth(8);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
	install_keyboard();
	install_mouse();
	show_mouse(screen);
	
	BITMAP* player = load_bitmap("moto.bmp",NULL);
	
    while(!key[KEY_ESC])
    {
       
		rotate_sprite(screen, moto, 0, 0, itofix(128));

		
    }
    return 0;
}
END_OF_MAIN()