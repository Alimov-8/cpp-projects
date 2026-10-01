#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


using namespace std;
bool gameOver;
const int width = 40;
const int height = 20;
int x, y, fruitX, fruitY, score; //Variables cordinates 
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void Setup() {

	gameOver = false;
	dir = STOP;
	x = width / 2 - 1;
	y = height / 2 - 1;
	srand(time(0));
	fruitX = rand() % width;
	fruitY = rand() % height;

}


void Draw() {
	system("cls"); //system("clear");
	for (int i = 0; i < width + 1; i++) // Upper Stone
		cout << "#";
	cout << endl;

	for (int i = 0; i < height; i++) { //Side stones
		for (int j = 0; j < width; j++) {
			if (j == 0 || j == width - 1) {
				SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
				cout << "#";
			}
			if ( i == y && j == x) {
				SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY );
				cout << "O";
			}
			else if (i == fruitY && j == fruitX) {
				SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY );
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < width + 1; i++) // Downer Srone
		cout << "#";
	cout << endl;
	cout << "Score:" << score << endl;
}


void Input() {
	if (_kbhit()) {
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
		}
	}
}

void Logic() {
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
	if (x > width || x<0 || y>height || y < 0)
		gameOver = true;
	if (x == fruitX && y == fruitY) {
		score += 10;
		srand(time(0));
		fruitX = rand() % width;
		fruitY = rand() % height;

	}
}

int main()
{
	//system("COLOR F0");
	Setup();
	while (!gameOver) {
		Draw();
		Input();
		Logic();
	}
	cout << "YOUR SCORE " << score << endl;
	system("pause");
	return 0;
}





