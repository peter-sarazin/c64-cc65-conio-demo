#include <c64.h>
#include <conio.h>
#include <string.h>

void messagebox(unsigned char x, unsigned char y, char *message, unsigned char text_color, unsigned char bg_color)
{

    unsigned char startx, starty;
    unsigned char message_length;

    startx = x;
    starty = y;
    message_length = strlen(message);

    textcolor(text_color);
    bgcolor(bg_color);

    // draw a box
    for (x = startx; x < startx + message_length + 4; x++)
    {
        for (y = starty; y < starty + 5; y++)
        {
            cputcxy(x, y, 32);
        }
    }

    // print the message
    cputsxy(startx + 2, starty + 2, message);

    // add a shadow
    textcolor(COLOR_GRAY1);
    bgcolor(COLOR_GRAY3);

    // x axis
    for (x = startx + 1; x < startx + message_length + 4 + 1; x++)
    {
        gotoxy(x, starty + 5);
        cputcxy(x, starty + 5, cpeekc());
    }

    // y axis
    for (y = starty + 1; y < starty + 5 + 1; y++)
    {
        gotoxy(startx + message_length + 4, y);
        cputcxy(startx + message_length + 4, y, cpeekc());
    }
}

void clearscreen(unsigned char text_color, unsigned char bg_color, unsigned char border_color, char fill_character)
{
    unsigned char x, y;

    textcolor(text_color);
    bgcolor(bg_color);
    bordercolor(border_color);

    // clear the screen and set a background...
    for (x = 0; x < 40; x++)
    {
        for (y = 0; y < 25; y++)
        {
            cputcxy(x, y, fill_character);
        }
    }
}