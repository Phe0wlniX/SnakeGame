#include "Variables.h"
#include "SubFunctions.h"

void Setup (int height, int width, int x, int y, int ntail, int &fruitX, int &fruitY, int *tailX, int *tailY);
void Logic (eDirection &dir, int &x, int &y, int &fruitX, int &fruitY, int &ntail, int Score, int speed, bool gameOver);
void Draw (int x, int y, int width, bool gameOver, int fruitX, int fruitY, int Score, int speed, int ntail, int *tailX, int *tailY);
void Input (eDirection &dir, int &speed, bool &gameOver);
