#include <c64.h>
#include <conio.h>

#include "conio-util.h"

int main()
{
    clearscreen(COLOR_BLUE, COLOR_BLACK, COLOR_BLACK, 230);
    messagebox(8, 10, "Hello Commodore 64!\0", COLOR_WHITE, COLOR_GREEN);

    while (!kbhit())
        ; // wait for a key press before exit

    return 0;
}