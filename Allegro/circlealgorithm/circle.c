#include<stdio.h>
#include<allegro.h>
#include<math.h>

#define PI 3.1415
float px,py,radians;

void drawCircle(int x, int y, int radius, int color){
  for (int i=0; i<360; i++){  // a bigger radius might need more steps
    radians = i * PI / 180;
    px = x + radius * cos(radians);
    py = y + radius * sin(radians);
    putpixel(screen,px, py, makecol(0,255,0)); 
  }
}


void drawPieSlice(int x, int y, int radius, int color, int startAngle, int EndAngle){
  for (int i=startAngle; i<EndAngle; i++){
    radians = i * PI / 180;
    px = x + radius * cos(radians);
    py = y + radius * sin(radians);
    putpixel(screen,px, py, makecol(0,255,0)); 
  }
}




int main(){

	allegro_init();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
	install_keyboard();
	install_mouse();
	show_mouse(screen);

  putpixel(screen,20, 20, makecol(255,0,0));
  drawPieSlice(20,20,20,255,0,180);

  while(!key[KEY_ESC]){

  }
  return 0;
}
END_OF_MAIN()