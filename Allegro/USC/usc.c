#include<stdio.h>
#include<allegro.h>
#include<stdlib.h>
#include<unistd.h>

int fechar=0;

void sobre(){
 allegro_init();
 set_color_depth(32);
 set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
 BITMAP *buffer = create_bitmap(640,480);
 install_keyboard();
 install_mouse();

int voltar=0;

do{

 BITMAP* sobr;
 sobr=load_bitmap("sobre.bmp",NULL);
 draw_sprite(buffer,sobr,0,0);


  if (mouse_b & 1){
            if(mouse_x>0 && mouse_x<100 && mouse_y>400 && mouse_y<470){

         voltar=1;
        }
        }

int x,y;
 x = mouse_x;
 y = mouse_y;
 circle(buffer, x, y, 25, makecol(0,255,0));
 blit(buffer,screen,0,0,0,0,640,480);
 clear_bitmap(buffer);

}while(voltar==0);
fechar=0;
allegro_exit();
}END_OF_FUNCTION();

//------------------------------

void menu(){

 int x;
 int y;

 allegro_init();
 set_color_depth(32);
 set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
 BITMAP *buffer = create_bitmap(640,480);
 install_keyboard();
 install_mouse();


do{

    BITMAP *menu;
	menu=load_bitmap("menu.bmp", NULL);
	draw_sprite(buffer,menu,0,0);


        if (mouse_b & 1){
            if(mouse_x>200 && mouse_x<450 && mouse_y>180 && mouse_y<270){
         fechar=1;
        }
        }

          if (mouse_b & 1){
            if(mouse_x>200 && mouse_x<450 && mouse_y>280 && mouse_y<360){

        fechar=2;

        }
        }

      if (mouse_b & 1){
            if(mouse_x>200 && mouse_x<450 && mouse_y>370 && mouse_y<450){
        fechar=3;
        }
        }

        if(key[KEY_ESC]){
        fechar=3;
        }

 x = mouse_x;
 y = mouse_y;


 circle(buffer, x, y, 25, makecol(0,255,0));

 blit(buffer,screen,0,0,0,0,640,480);
 clear_bitmap(buffer);
}while(fechar==0);
allegro_exit();
}END_OF_FUNCTION();
//###########################################################################################
int main(){

if(fechar==0){
menu();
}

if(fechar==2){
allegro_exit();
sobre();
menu();
}

if(fechar==3){
allegro_exit();
return 0;
}


allegro_init();
set_color_depth(32);
set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0);
install_keyboard();

int x=320;
int y=400;

int z;
int w=0;

    int num;
    int num2;
	int i;
     srand(time(NULL));

   for (i=0; i < 1; i++)
     {// gerando valores aleatórios na faixa de 0 a 4
           num = rand()%5;
           num2=rand()%5;
     }

	
BITMAP* buffer;
buffer = create_bitmap(640,480);

BITMAP* carro;
char car[10];
sprintf(car,"carro%d.bmp",num);
carro = load_bitmap(car,NULL);

BITMAP *pista[4];

char s[20];
int curframe=0, framedelay=5, framecount=0;
int n;


	//load the animated sprite
    for (n=0; n<3; n++)
    {
        sprintf(s,"%d.bmp",n+1);
        pista[n] = load_bitmap(s, NULL);
    }

BITMAP *gameover;
gameover=load_bitmap("gameover.bmp", NULL);

BITMAP *fumaca;
fumaca=load_bitmap("fumaca.bmp", NULL);

BITMAP *batida;
batida=load_bitmap("batida.bmp", NULL);
//#########################################################################################
int counter = 0;
char nivel[5];
int level=1;

char vidas[5];
int lives=3;

while(!key[KEY_ESC]){
/*
char txt[40];
    sprintf(txt,"X: %d    Y: %d", x, y);
    textout(screen,font,txt,5,5,makecol(255,0,0));
*/

if (counter == 2000){
	level = level+1;
	counter = 0;
}

sprintf(vidas,"%d",lives);
sprintf(nivel,"%d",level);

textout_ex(buffer,font,"Vidas:",0,0,makecol(0,255,0),-1);
textout_ex(buffer,font,vidas,60,0,makecol(0,255,0),-1);

textout_ex(buffer,font,"Nivel:",0,10,makecol(0,255,0),-1);
textout_ex(buffer,font,nivel,60,10,makecol(0,255,0),-1);

BITMAP* carro2;
char car2[10];
sprintf(car2,"carro-op%d.bmp",num2);
carro2 = load_bitmap(car2,NULL);

w=w+2;


blit(buffer,screen,0,0,0,0,640,480);
clear(buffer);

	if (framecount++ > framedelay)
		{
			framecount = 0;
			curframe++;
			if (curframe > 2)
				curframe = 0;
        }

		acquire_screen();

		//draw the sprite

		draw_sprite(buffer, pista[curframe], 150, 0);

		release_screen();
        rest(10);
	
//----------------------------------------------

if(lives == 0){
do{
draw_sprite(screen,gameover,0,0);
draw_sprite(screen,fumaca,x+10,y-60);
if(key[KEY_SPACE]){
level = 1;
lives = 3;
w = 500;
x=320;
y=400;
}
}while(lives == 0);	  
}



//--------------------------------------------------

if(key[KEY_LEFT]){
x=x-2;
draw_sprite(buffer,carro,x,y);
}

if(key[KEY_RIGHT]){
x=x+2;

draw_sprite(buffer,carro,x,y);
}

if(key[KEY_UP]){
y=y-2;
draw_sprite(buffer,carro,x,y);
}

if(key[KEY_DOWN]){
y=y+2;
draw_sprite(buffer,carro,x,y);
}
draw_sprite(buffer,carro,x,y);


//---------------------------------------------------------------

//COLISÕES


if(x<155){
    x=155;
}

if(x>440){
    x=440;
}

if(y>410){
    y=410;
}

if(y<-1){
    y=-1;
}


if(w+60>=y && w<=y+60 && z+50>=x && z<=x+50){
draw_sprite(screen,batida,0,0);
w = 500;
rest(300);
lives = lives-1;

}

//---------------------------------------------------------------
if(num==0){
z=170;
draw_sprite(buffer,carro2,z,w);

}

if(num==1){
z=230;
draw_sprite(buffer,carro2,z,w);
}

if(num==2){
z=295;
draw_sprite(buffer,carro2,z,w);
}

if(num==3){
z=350;
draw_sprite(buffer,carro2,z,w);
}

if(num==4){
z=415;
draw_sprite(buffer,carro2,z,w);
}

if(w>500){
         for (i=0; i < 1; i++)
     {// gerando valores aleatórios na faixa de 0 a 4
           num = rand()%5;
            num2=rand()%5;
     }
w=-100;
}

//-------------------- Contador
counter = counter +1;
//--------------------

}
return 0;
}END_OF_MAIN();
