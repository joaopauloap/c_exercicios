#include<stdio.h>
#include <allegro.h>
int main() {
 int x;
 int y;
 int x1;
 int y1;
 allegro_init();
 set_color_depth(32);
 set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
 BITMAP *buffer = create_bitmap(640,480);
 install_keyboard();
 install_mouse();
 show_mouse(screen);
 while (!key[KEY_ESC]) {
 if (mouse_b & 1)
 {
 x = mouse_x;
 y = mouse_y;
 }
 if (mouse_b & 2){
 x1 = mouse_x;
 y1 = mouse_y;
 }
 circlefill(buffer, x, y, 50, makecol(255,255,255));
 circlefill(buffer, x1, y1, 50, makecol(0,0,255));
 blit(buffer,screen,0,0,0,0,640,480);
 clear_bitmap(buffer);
 }
return 0;
}
END_OF_MAIN()
