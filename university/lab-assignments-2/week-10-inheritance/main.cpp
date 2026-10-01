/*
Student Information:
Name:    Alimov Abdullokh
ID:      U1910060
Section: 004
*/
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
//         Program 1 
// Database of educational institution employees
#include <iostream>
#include <string> //text
#include <conio.h> //getch
using namespace std;

////////////////////////////////////////////
class Staff   //Base class
{
private:
	// Identifires of Staff class
	string Code, Name;
public:
	Staff(){ // Constructor for Staff Base class
		cout << "Constructor is working for Staff Base class" << endl;
	}
	void setData(){ // Set data (Code, Name)
		cout << "\tSet Details" << endl;
		cout << "   Enter the Code of Employee: "; cin >> Code;
		cout << "   Enter the Name of Employee: "; cin >> Name;
	}
	void getData(){ // Get data (Code, Name) 
		cout << "\t Details" << endl;
		cout << "   Code of Employee: " << Code << endl;
		cout << "   Name of Employee: " << Name << endl;
	}
};
class Teacher :public Staff // 1st Sub class of Staff
{
private:
	//identifires of Teacher class
	string Subject; int Publication;
public:
	Teacher(){ // Constructor for Teacher class
		cout << "Constructor is working for Teacher class" << endl;
	}
	void setData(){ // Set data (Subject, Publication)
		Staff::setData(); // Set data (Code, Name) from Staff base class
		cout << "   Enter the Subject of Teacher: "; cin >> Subject;
		cout << "   Enter the Publication of Teacher: "; cin >> Publication;
	}
	void getData(){ // Get data (Subject, Publication)
		Staff::getData(); // Get data (Code, Name) from Staff base class
		cout << "   Subject of Teacher: " << Subject << endl;
		cout << "   Publication of Teacher: " << Publication << endl;
	}
};
//////////////////////////////////////////////
class Officer :public Staff // 2nd Sub class of Staff
{
private:
	//identifires of Officer class
	string Grade;
public:
	Officer(){ // Constructor for Teacher class
		cout << "Constructor is working for Officer class" << endl;
	}
	void setData(){ // Set data (Grade)
		Staff::setData(); // Set data (Code, Name) from Staff base class
		cout << "   Grades of Officer: (A - Senior, B - Junior , C - Sophomore, D - Freshman)" << endl;
		cout << "   Enter the Grade of Officer: "; cin >> Grade;
	}
	void getData(){ // Get data (Grade)
		Staff::getData(); // Get data (Code, Name) from Staff base class
		cout << "   Grade of Officer: " << Grade << endl;
	}
};
//////////////////////////////////////////////
class Typist :public Staff // 3rd Sub class of Staff
{
private:
	//identifires of Typist class
	float Speed;
public:
	Typist(){ // Constructor for Typist class
		cout << "Constructor is working for Typist class" << endl;
	}
	void setData(){ // Set data (Spped)
		Staff::setData(); // Set data (Code, Name) from Staff base class
		cout << "   Enter the Speed of Typest: "; cin >> Speed;
	}
	void getData(){ // Get data (Speed)
		Staff::getData(); // Get data (Code, Name) from Staff base class
		cout << "   Grade of Officer: " << Speed << endl;
	}
};
//////////////////////////////////////////////
class Regular :public Typist // 1st Sub class of Typist
{
private:
	//identifires of Regular class
	float Monthly_Salary;
public:
	Regular(){ // Constructor for Regular class
		cout << "Constructor is working for Regular class" << endl;
	}
	void setData(){ // Set data (Monthly Salary)
		Typist::setData(); // Set data (Speed) from Typist Base class (Multilevel)
		cout << "   Enter the Monthly salary of Typest: "; cin >> Monthly_Salary;
	}
	void getData(){ // Get data (Monthly Salary)
		Typist::getData(); // Get data (Speed) from Typist base class (Multilevel)
		cout << "   Monthly salary of Typest: " << Monthly_Salary << endl;
	}
};
//////////////////////////////////////////////
class Casual :public Typist // 2nd Sub class of Typist
{
private:
	//identifires of Causal class
	float Daily_Wages;
public:
	Casual(){ // Constructor for Casual class
		cout << "Constructor is working for Causal class" << endl;
	}
	void setData(){ // Set data (Daily Wages) 
		Typist::setData(); // Set data (Speed) from Typist Base class (Multilevel)
		cout << "   Enter the Daily Wages of Typest: "; cin >> Daily_Wages;
	}
	void getData(){ // Get data (Monthly Salary)
		Typist::getData(); // Get data (Speed) from Typist base class (Multilevel)
		cout << "   Daily Wages of Typest: " << Daily_Wages << endl;
	}
};
//////////////////////////////////////////////
int main(){
	//Start Program
	for (int i = 0; i < 100; i++){ // loop for Menu
		system("cls");
		cout << "\n\tDatabase of educational institution employees" << endl;
		cout << "   1.Teacher" << endl;
		cout << "   2.Officer" << endl;
		cout << "   3.Regular Typist" << endl;
		cout << "   4.Causal  Typist" << endl;
		cout << "   5.Exit" << endl;
		cout << "    Your choice:";
		switch (_getch())

		{
		case 49:{ // Teacher
					cout << "\n\n\t   Teacher" << endl;
					// Object 
					Teacher Teacher_Obj;
					Teacher_Obj.setData();
					cout << "---------------------------" << endl;
					Teacher_Obj.getData();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 50:{ // Officer
					cout << "\n\n\t   Officer" << endl;
					// Object 
					Officer Officer_Obj;
					Officer_Obj.setData();
					cout << "---------------------------" << endl;
					Officer_Obj.getData();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 51:{ // Regular Typist
					cout << "\n\n\t   Regular Typist" << endl;
					// Object 
					Regular Regular_Typist_Obj;
					Regular_Typist_Obj.setData();
					cout << "---------------------------" << endl;
					Regular_Typist_Obj.getData();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 52:{ // Casual Typist
					cout << "\n\n\t   Casual Typist" << endl;
					// Object 
					Casual Casual_Typist_Obj;
					Casual_Typist_Obj.setData();
					cout << "---------------------------" << endl;
					Casual_Typist_Obj.getData();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 53:{
					return 0;
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


////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

//          Program 1 with (Education class)
#include <iostream>
#include <string> //text
#include <conio.h> //getch
using namespace std;

////////////////////////////////////////////
class Staff   //Base class
{
private:
	// Identifires of Staff class
	string Code, Name;
public:
	Staff(){ // Constructor for Staff Base class
		cout << "Constructor is working for Staff Base class" << endl;
	}
	void setData(){ // Set data (Code, Name)
		cout << "\tSet Details" << endl;
		cout << "   Enter the Code of Employee: "; cin >> Code;
		cout << "   Enter the Name of Employee: "; cin >> Name;
	}
	void getData(){ // Get data (Code, Name) 
		cout << "\t Details" << endl;
		cout << "   Code of Employee: " << Code << endl;
		cout << "   Name of Employee: " << Name << endl;
	}
};
////////////////////////////////////////////
class Education   //Base class
{
private:
	// Identifires of Education class
	string Highest_professional_qualification;
public:
	Education(){ // Constructor for Education Base class
		cout << "Constructor is working for Education Base class" << endl;
	}
	
	void setData(){ // Set data (Highest_professional_qualification) 
		cout << "1. PHD\t2. Masters\t3. Undergraduate\t4. Graduate" << endl;
		cout << "Your choice: " << endl;
		switch (_getch()){
		case 49:{
					Highest_professional_qualification = "PHD";
		}
			break;
		case 50:{
					Highest_professional_qualification = "Masters";
		}
			break;
		case 51:{
					Highest_professional_qualification = "Undergraduate";
		}
			break;
		case 52:{
					Highest_professional_qualification = "Graduate";
		}
			break;
		default: Highest_professional_qualification = "Empty, Your choice is not found";
		}
	}
	void getData(){ // Get data (Highest_professional_qualification) 
		cout << "   Education of Employee: " << Highest_professional_qualification << endl;
	}
};
////////////////////////////////////////////
class Teacher :public Staff, public Education // 1st Sub class of Staff and Education (Multiple inheretence)
{
private:
	//identifires of Teacher class
	string Subject; int Publication;
public:
	Teacher(){ // Constructor for Teacher class
		cout << "Constructor is working for Teacher class" << endl;
	}
	void setData(){ // Set data (Subject, Publication)
		Staff::setData(); // Set data (Code, Name) from Staff base class
		Education::setData(); // Set data from Education base class
		cout << "   Enter the Subject of Teacher: "; cin >> Subject;
		cout << "   Enter the Publication of Teacher: "; cin >> Publication;
	}
	void getData(){ // Get data (Subject, Publication)
		Staff::getData(); // Get data (Code, Name) from Staff base class
		Education::getData(); // Get data from Education base class
		cout << "   Subject of Teacher: " << Subject << endl;
		cout << "   Publication of Teacher: " << Publication << endl;
	}
};
//////////////////////////////////////////////
class Officer :public Staff, public Education // // 2nd Sub class of Staff and Education (Multiple inheretence)
{
private:
	//identifires of Officer class
	string Grade;
public:
	Officer(){ // Constructor for Teacher class
		cout << "Constructor is working for Officer class" << endl;
	}
	void setData(){ // Set data (Grade)
		Staff::setData(); // Set data (Code, Name) from Staff base class
		Education::setData(); // Set data from Education base class
		cout << "   Grades of Officer: (A - Senior, B - Junior , C - Sophomore, D - Freshman)" << endl;
		cout << "   Enter the Grade of Officer: "; cin >> Grade;
	}
	void getData(){ // Get data (Grade)
		Staff::getData(); // Get data (Code, Name) from Staff base class
		Education::getData(); // Get data from Education base class
		cout << "   Grade of Officer: " << Grade << endl;
	}
};
//////////////////////////////////////////////
class Typist :public Staff // 3rd Sub class of Staff
{
private:
	//identifires of Typist class
	float Speed;
public:
	Typist(){ // Constructor for Typist class
		cout << "Constructor is working for Typist class" << endl;
	}
	void setData(){ // Set data (Spped)
		Staff::setData(); // Set data (Code, Name) from Staff base class
		cout << "   Enter the Speed of Typest: "; cin >> Speed;
	}
	void getData(){ // Get data (Speed)
		Staff::getData(); // Get data (Code, Name) from Staff base class
		cout << "   Grade of Officer: " << Speed << endl;
	}
};
//////////////////////////////////////////////
class Regular :public Typist // 1st Sub class of Typist
{
private:
	//identifires of Regular class
	float Monthly_Salary;
public:
	Regular(){ // Constructor for Regular class
		cout << "Constructor is working for Regular class" << endl;
	}
	void setData(){ // Set data (Monthly Salary)
		Typist::setData(); // Set data (Speed) from Typist Base class (Multilevel)
		cout << "   Enter the Monthly salary of Typest: "; cin >> Monthly_Salary;
	}
	void getData(){ // Get data (Monthly Salary)
		Typist::getData(); // Get data (Speed) from Typist base class (Multilevel)
		cout << "   Monthly salary of Typest: " << Monthly_Salary << endl;
	}
};
//////////////////////////////////////////////
class Casual :public Typist // 2nd Sub class of Typist
{
private:
	//identifires of Causal class
	float Daily_Wages;
public:
	Casual(){ // Constructor for Casual class
		cout << "Constructor is working for Causal class" << endl;
	}
	void setData(){ // Set data (Daily Wages) 
		Typist::setData(); // Set data (Speed) from Typist Base class (Multilevel)
		cout << "   Enter the Daily Wages of Typest: "; cin >> Daily_Wages;
	}
	void getData(){ // Get data (Monthly Salary)
		Typist::getData(); // Get data (Speed) from Typist base class (Multilevel)
		cout << "   Daily Wages of Typest: " << Daily_Wages << endl;
	}
};
//////////////////////////////////////////////
int main(){
	//Start Program
	for (int i = 0; i < 100; i++){ // loop for Menu
		system("cls");
		cout << "\n\tDatabase of educational institution employees" << endl;
		cout << "   1.Teacher" << endl;
		cout << "   2.Officer" << endl;
		cout << "   3.Regular Typist" << endl;
		cout << "   4.Causal  Typist" << endl;
		cout << "   5.Exit" << endl;
		cout << "    Your choice:";
		switch (_getch())
		{
		case 49:{ // Teacher
					system("cls");
					cout << "\t   Teacher" << endl;
					// Object 
					Teacher Teacher_Obj;
					Teacher_Obj.setData();
					cout << "---------------------------" << endl;
					Teacher_Obj.getData();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 50:{ // Officer
					system("cls");
					cout << "\t   Officer" << endl;
					// Object 
					Officer Officer_Obj;
					Officer_Obj.setData();
					cout << "---------------------------" << endl;
					Officer_Obj.getData();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 51:{ // Regular Typist
					system("cls");
					cout << "\t   Regular Typist" << endl;
					// Object 
					Regular Regular_Typist_Obj;
					Regular_Typist_Obj.setData();
					cout << "---------------------------" << endl;
					Regular_Typist_Obj.getData();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 52:{ // Casual Typist
					system("cls");
					cout << "\t   Casual Typist" << endl;
					// Object 
					Casual Casual_Typist_Obj;
					Casual_Typist_Obj.setData();
					cout << "---------------------------" << endl;
					Casual_Typist_Obj.getData();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 53:{
					return 0;
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


////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*

//     Program 2
#include <iostream>
#include <string> //text
#include <conio.h> //getch
using namespace std;

////////////////////////////////////////////
class Person  //Base class
{
protected:
	// Identifires of Person class
	string Code, Name;
public:
	Person(string Code, string Name){ // Constructor for Person Base class
		cout << "Constructor is working for Person Base class" << endl;
		this->Code = Code;
		this->Name = Name;
	}
	void getData(){ // Get data (Code, Name) 
		cout << "\t Details" << endl;
		cout << "   Code of Person: " << Code << endl;
		cout << "   Name of Person: " << Name << endl;
	}
};
////////////////////////////////////////////
class Account : public virtual Person // 1st Sub class of Person
{
protected:
	//Identifires of Account class
	float Pay;
public:
	Account() :Person(Code, Name){ // Constructor for Acoount class
		cout << "Constructor is working for Account class" << endl;
	}
	void setData(){
		cout << "   Enter the Pay for Person: "; cin >> Pay;
	}
	void getData(){ // Get data (Pay)
		Person::getData(); // Get data (Name, Code) from Person Base class
		cout << "   Pay of Person: " << Pay << endl;
	}
};
//////////////////////////////////////////////
class Admin : public virtual Person // 2st Sub class of Person
{
protected:
	//Identifires of Admin class
	float Experience;
public:
	Admin() :Person(Code, Name){ // Constructor for Admin class
		cout << "Constructor is working for Admin class" << endl;
	}
	void setData(){
		cout << "   Enter the Experience of Person: "; cin >> Experience;
	}
	void getData(){ // Get data (Experience)
		cout << "   Experience of Person: " << Experience << endl;
	}
};
//////////////////////////////////////////////
class Master : public Account, public Admin // 2st Sub class of Person
{
public:
	Master(string Code, string Name):Person(Code, Name){ // Constructor for Master
		cout << "Constructor is working for Master class" << endl;
	}
	void setData(){
		Account::setData();
		Admin::setData();
	}
	void getData(){
		Account::getData();
		Admin::getData();
	}
};
//////////////////////////////////////////////

int main(){
	// Identifires
	string Code, Name;

	//Start Program
	for (int i = 0; i < 1000; i++){ // loop for Menu
		system("cls");
		cout << "\t Master" << endl;
		cout << "   Enter the Code of Person: "; cin >> Code;
		cout << "   Enter the Name of Person: "; cin >> Name;
		//Objects
		Master Master_Obj(Code, Name);
		Master_Obj.setData();
		cout << "---------------------" << endl;
		Master_Obj.getData();
		system("pause");
	} // end of loop
	system("pause");
	return 0;
}

*/



