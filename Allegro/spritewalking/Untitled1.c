#include <stdio.h>
#include <allegro.h>

#define WHITE makecol(255,255,255)
#define BLACK makecol(0,0,0)

int main()
{
	//initialize the program
    allegro_init();
    install_keyboard();
    install_timer();
	set_color_depth(16);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);


BITMAP *boneco[5];

char s[20];
int curframe=0, framedelay=5, framecount=0;
int x=100, y=200, n;

 BITMAP* buffer;
    buffer = create_bitmap(640,480);
	//load the animated sprite

    for (n=0; n<4; n++)
    {
        sprintf(s,"%d.bmp",n+1);
        boneco[n] = load_bitmap(s, NULL);
    }

	//main loop
    while(!key[KEY_ESC]){

        if(key[KEY_RIGHT]){
		//erase the sprite

	   blit(buffer,screen,0,0,0,0,640,480);
            clear(buffer);

		//update the position
        x += 3;
        if (x > SCREEN_W - boneco[0]->w)
            x = 0;

		//update the frame

		if (framecount++ > framedelay)
		{
			framecount = 0;
			curframe++;
			if (curframe > 3)
				curframe = 0;
        }

		acquire_screen();

		//draw the sprite

		draw_sprite(buffer, boneco[curframe], x, y);

		release_screen();
        rest(10);
    }
}}
END_OF_MAIN();

