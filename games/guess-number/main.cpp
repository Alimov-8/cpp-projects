#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	
	system("COLOR 2F");
	
	    		
		int x, n;
		cout << " This program can tell you about your lucky percentage in life " << endl;
		int i = 1;
		int k = 0;
			while (i <= 5) {
				cout << "Please Enter number in interval [0,5]" << endl;
				cout << "My number = ";
				cin >> n;
				srand(time(0));
				x = 1 + (rand() % 5);
				cout << "Random number was = " << x << endl;
				if (x == n) {
					cout << "Congratulation!!! You won :)" << endl;
					k = k + 1;
				}
				else cout << "You lost :(" << endl;
				cout << endl;
				i++;
			}
			system("COLOR CF");
			if (k == 0) cout << "You are unlucky person" << endl;
			else if (k == 1) cout << "Your lucky percent is 33% " << endl;
			else if (k == 2) cout << "Your lucky persent is 66% " << endl;
			else if (k == 3) cout << "Your lucky percent is 100% " << endl;
			else if (k == 4) cout << "Your lucky percent is 100% " << endl;
			else if (k == 5) cout << "Your lucky percent is 100% " << endl;
			cout << endl;
	
	return 0;
}