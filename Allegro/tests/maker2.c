#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char url[]="parametro.c";
	FILE *arq;
	char string[100];
	arq = fopen(url, "w");

		printf("Digite Parametro: ");
		gets(string);
		fprintf(arq, "#include<stdio.h>\n#include<allegro.h>\nint main(){allegro_init();install_keyboard();set_color_depth(32);set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800,600,0,0);while(!key[KEY_ESC]){%s}}END_OF_MAIN();", string);
		//fprintf(arq,"",string);
		fclose(arq);
		system("gcc parametro.c -Wall -lalleg");
		system("del parametro.c");
	return 0;
}END_OF_MAIN();