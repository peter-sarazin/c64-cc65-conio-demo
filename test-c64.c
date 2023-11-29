#include <c64.h>
#include <conio.h>

#include "conio-util.h"

int main()
{
    int x, y;

    bgcolor(COLOR_BLACK);
    bordercolor(COLOR_BLACK);
    textcolor(COLOR_BLUE);

    // clear the screen and set a background...
    for (x = 0; x < 40; x++)
    {
        for (y = 0; y < 25; y++)
        {
            cputcxy(x, y, 230);
        }
    }

    messagebox(8, 10, "Hello Commodore 64!\0", COLOR_WHITE, COLOR_GREEN);

    while (!kbhit())
        ; // wait for a key press before exit

    return 0;
}