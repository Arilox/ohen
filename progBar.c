#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "display.h"



int main (){
	
	int spacingLeft=4, barLenght=20, size=60, part=50, total=60;
	Color colorFont= RED;
    Color colorBar= YELLOW;
	char message[30] = "Ohen";
	
	progBar(spacingLeft, message, barLenght, size, part, total, colorFont, colorBar);
	
}