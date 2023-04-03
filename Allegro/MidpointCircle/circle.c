#include<stdio.h>
#include<allegro.h>

int x,y,r;


void drawmycircle(int x0, int y0, int radius){
	
	int x = radius;
	int y = 0;
	int err = 0;

	while (x >= y){

  putpixel(screen,x0 + x, y0 + y, makecol(255,0,0));	//red
  putpixel(screen,x0 + y, y0 + x, makecol(0,255,0));	//green
  putpixel(screen,x0 - y, y0 + x, makecol(0,0,255));	//blue
  putpixel(screen,x0 - x, y0 + y, makecol(255,255,0));	//yellow
  putpixel(screen,x0 - x, y0 - y, makecol(255,0,0));	//red	
  putpixel(screen,x0 - y, y0 - x, makecol(255,255,255)); //white
  putpixel(screen,x0 + y, y0 - x, makecol(255,0,255));	 //pink 
  putpixel(screen,x0 + x, y0 - y, makecol(0,0,255)); 	//blue
  

  if (err <= 0){
  	y += 1;
  	err += 2*y + 1;
  }

  if (err > 0){
  	x -= 1;
  	err -= 2*x + 1;
  }

}

}

int main(){

	allegro_init();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
	install_keyboard();
	install_mouse();
	show_mouse(screen);

		
		/*
		printf("Enter radius of circle: ");
		scanf("%d", &r);

		printf("Enter co-ordinates of center(x and y): ");
		scanf("%d%d", &x, &y);
		*/

		x=200;
		y=200;
		r=100;
		drawmycircle(x, y, r);

	while(!key[KEY_ESC]){
		
	}
	return 0;
}
END_OF_MAIN()