#include <stdio.h>
#include <allegro.h>

int main(){

    char imagem[10];
    printf("Digite o caminho da imagem:");
    scanf("%s",&imagem);
    getchar();

    allegro_init();
    install_keyboard();

    set_color_depth(16);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);

    BITMAP* img;
    img = load_bitmap(imagem,NULL);
    draw_sprite(screen,img,0,40);
    readkey();

return 0;
}END_OF_MAIN();
