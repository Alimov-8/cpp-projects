/*
Student Information:
Name:    Alimov Abdullokh
ID:      U1910060
Section: 004
*/
/*
            //// Program 1 ////

#include <iostream> // I/O stream
#include <string> //text
#include <conio.h> //getch
#include <fstream> // File handling
#define Line " ---------------------------- " //Macros
using namespace std;
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
int main(){
	//Identifires
	string name, tell;int Num = 1;
	//Objects
	Person User;
	//Start Program
	for (int i = 0; i < 1000; i++){ // loop for Menu
		system("cls");
		cout << "\n\t Menu " << endl;
		cout << "   1.Write -> File" << endl;
		cout << "   2.Read  -> File" << endl;
		cout << "    Your choice:";
		switch (_getch())
		{
		case 49:{ // Write File
					cout << "\n" << Line << endl;
					ofstream out;
						out.open("Person", ios::binary | ios::app);
						cout << "       ADD Contact" << endl;
						cout << "Enter Name: "; cin >> name;
						cout << "Enter Tell: "; cin >> tell;
						User.setData(name, tell);
						out.write((char*)&User, sizeof(Person));
						out.close();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 50:{ // Read File
					cout << endl;
					cout << "\n\t     File: " << endl;
					ifstream in;
						in.open("Person", ios::binary);
						while(in.read((char*)&User, sizeof(Person))){
							cout << Num << "." << endl;
							User.Display();
							Num++;
						}
						cout << Line << endl;
						Num=1;
						in.close();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////



              //// Program 2 ///

#include <iostream> // I/O stream
#include <string> //text
#include <conio.h> //getch
#include <fstream> // File handling
#define Line " ---------------------------- " //Macros
using namespace std;
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
int main(){
	//Identifires
	string name, tell; int Num = 1; int Position;
	//Objects
	Person User;
	//Start Program
	for (int i = 0; i < 1000; i++){ // loop for Menu
		system("cls");
		cout << "\n\t      Menu " << endl;
		cout << "   1. Add Record   ----> File" << endl;
		cout << "   2. Read     --------> File" << endl;
		cout << "   3. Delete   --------> Record" << endl;
		cout << "   4. Search by Tell  -> Record" << endl;
		cout << "   5. Search by Name  -> Record" << endl;
		cout << "   6. Add by Position -> Record" << endl;
		cout << "      Your choice:";
		switch (_getch())
		{
		case 49:{ // Write File
					cout << "\n" << Line << endl;
					ofstream out;
					out.open("Person", ios::binary | ios::app);
					cout << "       ADD Contact" << endl;
					cout << "Enter Name: "; cin >> name;
					cout << "Enter Tell: "; cin >> tell;
					User.setData(name, tell);
					out.write((char*)&User, sizeof(Person));
					out.close();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;

		case 50:{ // Read File
					cout << endl;
					cout << "\n\t     File: " << endl;
					ifstream in;
					in.open("Person", ios::binary);
					while (in.read((char*)&User, sizeof(Person))){
						cout << Num << "." << endl;
						User.Display();
						Num++;
					}
					cout << Line << endl;
					Num = 1;
					in.close();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;

		case 51:{ // Delete Record
					cout << "\n Enter the Position which u want to delete: "; cin >> Position;
					ofstream out("temp", ios::binary);
					ifstream in("Person", ios::binary);
					while (in.read((char*)&User, sizeof(Person))){
						if (Num != Position){
							out.write((char*)&User, sizeof(Person));
						}
						Num++;
					}
					in.close();
					out.close();
					Num = 1;
					remove("Person");
					rename("temp", "Person");
					cout << "\nSuccessfully Deleted, You can check from Read -> File" << endl;
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;

		case 52:{ // Search by Tell Numer
					cout << "\n\n Enter Tell of Person which u want to find: "; cin >> tell;
					ifstream in;
					in.open("Person", ios::binary);
					while (in.read((char*)&User, sizeof(Person))){
						if (tell == User.getTell()){
							cout << Num << "." << endl;
							User.Display();
						}
						Num++;
					}
					cout << Line << endl;
					Num = 1;
					in.close();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;

		case 53:{ // Search by Name
					cout << "\n\n Enter Name of Person which u want to find: "; cin >> name;
					ifstream in;
					in.open("Person", ios::binary);
					while (in.read((char*)&User, sizeof(Person))){
						if (name == User.getName()){
							cout << Num << "." << endl;
							User.Display();
						}
						Num++;
					}
					cout << Line << endl;
					Num = 1;
					in.close();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;

		case 54:{ // Add Person by Position
					system("cls");
					cout << "\n Important ! -> Position should be Exist number in the avaiable list" << endl;
					cout << " Example: List (from 1 to 4) you can enter : 1,2,3,4 positions" << endl;
					cout << "\n Enter Position of Person where u want to add: "; cin >> Position;
					Position--;
					cout << "       ADD Details" << endl;
					cout << "Enter Name: "; cin >> name;
					cout << "Enter Tell: "; cin >> tell;
					ofstream out("temp", ios::binary);
					ifstream in("Person", ios::binary);
					while (in.read((char*)&User, sizeof(Person))){
						if (Num != Position ){
							out.write((char*)&User, sizeof(Person));
						}
						else {
							out.write((char*)&User, sizeof(Person));
							Num++;
							User.setData(name, tell);
							out.write((char*)&User, sizeof(Person));
						}
						Num++;
					}
					in.close();
					out.close();
					Num = 1;
					remove("Person");
					rename("temp", "Person");
					cout << "\nSuccessfully Added to specific position, You can check from Read -> File" << endl;
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;

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
