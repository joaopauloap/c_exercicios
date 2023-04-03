#include<stdio.h>
#include<allegro.h>

int main(){

allegro_init();
set_color_depth(32);
set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0);
install_keyboard();
install_mouse();
show_mouse(screen);

BITMAP* buffer;
buffer = create_bitmap(640,480);

int x=0;
int z=0;

int y=0;
int w=0;

while(!key[KEY_ESC]){

 if (mouse_b & 1)
 {
 z = mouse_x;
 w = mouse_y;
 }

if(x<z){
while(x!=z){
circlefill(buffer,x,y,25,makecol(255,255,0));
 blit(buffer,screen,0,0,0,0,640,480);
 clear_bitmap(buffer);
 x=x+1;
}
}

if(x>z){
while(x!=z){
circlefill(buffer,x,y,25,makecol(255,255,0));
 blit(buffer,screen,0,0,0,0,640,480);
 clear_bitmap(buffer);
 x=x-1;
}
}


//------------------------------------------------------------------------------
if(y<w){
while(y!=w){
circlefill(buffer,x,y,25,makecol(255,255,0));
 blit(buffer,screen,0,0,0,0,640,480);
 clear_bitmap(buffer);
 y=y+1;
}
}

if(y>w){
while(y!=w){
circlefill(buffer,x,y,25,makecol(255,255,0));
 blit(buffer,screen,0,0,0,0,640,480);
 clear_bitmap(buffer);
 y=y-1;
}
}




}
}END_OF_MAIN();
