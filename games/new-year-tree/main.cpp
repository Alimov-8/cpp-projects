#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
bool gameOver;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
int main(){
	bool Setup = false; int k = 1;
	while (!Setup){
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		Sleep(0.00001);
		cout << "                ***   PERFECT HOLIDAYS   ***" << endl;
		if (k%2==0) { SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY); }
		cout << "                             @" << endl;
		
		if(k%2==0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                            @Al" << endl;
		
		if (k%2==0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                           @Alim" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                          @AlimoV" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                         @AlimoV_8" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                        @AlimoV_8 P" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                       @AlimoV_8 Pro" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                      @AlimoV_8 Progr" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                     @AlimoV_8 Program" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                    @AlimoV_8 Programmi" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                   @AlimoV_8 Programming" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                  @AlimoV_8 Programming_T" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "                 @AlimoV_8 Programming_Tim" << endl;
		
		if (k % 2 == 0)SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "                @AlimoV_8 Programming_Time!" << endl;
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout << "                           #####" << endl;
		cout << "                           #####" << endl;
		cout << "      -------------------------------------------------\n\n" << endl;
		system("cls");
		k++;
	}
	system("pause");
	return 0;
}





