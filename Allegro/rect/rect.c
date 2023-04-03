#include<stdio.h>
#include <allegro.h>
#include<stdlib.h>
int main() {
 int x1 = 400;
 int x2 = 500;
 int y1 = 200;
 int y2 = 300;
 
 allegro_init();
 set_color_depth(32);
 set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
 BITMAP* buffer;
 buffer = create_bitmap(800,600);
 install_keyboard();
 install_mouse();
 show_mouse(screen);

while(!key[KEY_ESC]){
rectfill(buffer,50,50,100,100,makecol(255,0,0));
rectfill(buffer,150,50,200,100,makecol(255,0,0));
rectfill(buffer,50,150,100,200,makecol(255,0,0));
rectfill(buffer,150,150,200,200,makecol(255,0,0));

if(mouse_b & 1){ //BOTÃO 1
	if (mouse_x > 50 && mouse_x < 100 && mouse_y > 50 && mouse_y < 100){
		
		x1=x1+1;
	
	}
}

if(mouse_b & 1){ //BOTÃO 2
	if (mouse_x > 150 && mouse_x < 200 && mouse_y > 50 && mouse_y < 100){
		
		y1=y1+1;
	
	}
}

if(mouse_b & 1){ //BOTÃO 3
	if (mouse_x > 50 && mouse_x < 100 && mouse_y > 150 && mouse_y < 200){
		
		x2=x2+1;
	
	}
}

if(mouse_b & 1){ //BOTÃO 4
	if (mouse_x > 150 && mouse_x < 200 && mouse_y > 150 && mouse_y < 200){
		
		y2=y2+1;
	
	}
}
//------------------------------------------------------------BOTAO 2
if(mouse_b & 2){ //BOTÃO 1
	if (mouse_x > 50 && mouse_x < 100 && mouse_y > 50 && mouse_y < 100){
		
		x1=x1-1;
	
	}
}

if(mouse_b & 2){ //BOTÃO 2
	if (mouse_x > 150 && mouse_x < 200 && mouse_y > 50 && mouse_y < 100){
		
		y1=y1-1;
	
	}
}

if(mouse_b & 2){ //BOTÃO 3
	if (mouse_x > 50 && mouse_x < 100 && mouse_y > 150 && mouse_y < 200){
		
		x2=x2-1;
	
	}
}

if(mouse_b & 2){ //BOTÃO 4
	if (mouse_x > 150 && mouse_x < 200 && mouse_y > 150 && mouse_y < 200){
		
		y2=y2-1;
	
	}
}
rectfill(buffer, x1, y1, x2, y2, makecol(0,0,255));
blit(buffer,screen,0,0,0,0,800,600);
clear(buffer);
}
 
return 0;
}
END_OF_MAIN()
