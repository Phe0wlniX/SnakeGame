#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>

#include "Variables.h"
#include "Input.cpp"
#include "Draw.cpp"
#include "Logic.cpp"
#include "Setup.cpp"
#include "getFruit.cpp"
#include "Functions.h"

using namespace std;


int main(int argc, char** argv) {
	Setup (int height, int width, int x, int y, int ntail, int &fruitX, int &fruitY, int *tailX, int *tailY);
	Draw (int x, int y, int width, bool gameOver, int fruitX, int fruitY, int Score, int speed, int ntail, int *tailX, int *tailY);
	while (gameOver == false)
	{
		Sleep (100 - speed);
		Draw (int x, int y, int width, bool gameOver, int fruitX, int fruitY, int Score, int speed, int ntail, int *tailX, int *tailY);
		Input (eDirection &dir, int &speed, bool &gameOver);
		Logic (eDirection &dir, int &x, int &y, int &fruitX, int &fruitY, int &ntail, int Score, int speed, bool gameOver);
	}
	return 0;
}

