#include<stdio.h>
#include<allegro.h>


int xo,xi,yo,yi;


void drawmyline(int xo, int yo, int xi, int yi){
    int dx, dy, p, x, y;
 
  dx=xi-xo;
  dy=yi-yo;
 
  x=xo;
  y=yo;
 
  p=2*dy-dx;
 
  while(x<xi)
  {
    if(p>=0)
    {
      putpixel(screen,x,y,makecol(0,255,0));
      y=y+1;
      p=p+2*dy-2*dx;
    }
    else
    {
      putpixel(screen,x,y,makecol(0,255,0));
      p=p+2*dy;
    }
    x=x+1;
  }
}
 
int main(){
   
  allegro_init();
  set_color_depth(32);
  set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
  install_keyboard();
  install_mouse();
  show_mouse(screen);

  while(!key[KEY_ESC]){

  printf("Enter co-ordinates of first point: ");
  scanf("%d%d", &xo, &yo);
 
  printf("Enter co-ordinates of second point: ");
  scanf("%d%d", &xi, &yi);
  drawmyline(xo, yo, xi, yi);
 
  }
  
}
END_OF_MAIN()