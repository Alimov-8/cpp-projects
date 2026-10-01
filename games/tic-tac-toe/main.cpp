#include <iostream>
#include <string>
using namespace std;
// I enter every identifiries like Global because its easier and 
// I dont need call that vaules in every function 
int x, y, p, r = 0, w = 0, i = 1, menu1, menu2, menu3, menu4; string Opinion;
string turnX = " Now turn of 'x'", turnY = " Now turn of 'o'";   // Winner part
string k, z, j, h, m;                                                        // Logic part
string a = "_____________", b = "|_1_|_2_|_3_|", d = "|_4_|_5_|_6_|", f = "|_7_|_8_|_9_|";// Map
void Logic()  // This function logical part of program and
			  //provide to calculate that "x" or "o" which cordinate should be put 
{
	switch (x) {
	case 1: {
		if (b[2] == '1') // this condition provide that one cordinate can use only one times 
		{
			if (i % 2 == 1) m = "x";  // analizing which players turn
			else m = "o";
			for (int u = 0; (u <= 13); u++) {  //The Length of Text
				if (u == 2) { z = z + m; }    // Change x or o
				else { z = z + b[u]; } // rewrite b with new type
			}
			b = z;  // b will change after logical condition
			z = ""; // z will empty 
		}
		else i = i - 1; // decreament this provide to enter again
	}
			break;
	case 2: {
		if (b[6] == '2')
		{
			if (i % 2 == 1) m = "x";
			else m = "o";
			for (int u = 0; (u <= 13); u++) {
				if (u == 6) { z = z + m; }
				else { z = z + b[u]; }
			}
			b = z;
			z = "";
		}
		else i = i - 1;
	}
			break;
	case 3: {
		if (b[10] == '3') {
			if (i % 2 == 1) m = "x";
			else m = "o";
			for (int u = 0; (u <= 13); u++) {
				if (u == 10) { z = z + m; }
				else { z = z + b[u]; }
			}
			b = z;
			z = "";
		}
		else i = i - 1;
	}
			break;
	case 4: {
		if (d[2] == '4') {
			if (i % 2 == 1) m = "x";
			else m = "o";
			for (int u = 0; (u <= 13); u++) {
				if (u == 2) { z = z + m; }
				else { z = z + d[u]; }
			}
			d = z;
			z = "";
		}
		else i = i - 1;
	}
			break;
	case 5: {
		if (d[6] == '5') {
			if (i % 2 == 1) m = "x";
			else m = "o";
			for (int u = 0; (u <= 13); u++) {
				if (u == 6) { z = z + m; }
				else { z = z + d[u]; }
			}
			d = z;
			z = "";
		}
		else i = i - 1;
	}
			break;
	case 6: {
		if (d[10] == '6') {
			if (i % 2 == 1) m = "x";
			else m = "o";
			for (int u = 0; (u <= 13); u++) {
				if (u == 10) { z = z + m; }
				else { z = z + d[u]; }
			}
			d = z;
			z = "";
		}
		else i = i - 1;
	}
			break;
	case 7: {
		if (f[2] == '7') {
			if (i % 2 == 1) m = "x";
			else m = "o";
			for (int u = 0; (u <= 13); u++) {
				if (u == 2) { z = z + m; }
				else { z = z + f[u]; }
			}
			f = z;
			z = "";
		}
		else i = i - 1;
	}
			break;
	case 8: {
		if (f[6] == '8') {
			if (i % 2 == 1) m = "x";
			else m = "o";
			for (int u = 0; (u <= 13); u++) {
				if (u == 6) { z = z + m; }
				else { z = z + f[u]; }
			}
			f = z;
			z = "";
		}
		else i = i - 1;
	}
			break;
	case 9: {
		if (f[10] == '9') {
			if (i % 2 == 1) m = "x";
			else m = "o";
			for (int u = 0; (u <= 13); u++) {
				if (u == 10) { z = z + m; }
				else { z = z + f[u]; }
			}
			f = z;
			z = "";
		}
		else i = i - 1;
	}
			break;
	default: i = i - 1;     // it help to if you if you enter another number 
	}
}
void Winner()   // This function will find who is winner  
{
	// Below for winner "x"
	if (b[2] == 'x' && b[6] == 'x' && b[10] == 'x') {
		i = 9;
		r = 1;
	}
	if (d[2] == 'x' && d[6] == 'x' && d[10] == 'x') {
		i = 9;
		r = 1;
	}
	if (f[2] == 'x' && f[6] == 'x' && f[10] == 'x') {
		i = 9;
		r = 1;
	}
	if (b[2] == 'x' && d[2] == 'x' && f[2] == 'x') {
		i = 9;
		r = 1;
	}
	if (b[6] == 'x' && d[6] == 'x' && f[6] == 'x') {
		i = 9;
		r = 1;
	}
	if (b[10] == 'x' && d[10] == 'x' && f[10] == 'x') {
		i = 9;
		r = 1;
	}
	if (b[2] == 'x' && d[6] == 'x' && f[10] == 'x') {
		i = 9;
		r = 1;
	}
	if (b[10] == 'x' && d[6] == 'x' && f[2] == 'x') {
		i = 9;
		r = 1;
	}
	// Below for winner "o"
	if (b[2] == 'o' && b[6] == 'o' && b[10] == 'o') {
		i = 9;
		w = 1;
	}
	if (d[2] == 'o' && d[6] == 'o' && d[10] == 'o') {
		i = 9;
		w = 1;
	}
	if (f[2] == 'o' && f[6] == 'o' && f[10] == 'o') {
		i = 9;
		w = 1;
	}
	if (b[2] == 'o' && d[2] == 'o' && f[2] == 'o') {
		i = 9;
		w = 1;
	}
	if (b[6] == 'o' && d[6] == 'o' && f[6] == 'o') {
		i = 9;
		w = 1;
	}
	if (b[10] == 'o' && d[10] == 'o' && f[10] == 'o') {
		i = 9;
		w = 1;
	}
	if (b[2] == 'o' && d[6] == 'o' && f[10] == 'o') {
		i = 9;
		w = 1;
	}
	if (b[10] == 'o' && d[6] == 'o' && f[2] == 'o') {
		i = 9;
		w = 1;
	}
	//b = "|_1_|_2_|_3_|"; 
	//d = "|_4_|_5_|_6_|"; 	
	//f = "|_7_|_8_|_9_|"; 
}
void MainMenu(); // Declare Function
void MainMenu() {  // This function provides to back to menu 
	// Main Menu :
	// Main Menu :
	cout << "\n\t\t          -------- Welcome  --------\n";
	cout << "\t\t      -------- Tic Tac Toe Game --------\n\n";
	cout << "\t\t\t____________________________ \n";
	cout << "\t\t\t\t Main Menu \n\n";
	cout << "\t\t\t 1. Start Game\n\t\t\t 2. About Game\n\t\t\t 3. Quit \n";
	cout << "\t\t\t____________________________ \n\t\t\t Your Choice: ";
	cin >> menu1;
	system("cls");
	// Choosing Menu
	switch (menu1)
	{
	case 1: // Start game
	{
		while (i <= 11)  // This loop provide that proces will work only 11 times  
		{
			cout << endl;
			cout << "            **********      Tic Tac Toe Game       ***********\n\n\n";
			cout << "                              " << a << endl;
			cout << "        Score:                " << b << endl;
			cout << "        x = " << r << "                 " << d << endl;
			cout << "        o = " << w << "                 " << f << endl;
			if (i <= 9)
			{
				cout << endl << endl;
				cout << "                         Enter cordinate of place" << endl;
				if (i % 2 == 1) cout << turnX << endl;
				else cout << turnY << endl;
				cout << "    Cordinate = ";
				cin >> x;

				Logic();
				Winner();
			}
			i = i + 1;  // increament
			if (i == 11) // Last part of program
			{
				cout << endl;
				cout << "This is end of the GAME Thank you for attention :)" << endl;
				//cout << " > Press 1  'Main Menu'" << endl;
				cout << " Write Your Opinion !" << endl;
				cout << " <User> "; cin >> Opinion; system("cls");
			}
			system("cls");
		}
	}
	break;
	case 2: // About Program and Student information
	{
		cout << "\n\t\t\t Tic-Tac-Toe" << endl;
		cout << " Tic-tac-toe is a simple, two-player game that," << endl;
		cout << "if played optimally by both players," << endl;
		cout << "will always result in a tie. The game is also called" << endl;
		cout << "noughts and crosses or Xs and Os.\n\n\n";
		cout << " Creator Information:" << endl;
		cout << "  * Alimov Abdullokh \n  * U1910060 \n  * Section 004 \n\n";
		cout << " > Press 1 to move 'Main Menu'" << endl;
		cout << " > Press any number to 'Quit'" << endl;
		cout << " Your Choice:"; cin >> menu2;
		cout << endl << endl << endl;
		switch (menu2) {
		case 1: {
			system("cls");
			MainMenu();  // Go to Main Menu
		}
				break;
		default: system("cls");  //Quit
		}
	}
	break;
	case 3: {       //Quit
		system("cls");
		cout << "\n\t\t\t Are you Sure !? \n\n";
		cout << "\t\t\t_________________\n\t\t\t 1.YES :(" << endl;
		cout << "\t\t\t 2.NO :)\n\t\t\t_________________\n";
		cout << "\t\t\t  Your Choice:"; cin >> menu4;
		switch (menu4) {
		case 2: {
			system("cls");
			MainMenu();  // Go to Main Menu
		}
				break;
		default: system("cls");
		}
	}
			break;
	default: MainMenu();   // Ask again to press number 
	}
}
int main() // Main function
{
	// Main Menu :
	cout << "\n\t\t          -------- Welcome  --------\n";
	cout << "\t\t      -------- Tic Tac Toe Game --------\n\n";
	cout << "\t\t\t____________________________ \n";
	cout << "\t\t\t\t Main Menu \n\n";
	cout << "\t\t\t 1. Start Game\n\t\t\t 2. About Game\n\t\t\t 3. Quit \n";
	cout << "\t\t\t____________________________ \n\t\t\t Your Choice: ";
	cin >> menu1;
	system("cls");
	// Choosing Menu
	switch (menu1)
	{
	case 1: // Start game
	{
		while (i <= 11)  // This loop provide that proces will work only 11 times  
		{
			cout << endl;
			cout << "            **********      Tic Tac Toe Game       ***********\n\n\n";
			cout << "                              " << a << endl;
			cout << "        Score:                " << b << endl;
			cout << "        x = " << r << "                 " << d << endl;
			cout << "        o = " << w << "                 " << f << endl;
			if (i <= 9)
			{
				cout << endl << endl;
				cout << "                         Enter cordinate of place" << endl;
				if (i % 2 == 1) cout << turnX << endl;
				else cout << turnY << endl;
				cout << "    Cordinate = ";
				cin >> x;
				Logic();
				Winner();
			}
			i = i + 1;  // increament
			if (i == 11) // Last part of program
			{
				cout << endl;
				cout << "This is end of the GAME Thank you for attention :)" << endl;
				//cout << " > Press 1  'Main Menu'" << endl;
				cout << " Write Your Opinion !" << endl;
				cout << " <User> "; cin >> Opinion; system("cls");
			}
			system("cls");
		}
	}
	break;
	case 2: // About Program and Student information
	{
		cout << "\n\t\t\t Tic-Tac-Toe" << endl;
		cout << " Tic-tac-toe is a simple, two-player game that," << endl;
		cout << "if played optimally by both players," << endl;
		cout << "will always result in a tie. The game is also called" << endl;
		cout << "noughts and crosses or Xs and Os.\n\n\n";
		cout << " Creator Information:" << endl;
		cout << "  * Alimov Abdullokh \n  * U1910060 \n  * Section 004 \n\n";
		cout << " > Press 1 to move 'Main Menu'" << endl;
		cout << " > Press any number to 'Quit'" << endl;
		cout << " Your Choice:"; cin >> menu2;
		cout << endl << endl << endl;
		switch (menu2) {
		case 1: {
			system("cls");
			MainMenu();  // Go to Main Menu
		}
				break;
		default: system("cls");  //Quit
		}
	}
	break;
	case 3: {       //Quit
		system("cls");
		cout << "\n\t\t\t Are you Sure !? \n\n";
		cout << "\t\t\t_________________\n\t\t\t 1.YES :(" << endl;
		cout << "\t\t\t 2.NO :)\n\t\t\t_________________\n";
		cout << "\t\t\t  Your Choice:"; cin >> menu4;
		switch (menu4) {
		case 2: {
			system("cls");
			MainMenu();  // Go to Main Menu
		}
				break;
		default: system("cls");
		}
	}
			break;
	default: MainMenu();   // Ask again to press number 
	}
	system("pause");
	return 0;
}