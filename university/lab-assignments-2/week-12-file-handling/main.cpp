/*
Student Information:
Name:    Alimov Abdullokh
ID:      U1910060
Section: 004
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//         Program 1 
#include <iostream>
#include <string> // text
#include <conio.h> // getch
#include <fstream> // File handling
using namespace std;

////////////////////////////////////////////

int main(){
	int Sum=0, Num=0;
	//////////////////////////// 
	ofstream one("one.txt"); //open one file

	for (int i = 2; i <= 20; i = i + 2){ // loop for setting value 
		one << i << endl;
	}
	one.close();
	/////////////////////////////
	ofstream two("two.txt"); // open two file

	for (int i = 1; i <= 10; i++){ // loop for setting value
		i *= 5;
		two << i << endl;
		i /= 5;
	}
	two.close();
	//////////////////////////////
	ofstream total("total.txt"); // open total file
	
	ifstream in_1("one.txt"); // enter into one file
	while (in_1){ // take Num from one file and add to Total
		Sum += Num;
		in_1 >> Num; 
	}
	in_1.close(); Num = 0;

	ifstream in_2("two.txt"); // enter into two file
	while (in_2){ // take Num from two file and add to Total
		Sum += Num;
		in_2 >> Num;
	}
	in_2.close();
	
	total << Sum << endl; // Write Sum into Total
	total.close();
	//////////////////////////////

	cout << "Program succeeded you can check answers from files :)" << endl<<endl;
system("pause");
return 0;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

//         Program 2
#include <iostream>
#include <string> // text
#include <conio.h> // getch
#include <fstream> // File handling
#include <iomanip> // for setw function
using namespace std;

////////////////////////////////////////////

int main(){
	// Identifires
	string Name, Info; int Tell_Num;
	//Start Program
	for (int i = 0; i < 100; i++){ // loop for Menu
		system("cls");
		cout << "\n\t Menu " << endl;
		cout << "   1. Add Contact" << endl;
		cout << "   2. Contacts " << endl;
		cout << "   3. Exit" << endl;
		cout << "    Your choice:";
		switch (_getch())
		{
		case 49:{ // Add Contact
					cout << "\n\n\t  Details" << endl;
					cout << "Enter Name of Person    : "; cin >> Name;
					cout << "Enter Tell Num of Person: "; cin >> Tell_Num;
					ofstream Contact("Contacts.txt",ios::app);
					Contact << left << setw(12) << Name << "\t" << Tell_Num << endl; // making table
					Contact.close();
					cout << "\n Press any keyboard to save datas and back" << endl << endl;
					system("pause");
		}
			break;
		case 50:{ // Contacts
					cout << "\n\n\t Contacts" << endl;
					ifstream Contacts("Contacts.txt");
					while (Contacts){
						getline(Contacts, Info);
						cout << Info << endl;
					}
					Contacts.close();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 51:{  // Exit
					system("cls");
					return 0;
		}
		default: {
					 cout << "\n\n Your choice is not available in Menu " << endl;
					 cout << " Press any keyboard to continue program " << endl << endl;
					 system("pause");
		}
			break;
		} // end of switch
	} // end of loop
	system("pause");
	return 0;
}

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

//         Program 3
#include <iostream>
#include <string> // text
#include <conio.h> // getch
#include <fstream> // File handling
#include <iomanip> // for setw function
#include <cstdlib> // Random 
#include <ctime> // for Randomizng by considering time
using namespace std;

////////////////////////////////////////////

int main(){
// Identifires
	int Num; string Info;
	int Search, Answer=0;
	srand(time(0)); // for random number
//Start Program
for (int i = 0; i < 100; i++){ // loop for Menu
	system("cls");
	cout << "\n\t Menu" << endl;
	cout << "   1. Add Random Numbers into File" << endl;
	cout << "   2. Read Numbers" << endl;
	cout << "   3. Search" << endl;
	cout << "   4. Exit" << endl;
	cout << "    Your choice:";
	switch (_getch())
	{
	case 49:{ // Add Random Numbers into File
				cout << "\n\n\t  Details" << endl;
				ofstream Rand_Num("Numbers.txt");
				for (int i = 0; i < 20; i++){
					Rand_Num << 1 + (rand() % 30) << endl; // taking random numbers among 1 to 30
				}
				cout << "\n Program succeeded Random numbers added into file \n Press any keyboard to continue program " << endl << endl;
				system("pause");
	}
		break;
	case 50:{ // Read
				cout << "\n\n\t Numbers" << endl;
				ifstream Rand_Nums("Numbers.txt");
				while (Rand_Nums){
					getline(Rand_Nums, Info);
					cout << Info << endl;
				}
				cout << "\n Press any keyboard to continue program " << endl << endl;
				system("pause");
	}
		break;
	
	case 51:{ // Search
				cout << "\n\n\t Searching" << endl;
				cout << " Enter Number which u want to search: "; cin >> Search;
				ifstream Searching("Numbers.txt");
				while (Searching){
					Searching >> Num;
					if (Num == Search){ Answer++; }
				}
				if (Answer > 0){ cout << "\n Your number exist in the list :)" << endl; }
				else cout << "\n Your number does not exist in le list :(" << endl << endl;
				cout << "\n Press any keyboard to continue program " << endl << endl;
				system("pause"); Answer = 0;
	}
		break;
	case 52:{   //Exit
				system("cls");
				return 0;
	}
	default: {
				 cout << "\n\n Your choice is not available in Menu " << endl;
				 cout << " Press any keyboard to continue program " << endl << endl;
				 system("pause");
	}
		break;
	} // end of switch
} // end of loop
system("pause");
return 0;
}

*/