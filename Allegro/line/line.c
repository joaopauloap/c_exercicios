#include<stdio.h>
#include<allegro.h>

int main(){
	 
	allegro_init();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
	install_keyboard();
	install_mouse();
	show_mouse(screen);
//	BITMAP* buffer;
    //buffer = create_bitmap(800,600);
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	
	while(!key[KEY_ESC]){
		
	printf("Defina ponto 1\n");
	while(y1 == 0){ 
	if(mouse_b & 1){
		x1 = mouse_x;
		y1 = mouse_y;
	}
	}
	rest(100);
	printf("Defina ponto 2\n");
	while(y2==0){
	if(mouse_b & 1){
		x2 = mouse_x;
		y2 = mouse_y;	
	}
	}
	rest(100);
	//blit(buffer,screen,0,0,0,0,800,600);
    //clear(buffer);
	line(screen,x1,y1,x2,y2,makecol(0,255,0));
	y1 = 0;
	y2 = 0;
	}
	return 0;
}END_OF_MAIN()