
#include <stdio.h>
#include "allegro.h"

#define WHITE makecol(255,255,255)
#define BLACK makecol(0,0,0)

BITMAP *kitty[7];
char s[20];
int curframe=0, framedelay=5, framecount=0;
int x=100, y=200, n;

int main(void)
{
	//initialize the program
    allegro_init();
    install_keyboard();
    install_timer();
	set_color_depth(16);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);

	//load the animated sprite
    for (n=0; n<6; n++)
    {
        sprintf(s,"cat%d.bmp",n+1);
        kitty[n] = load_bitmap(s, NULL);
    }

	//main loop
    while(!key[KEY_ESC])
    {
		//erase the sprite
		rectfill(screen, x, y, x+kitty[0]->w, y+kitty[0]->h, BLACK);

		//update the position
        x += 5;
        if (x > SCREEN_W - kitty[0]->w)
            x = 0;

		//update the frame
		if (framecount++ > framedelay)
		{
			framecount = 0;
			curframe++;
			if (curframe > 5)
				curframe = 0;
        }

		acquire_screen();

		//draw the sprite
		draw_sprite(screen, kitty[curframe], x, y);

		//display logistics

		release_screen();
        rest(10);
    }

    return 0;
}

END_OF_MAIN();

