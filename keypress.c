#include <stdio.h>
#include <conio.h>

int main()
{
int ch;
ch = _getch ();
if (ch == 0 || ch == 224)
{
    switch (_getch ())
    {
        case 72:
            /* Code for up arrow handling */
            printf("UP");
            break;

        case 80:
            /* Code for down arrow handling */
            printf("DOWN");
            break;

        /* ... etc ... */
    }
}
}
