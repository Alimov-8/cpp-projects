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
const int height = 7;
int x=20, y=6, fruitX[10], fruitY[10];

void Setup() {
	gameOver = false;
}

void Map() {
	system("cls");
	cout << "\t\t  FINISH\n";
	for (int i = 0; i <= width; i++) {
		cout << "_";
	}
	for (int i=0;i<height;i++) {
		for (int j = 0; j <= width; j++) {
				if (i == y && j == x) {
					if(y==1) gameOver = true;
					cout << "$";
				}
				if (i == fruitY[1] && j == fruitX[1]) {
					cout << "#";
				}
				if (i == fruitY[2] && j == fruitX[2]) {
					cout << "#";
				}
				if (i == fruitY[3] && j == fruitX[3]) {
					cout << "#";
				}
				if (i == fruitY[4] && j == fruitX[4]) {
					cout << "#";
				}
				if (i == fruitY[5] && j == fruitX[5]) {
					cout << "#";
				}
				if (i == fruitY[6] && j == fruitX[6]) {
					cout << "#";
				}
				if (i == fruitY[7] && j == fruitX[7]) {
					cout << "#";
				}
				if (i == fruitY[8] && j == fruitX[8]) {
					cout << "#";
				}
				else
					cout << " ";
		}
		cout << endl;
	}

	for (int i = 0; i <= width; i++) {
		cout << "_";
	}
	cout << "\n\t\t  START\n";
}

void Input() {
	if (_kbhit()) {
		switch (_getch())
		{
		case 'a':
			x--;
			break;
		case 'd':
			x++;
			break;
		case 'w':
			y--;
			break;
		case 's':
			y++;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}
}

void Logic() {
	if (x > width || x<0 || y>height || y < 0)
		gameOver = true;
	fruitX[1]++;
	fruitX[2]++;
	fruitX[3]++;
	fruitX[4]++;
	fruitX[5]++;
	fruitX[6]++;
	fruitX[7]++;
	fruitX[8]++;
	if (x == fruitX[1] && y == fruitY[1]) {
		gameOver = true;
	}
	if (x == fruitX[2] && y == fruitY[2]) {
		gameOver = true;
	}
	if (x == fruitX[3] && y == fruitY[3]) {
		gameOver = true;
	}
	if (x == fruitX[4] && y == fruitY[4]) {
		gameOver = true;
	}
	if (x == fruitX[5] && y == fruitY[5]) {
		gameOver = true;
	}
	if (x == fruitX[6] && y == fruitY[6]) {
		gameOver = true;
	}
	if (x == fruitX[7] && y == fruitY[7]) {
		gameOver = true;
	}
	if (x == fruitX[8] && y == fruitY[8]) {
		gameOver = true;
	}
	if (fruitX[1] == 39) {
		fruitX[1] = 1;
		fruitY[1] = 5;}
	if (fruitX[2] == 39) {
		fruitX[2] = 1;
		fruitY[2] = 5;}
	if (fruitX[3] == 39) {
		fruitX[3] = 1;
		fruitY[3] = 4;}
    if (fruitX[4] == 39) {
		fruitX[4] = 1;
		fruitY[4] = 4;}
	if (fruitX[5] == 39) {
		fruitX[5] = 1;
		fruitY[5] = 3;}
	if (fruitX[6] == 39) {
		fruitX[6] = 1;
		fruitY[6] = 3;}
	if (fruitX[7] == 39) {
		fruitX[7] = 1;
		fruitY[7] = 2;}
	if (fruitX[8] == 39) {
		fruitX[8] = 1;
		fruitY[8] = 2;}
}

int main() {
	fruitX[1] = 1;
	fruitY[1] = 5;
	fruitX[2] = 3;
	fruitY[2] = 5;

	fruitX[3] = 11;
	fruitY[3] = 4;
	fruitX[4] = 18;
	fruitY[4] = 4;

	fruitX[5] = 25;
	fruitY[5] = 3;
	fruitX[6] = 32;
	fruitY[6] = 3;

	fruitX[7] = 1;
	fruitY[7] = 2;
	fruitX[8] = 25;
	fruitY[8] = 2;
	Setup();
	while (!gameOver) {
		Map();
		Input();
		Logic();
		
	}

	cout << endl;
	system("pause");
	return 0;
}