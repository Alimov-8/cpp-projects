/*
Student Information:
ID: U1910060
Name: Alimov Abdullokh
Section:007
*/

// Program 1
#include <iostream>
#include <string>
using namespace std;

class Person{
private:
	string Name; int Age;
public:
	
	Person(){
		Name = "0";
		Age = 0;
	}
	
	Person(int Age_M ){
		Name = "Abdullokh";
		Age = Age_M;
	}
	
	void Display(){
		cout << "Person Name :" << Name << endl;
		cout << "Person Age :" << Age << endl;
	}
};

int main(){
	int Age_M;
	Person Person_1;
	cout << "__ Program 1 __" << endl;
	cout << "Enter age of People: "; cin >> Age_M;
	Person Person_2(Age_M);
	system("cls");
	cout << "__ Program 1 __" << endl;
	Person_1.Display();
	Person_2.Display();
	system("pause");
	return 0;
}


/*
// Program 2
#include <iostream>
#include <string>
using namespace std;

class Records{
private:
	string Name; float Salary; string date_of_brith;
public:

	void Print(){
		cout << "Name :" << Name << " \nSalary :" << Salary <<" \nDate of Brith : "<<date_of_brith<< endl<<endl;
	}

	Records(){
		Name = "Abdullokh";
		Salary = 888;
		date_of_brith = "09.07.2001";
	}

	Records(string M_Name, float M_Salary, string M_date_of_brith){
		Name = M_Name;
		Salary = M_Salary;
		date_of_brith = M_date_of_brith;
	}
	
};

int main(){
	int x; string M_Name, M_date_of_brith; float M_Salary;
	for (int i = 0; i < 10; i++){
		system("cls");
		cout << "__ Program 2 __" << endl << endl;;
		cout << "__ Main Menu __" << endl;
		cout << "1. Show Details " << endl;
		cout << "2. Change Details " << endl;
		cout << "3. Exit " << endl;
		cout << "Your choice : "; cin >> x;
		switch (x){
		case 1: {
					system("cls");
					cout << "__ Program 1 __" << endl;
					Records Person_1;
					Records *ptr_Person_1 = &Person_1;
					ptr_Person_1->Print();
					system("pause");

		}
			break;
		case 2:{
				   system("cls");
				   cout << "Enter Name of Person: "; cin >> M_Name;
				   cout << "Enter Salary of Person: "; cin >> M_Salary;
				   cout << "Enter Date of brith of Person: "; cin >> M_date_of_brith;
				   system("cls");
				   cout << "Program 2" << endl;
				   Records Person_2(M_Name, M_Salary, M_date_of_brith);
				   Records &R_Person_2 = Person_2;
				   R_Person_2.Print();
				   system("pause");
		}
			break;
		case 3: {system("cls");
					 return 0; 
		}
			break;
		}
	}

	system("pause");
	return 0;
}
*/
/*
// Program 3
#include <iostream>
#include <string>
using namespace std;

class Account{
private:
	string Name; int Number; float Balance;
public:
	void Print(){
		cout << "Name = " << Name << endl;
		cout << "Number = " << Number << endl;
		cout << "Balance = " << Balance << endl;
	}
	Account(){
		cout << "Constructor is working" << endl;
		Name = "Abdullokh";
		Number = 888;
		Balance = 88888;
	}

	~Account(){
		cout << "Destructor is working" << endl;
	}
	
};

int main(){
	cout << "Program 3" << endl;
	Account Person_1;
	Person_1.Print();
	Person_1.~Account();
	system("pause");
	return 0;
}
*/

/*
// Program 4
#include <iostream>
#include <string>
using namespace std;

class Rectengle{
private:

	double Height, Width;

public:
	Rectengle(double x, double y){
		Height = y;
		Width = x;
	}

	void setHeight(double y){
		Height = y;
	}
	void setWidth(double x){
		Width = x;
	}
	double getHeight(){
		return Height;
	}
	double getWidth(){
		return Width;
	}
	double getArea(){
		return Height*Width;
	}
	double getPerimetr(){
		return 2 * (Height + Width);
	}

	~Rectengle(){
		cout << "Clear Memory" << endl;
	}

};

int main(){
	float x, y;
	int Z;
	for (int i = 0; i < 20; i++){
		system("cls");
		cout << "Program 4" << endl;
		cout << "_Main_Menu_" << endl << endl;
		cout << "1. Set Details" << endl;
		cout << "2. Show Details" << endl;
		cout << "3. Exit" << endl;
		cout << "Your choice :"; cin >> Z;
		switch (Z){
		case 1:{
				   system("cls");
				   cout << "__ Program 4 __" << endl;
				   Rectengle Rec_1(0,0);
				   cout << "Enter Hight of Rectengle:"; cin >> y;
				   Rec_1.setHeight(y);
				   cout << "Enter Width of Rectengle:"; cin >> x;
				   Rec_1.setWidth(x);
				   system("pause");

		}
			break;
		case 2:{
				   system("cls");
				   cout << "__ Program 4 __" << endl;
				   Rectengle Rec_1(x, y); 
				   cout << "Height: " << Rec_1.getHeight() << endl;
				   cout << "Width: " << Rec_1.getWidth() << endl;
				   cout << "Area: " << Rec_1.getArea() << endl;
				   cout << "Perimeter: " << Rec_1.getPerimetr() << endl;
				   system("pause");

		}
			break;
		case 3:{
				   system("cls");
				   return 0;
		}
			break;
		}
	}
	

	system("pause");
	return 0;
}
*/
