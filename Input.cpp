#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>

#include "eDirection.h"


using namespace std;

void Input (eDirection &dir, int &speed, bool &gameOver)
{
	if (_kbhit())
	{
		switch (_getch())
		{
			case 'a':
				dir = LEFT;
				break;
			case 'd':
				dir = RIGHT;
				break;
			case 'w':
				dir = UP;
				break;
			case 's':
				dir = DOWN;
				break;
			case 'x':
				gameOver = true;
				break;
			case ']':
				if (speed <= 80)
					speed +=10;
				break;
			case '[':
				if (speed >=20)
					speed -=10;
				break;
		}
	}
}


