#include<stdio.h>
#include<allegro.h>
#include<unistd.h>
// Function to put pixels 
// at subsequence points 
void drawCircle(int xc, int yc, int x, int y) 
{ 
	putpixel(screen,xc+x, yc+y, makecol(0,255,0)); 
	putpixel(screen,xc-x, yc+y, makecol(0,255,0)); 
	putpixel(screen,xc+x, yc-y, makecol(0,255,0)); 
	putpixel(screen,xc-x, yc-y, makecol(0,255,0)); 
	putpixel(screen,xc+y, yc+x, makecol(0,255,0)); 
	putpixel(screen,xc-y, yc+x, makecol(0,255,0)); 
	putpixel(screen,xc+y, yc-x, makecol(0,255,0)); 
	putpixel(screen,xc-y, yc-x, makecol(0,255,0)); 
} 

// Function for circle-generation 
// using Bresenham's algorithm 
void circleBres(int xc, int yc, int r) 
{ 
	int x = 0, y = r; 
	int d = 3 - 2 * r; 
	drawCircle(xc, yc, x, y); 
	while (y >= x) { 
        // for each pixel we will 
        // draw all eight pixels 

		x++; 

        // check for decision parameter 
        // and correspondingly  
        // update d, x, y 
		if (d > 0){ 
			y--;  
			d = d + 4 * (x - y) + 10; 
		} 
		else
			d = d + 4 * x + 6; 
		drawCircle(xc, yc, x, y); 
		sleep(1);
	} 
} 



int main(){

	allegro_init();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
	install_keyboard();
	install_mouse();
	show_mouse(screen);


	int xc = 200, yc = 200, r = 100; 

    circleBres(xc, yc, r);    // function call 

    while(!key[KEY_ESC]){

    }
    return 0;
}
END_OF_MAIN()