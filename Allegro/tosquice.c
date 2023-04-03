#include<stdio.h>
#include<allegro.h>


int main(){
	
	allegro_init();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
	install_keyboard();
	install_mouse();
	
	int x = 1;
	char text[x];
	int txt;
	char texto[100];
	int xmov = 0;
	
	while(!key[KEY_ENTER]){
	txt = readkey();
	
	if((txt&0xff)==32){//ESPAÇO
		text[x] = ' ';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	
	if((txt&0xff)=='a'){
		text[x] = 'a';
		sprintf(texto,"%c",text[x]);
		x++;
	}
		if((txt&0xff)=='b'){
		text[x] = 'b';
		sprintf(texto,"%c",text[x]);
		x++;
	}
		if((txt&0xff)=='c'){
		text[x] = 'c';
		sprintf(texto,"%c",text[x]);
		x++;
	}
		if((txt&0xff)=='d'){
		text[x] = 'd';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='e'){
		text[x] = 'e';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='f'){
		text[x] = 'f';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='g'){
		text[x] = 'g';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='h'){
		text[x] = 'h';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='i'){
		text[x] = 'i';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='j'){
		text[x] = 'j';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='k'){
		text[x] = 'k';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='l'){
		text[x] = 'l';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='m'){
		text[x] = 'm';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='n'){
		text[x] = 'n';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='o'){
		text[x] = 'o';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='p'){
		text[x] = 'p';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='q'){
		text[x] = 'q';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='r'){
		text[x] = 'r';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='s'){
		text[x] = 's';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='t'){
		text[x] = 't';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='u'){
		text[x] = 'u';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='v'){
		text[x] = 'v';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='w'){
		text[x] = 'w';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='x'){
		text[x] = 'x';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='y'){
		text[x] = 'y';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	if((txt&0xff)=='z'){
		text[x] = 'z';
		sprintf(texto,"%c",text[x]);
		x++;
	}
	
	
	
    textout_ex(screen,font,texto,xmov,0,makecol(0,255,0),-1);
	xmov=xmov+8;
	}
	return 0;
	
}END_OF_MAIN();