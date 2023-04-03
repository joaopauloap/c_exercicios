#include<stdio.h>
#include <allegro.h>
int main() {
 int x;
 int y;


 allegro_init();
 set_color_depth(32);
 set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
 BITMAP *buffer = create_bitmap(640,480);
 install_keyboard();
 install_mouse();
 show_mouse(screen);

 while (!key[KEY_ESC]) {
line(buffer,10,0,10,480,makecol(255,0,0));
line(buffer,630,0,630,480,makecol(255,0,0));
line(buffer,0,10,640,10,makecol(255,255,255));
line(buffer,0,470,640,470,makecol(255,255,255));

    BITMAP *menu;
	menu=load_bitmap("menu.bmp", NULL);
	draw_sprite(buffer,menu,210,30);

    BITMAP *op1;
	op1=load_bitmap("op1.bmp", NULL);
	draw_sprite(buffer,op1,220,190);

    BITMAP *op2;
    op2=load_bitmap("op2.bmp", NULL);
	draw_sprite(buffer,op2,220,275);

	 BITMAP *op3;
	op3=load_bitmap("op3.bmp", NULL);
	draw_sprite(buffer,op3,220,360);

        if (mouse_b & 1){
            if(mouse_x>200 && mouse_x<450 && mouse_y>180 && mouse_y<270){
         printf("OPCAO 1\n");
        }
        }

          if (mouse_b & 1){
            if(mouse_x>200 && mouse_x<450 && mouse_y>280 && mouse_y<360){
         printf("OPCAO 2\n");
        }
        }

      if (mouse_b & 1){
            if(mouse_x>200 && mouse_x<450 && mouse_y>370 && mouse_y<450){
         printf("OPCAO 3\n");
        }
        }

 x = mouse_x;
 y = mouse_y;


 circlefill(buffer, x, y, 25, makecol(255,128,0));

 blit(buffer,screen,0,0,0,0,640,480);
 clear_bitmap(buffer);

 }
return 0;
}
END_OF_MAIN()
