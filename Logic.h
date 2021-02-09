#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>

#include "Functions.h"
#include "Variables.cpp"
#include "eDirection.h"
#include "getFruit.cpp"

void Logic (eDirection &dir, int &x, int &y, int &fruitX, int &fruitY, int &ntail, int Score, int speed, bool gameOver)
{
	if (fruitX == x && fruitY == y)
	{
		ntail++;
		Score = Score + 10 + ((speed - 10) /10);
		getFruitX (int width, int &fruitX);
		getFruitY (int height, int &fruitY);
		int n = 0;
		for (int k = 0; k < ntail; k++)
		{
			if (tailY [k] == fruitY && tailX [k] == fruitX)
			while (tailY [k] == fruitY && tailX [k] == fruitX)
			{
				getFruitX (int width, int &fruitX);
				getFruitY (int height, int &fruitY);
				k = 0;
				
				n++;
				if(n>15)
				{
					gameOver = true;
					break;
				}
			}
		}
	}
	
	int prevX = tailX [0];
	int prevY = tailY [0];
	int prev2Y, prev2X;
	tailX[0] = x;
	tailY[0] = y;
	for (int i = 1; i < ntail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}

	switch (dir)
	{
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
			break;
		case UP:
			y--;
			break;
		case DOWN:
			y++;
			break;
	}
	
	for (int i = 0; i < ntail; i++)
	{
		if(tailX[i] == x && tailY[i] == y)
		{
			gameOver = true;
		}
	}
	
	if (x >= width -1 || y >= height -1 || x <= 0 || y <= 0)
	{
		gameOver = true;
	}
}



