#include<stdio.h>
#include<allegro.h>
#include<math.h>

int main(){

    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);

    BITMAP* buffer = create_bitmap(800,600);
	BITMAP* rastro = create_bitmap(800,600);
	BITMAP* grid = load_bitmap("grid.bmp",NULL);
    BITMAP* up = load_bitmap("up.bmp",NULL);
    BITMAP* down = load_bitmap("down.bmp",NULL);
    BITMAP* right = load_bitmap("right.bmp",NULL);
    BITMAP* left = load_bitmap("left.bmp",NULL);
    
	float y = 100;
    float x = 100;
	
	float valx = 0;
	float valy = 0;
	
	float stopy;
	float stopx;
	
	
	int intstopx;
	int intstopy;
	
	int dot = 0;
	
	int condtd = 0;
	int condtu = 0;
	int condtl = 0;
	int condtr = 0;
	
    while(!key[KEY_ESC]){
	
	
//-----------------------------------------------------------CONTROLES	
	if(key[KEY_C]){
		clear(rastro);
	}	
	if(key[KEY_SPACE]){
		readkey();
	}

//----------------------------
	
	if (condtu == 0){
    if(key[KEY_UP]){
			valy=-0.6;
			valx=0;
			stopx = x;
			stopy = y;			
			intstopx = round(stopx);
			intstopy = round(stopy);
			
			condtu = 0;
			condtl = 0;
			condtr = 0;
			condtd = 1;
    }
	}
	
	if (condtl == 0){
	if(key[KEY_LEFT]){
			valy=0;
			valx=-0.6;
			stopx = x;
			stopy = y;			
			intstopx = round(stopx);
			intstopy = round(stopy);
			
			condtu = 0;
			condtl = 0;
			condtr = 1;
			condtd = 0;
    }
	}

	if (condtr == 0){
	if(key[KEY_RIGHT]){
			valy=0;
			valx=+0.6;  
			
			stopx = x;
			stopy = y;			
			intstopx = round(stopx);
			intstopy = round(stopy);
			
			condtu = 0;
			condtl = 1;
			condtr = 0;
			condtd = 0;
    }
	}
	
	if (condtd == 0){
	if(key[KEY_DOWN]){
			valy=+0.6;
			valx=0;		
			stopx = x;
			stopy = y;			
			intstopx = round(stopx);
			intstopy = round(stopy);	
			
			condtu = 1;
			condtl = 0;
			condtr = 0;
			condtd = 0;
	}
	}
//--------------------------------------------------------------------
		x=x+valx;
		y=y+valy;
		
       blit(buffer,screen,0,0,0,0,800,600);
	   clear(buffer);
	   blit(rastro,buffer,0,0,0,0,800,600);
	   
	   if(dot == 0){
		    draw_sprite(rastro,grid,0,0);
			dot = 1;
	   }
	   
		if(valx>0){//RIGHT
			draw_sprite(buffer,right,x,y);
			rectfill(rastro,intstopx+7,y+5,x+17,y+16,makecol(255,0,0));
		}
		
		if(valx<0){//LEFT
			draw_sprite(buffer,left,x-60,y);
			rectfill(rastro,intstopx+7,y+5,x+17,y+16,makecol(255,0,0));
		}
        
		if(valy>0){//DOWN
			draw_sprite(buffer,down,x,y);
			rectfill(rastro,x+7,intstopy+5,x+17,y+16,makecol(255,0,0));
		}
		
		if(valy<0){//UP
			draw_sprite(buffer,up,x,y-60);
			rectfill(rastro,x+7,intstopy+5,x+17,y+16,makecol(255,0,0));
		}
		

	
//---------------------------------------------------------------------COLISÃO
		
//---------------------------------------------------------------------	
		
}
return 0;
}END_OF_MAIN();

