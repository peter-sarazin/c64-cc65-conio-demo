# c64-cc65-conio-demo
Just for fun:  creating PC-DOS style console i/o functions for the Commodore 64 in C

My environment includes WSL (Windows Subsystem for Linux) with Ubuntu Linux on Windows with cc65 compiler, GNU make utility, VICE Commodore 64 Emulator, and Visual Studio Code for editor.

Use GNU make to build:

make CC65_TARGET=c64

This will create target executable test-c64 which you can drag and drop into the VICE Commodore 64 emulator.

Functions:

void messagebox( unsigned char x, unsigned char y, char * message, unsigned char textcolor, unsigned char bgcolor );

<img src="VICE-screenshot.png">

KNOWN ISSUES:

- Having trouble with the conio textcolor and bgcolor functions.  Can't seem to call them from a method other than main, and they do not seem to like switching colors.  The last color selected wins.
