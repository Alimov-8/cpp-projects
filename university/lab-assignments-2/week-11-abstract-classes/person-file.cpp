/*
Student Information:
Name:    Alimov Abdullokh
ID:      U1910060
Section: 004
*/

//// Program 1 ////

#include <iostream> // I/O stream
#include <string> //text
#include <conio.h> //getch
#include <fstream> // File handling
#define Line " ---------------------------- " //Macros
using namespace std;
//Global identifires
string name, tell;
////////////////////////////////////////////
class Person
{
protected:
	//identifires
	string name, tell;
public:
	//setting data (name and tell)
	void setData(string name, string tell){
		this->name = name;
		this->tell = tell;
	}
	//Get name and tell
	string getName(){ return name; }
	string getTell(){ return tell; }
	//Displaying name and tell
	void Display(){
		cout << Line << endl;
		cout << "  Name: " << name << endl;
		cout << "  Tell: " << tell << endl;
	}
};
////////////////////////////////////////////
//Functions for Binary file Read and Write
void WriteFile(){
	Person User;
	ofstream out;
	out.open("Person", ios::binary | ios::app);
	cout << "       ADD Contact" << endl;
	cout << "Enter Name: "; cin >> name;
	cout << "Enter Tell: "; cin >> tell;
	User.setData(name, tell);
	out.write((char*)&User, sizeof(Person));
	out.close();
}
void ReadFile(){
	Person User;
	ifstream in;
	in.open("Person", ios::binary);
	while (in.read((char*)&User, sizeof(Person))){
		User.Display();
	}
	in.close();
}

////////////////////////////////////////////
int main(){
	//Objects
	Person User;
	//Start Program
	for (int i = 0; i < 100; i++){ // loop for Menu
		system("cls");
		cout << "\n\t Menu " << endl;
		cout << "   1.Write -> File" << endl;
		cout << "   2.Read -> File" << endl;
		cout << "   3.Exit" << endl;
		cout << "    Your choice:";
		switch (_getch())
		{
		case 49:{ // Write
					cout << "\n" << Line << endl;
					WriteFile();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 50:{ // Read
					cout << endl;
					ReadLife();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 51:{
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
