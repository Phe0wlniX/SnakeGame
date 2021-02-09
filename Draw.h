#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>

#include "Variables.cpp"
#include "Functions.h"

using namespace std;

void Draw (int x, int y, int width, bool gameOver, int fruitX, int fruitY, int Score, int speed, int ntail, int *tailX, int *tailY)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleCursorPosition(hConsole, { 0, 0 });
	
	SetConsoleTextAttribute(hConsole, 15);
	for (int i = 0; i < width ; i++)
	{
		cout<<"#";
	}
	cout<<endl;

	for (int i = 1; i < width - 1; i++)
	{
		for (int j = 0; j < width ; j++)
		{
			bool empty = true;
		
				if (j == 0 || j == width - 1)
					{
						SetConsoleTextAttribute(hConsole, 15);
						cout<< "#";
						empty = false;
					}
				
				if (j == x && i == y)
					{
						SetConsoleTextAttribute(hConsole, 10);
						cout<<"O";
						empty = false;
					}
				
				if (fruitX == j && fruitY == i)
					{
						SetConsoleTextAttribute(hConsole, 12);
						cout<<"$";
						empty = false;
					}
					
				for (int k = 0; k < ntail; k++)
					{
						if (tailX[k] == j && tailY[k] == i)
						{
							SetConsoleTextAttribute(hConsole, 11);
							cout<<"O";
							empty = false;
							break;
						}
					}
				
				if (empty == true)
					printf(" ");
		}
		cout<< "\n";
	}
	for (int i = 0; i < width ; i++)
		cout<<"#";
	
	printf("\nScore %i\n", Score);
	printf("Speed %i\n", speed);
	printf("\nWASD - Control");
	printf("\n[ ] - Speed");
}



