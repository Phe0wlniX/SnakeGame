#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>

#include "Variables.h"
#include "SubFunctions.h"

using namespace std;

void getFruitX (int width, int &fruitX)
{
	fruitX = rand () % (width);
	
	if (fruitX == 0)
		fruitX = 1;
	
	if (fruitX > width - 2)
		fruitX = width - 2;
}


void getFruitY (int height, int &fruitY)
{
	fruitY = rand () % (height);
	
	if (fruitY == 0)
		fruitY = 1;
		
	if (fruitY > height -2)
		fruitY = height -2;
}



