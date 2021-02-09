#include <conio.h>
#include <Windows.h>

#include "getFruit.cpp"
#include "Functions.h"
#include "SubFunctions.h"

using namespace std;

void Setup (int height, int width, int x, int y, int ntail, int &fruitX, int &fruitY, int *tailX, int *tailY)
{
	x = width / 2 - 1;
	y = height / 2 - 1;
	
	getFruitX (int width, int &fruitX);
	getFruitY (int height, int &fruitY);
	
	for (int i = 0; i < 100; i++)
	{
		ntail = 0;
		tailX[i] = 0;
		tailY[i] = 0;
	}
}



