#include <stdio.h>
#include <stdlib.h>
#include <allegro.h>
int main(){
	
	allegro_init();install_mouse();install_keyboard();set_color_depth(32);set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800,600,0,0);
	
/*	char url[]="parametro.c";
	FILE *arq;
	arq = fopen(url, "w"); */
	char param[100];
	char cor [100];
	int cor2;
	int x,y;
	int diam;

	printf("Digite Parametro: ");
	scanf("%s %s",param,cor);
	
	
	if (strcmp (cor, "azul") == 0){
		cor2 = 255;
	}	
	
	if (strcmp (cor, "verde") == 0){
		cor2 = 44300;
	}
	
	
	if (strcmp (param, "bola") == 0){
		
		while((!mouse_b & 1)){
		x = mouse_x;
		y = mouse_y;
		diam = mouse_z;
		clear(screen);
		circlefill(screen,x,y,diam,cor2);
		
		if(mouse_b & 1){
		printf("%d,%d",x,y);
		readkey();
		}

	}
	}
/*	fprintf(arq, "#include<stdio.h>\n#include<allegro.h>\nint main(){allegro_init();install_keyboard();set_color_depth(32);set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800,600,0,0);while(!key[KEY_ESC]){%s}}END_OF_MAIN();", string);
	//fprintf(arq,"",string);
	fclose(arq);
	system("gcc parametro.c -Wall -lalleg");
*/	getchar();
	return 0;
	
}END_OF_MAIN();