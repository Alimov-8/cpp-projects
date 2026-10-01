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
const int height = 5;
int x = 20, y = 4, c, cc, fruitX[10], fruitY[10];

void Setup() {
	gameOver = false;
}

void Map() {
	system("cls");
	cout << "\t  SCORE: " << cc << endl;
	for (int i = 0; i <= width; i++) {
		cout << "_";
	}
	for (int i = 0; i < height; i++) {
		for (int j = 0; j <= width; j++) {
			if (i == y && j == x) {
				if (y == 1) gameOver = true;
				cout << "@";
			}
			if (i == fruitY[1] && j == fruitX[1]) {
				cout << "#";
			}
			if (i == fruitY[2] && j == fruitX[2]) {
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
	cout << "\n\t\t --->>>\n";
}

void Input() {
	if (_kbhit()) {
		switch (_getch())
		{
		case 32:
			y--; y--; y--; c = c + 3;
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
	if (c >= 1) { y++; c = c - 1; }
	if (x == fruitX[1] && y == fruitY[1]) {
		gameOver = true;
	}
	if (x == fruitX[2] && y == fruitY[2]) {
		gameOver = true;
	}
	if (fruitX[2] == 39) {
		fruitX[1] = 1;
		fruitY[1] = 4;
	}
	if (fruitX[2] == 39) {
		fruitX[2] = 1;
		fruitY[2] = 4;
		cc = cc + 10;
	}
}

int main() {
	fruitX[1] = 1;
	fruitY[1] = 4;
	fruitX[2] = 2;
	fruitY[2] = 4;
	Setup();
	cout << "\t\t*Simple Dinosaur Game\n\t\t Press any Keybr and Start\n\t\t Press Space for jumping \n";
	_getch();
	while (!gameOver) {
		Map();
		Input();
		Logic();
	}
	cout << endl;
	system("pause");
	return 0;
}