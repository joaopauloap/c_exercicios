#include<stdio.h>
#include <allegro.h>

BITMAP* buffer;
int cursor_x = 20;
int cursor_y = 20;
int getMouseInfo(){
     if(mouse_b & 1){
                  cursor_x = mouse_x;
                  cursor_y = mouse_y;
      return 1;
     }
  return 0;
}
void updateScreen(){

     show_mouse(NULL);
     circlefill ( buffer, cursor_x, cursor_y, 5, makecol( 0, 0, 255));
     draw_sprite( screen, buffer, 0, 0);
}
int main(){

    allegro_init();
    install_mouse();
    install_keyboard();
    set_color_depth(16);
    set_gfx_mode( GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);

    buffer = create_bitmap( 640, 480);

    show_mouse(screen);

    while( !key[KEY_ESC])
 {
  int switcher=1;
  while(getMouseInfo())
  {
   updateScreen();
   if(getMouseInfo()==0) switcher=0;
  }
  if(switcher==0) show_mouse(screen);
    }

 return 0;
}
END_OF_MAIN();
