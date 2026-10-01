/*
Student Information:
Name:    Alimov Abdullokh
ID:      U1910060
Section: 004
*/

      //// Program 1 ////

#include <iostream>
#include <string> //text
#include <conio.h> //getch
using namespace std;

////////////////////////////////////////////
class Shape  //Base class  // Abstract class
{
protected:
	double length_1, length_2; // two length

public:	
	void get_data(double length_1, double length_2){ //get data function for two length
		this->length_1 = length_1;
		this->length_2 = length_2;
	}

	virtual void display_area() = 0; // pure virtual function
};
////////////////////////////////////////////
class Rectangle:public Shape  // 1st Sub class 
{
public:
	void display_area(){
		cout << "\n\tArea of Rectangle = " << length_1*length_2 << endl << endl;
	}
};
////////////////////////////////////////////
class Triangle :public Shape  // 2st Sub class 
{
public:
	void display_area(){
		cout << "\n\tArea of Trianlge = " << (length_1*length_2)/2.0 << endl << endl;
	}
};
////////////////////////////////////////////
int main(){
//Identifires
	double length_1, length_2;
//Objects
	Shape *P_Rec = new Rectangle;
	Shape *P_Tri = new Triangle;
//Start Program
	for (int i = 0; i < 100; i++){ // loop for Menu
		system("cls");
		cout << "\n\t Menu for Area" << endl;
		cout << "   1.Rectangle" << endl;
		cout << "   2.Triangle" << endl;
		cout << "   3.Exit" << endl;
		cout << "    Your choice:";
		switch (_getch())
		{
		case 49:{ // Rectangle Details
					cout << "\n\n\t Rectangle Details" << endl;
					cout << "Enter height of Rectangle: "; cin >> length_1;
					cout << "Enter weight of Rectangle: "; cin >> length_2;
					P_Rec->get_data(length_1, length_2);
					cout << "----------------------------------" << endl;
					cout << "             Details             " << endl;
					P_Rec->display_area();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 50:{ // Triangle Details
					cout << "\n\n\t Triangle Details" << endl;
					cout << "Enter height of Triangle: "; cin >> length_1;
					cout << "Enter base   of Triangle: "; cin >> length_2;
					P_Tri->get_data(length_1, length_2);
					cout << "----------------------------------" << endl;
					cout << "             Details             " << endl;
					P_Tri->display_area();
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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

          //// Program 1 with circle  ////

#include <iostream>
#include <string> //text
#include <conio.h> //getch
using namespace std;

////////////////////////////////////////////
class Shape  //Base class  // Abstract class
{
protected:
	double length_1, length_2; // two length

public:
	void get_data(double length_1, double length_2){ //get data function for two length
		this->length_1 = length_1;
		this->length_2 = length_2;
	}

	virtual void display_area() = 0; // pure virtual function
};
////////////////////////////////////////////
class Rectangle :public Shape  // 1st Sub class 
{
public:
	void display_area(){
		cout << "\n\tArea of Rectangle = " << length_1*length_2 << endl << endl;
	}
};
////////////////////////////////////////////
class Triangle :public Shape  // 2st Sub class 
{
public:
	void display_area(){
		cout << "\n\tArea of Trianlge = " << (length_1*length_2) / 2.0 << endl << endl;
	}
};
////////////////////////////////////////////
class Circle :public Shape  // 3st Sub class 
{
public:
	void display_area(){
		cout << "\n\tArea of Circle = " << (length_2 / 2.0) * length_1 * length_1 * (3.1415/180) << endl << endl;
	}
};
////////////////////////////////////////////
int main(){
	//Identifires
	double length_1, length_2;
	//Objects
	Shape *P_Rec = new Rectangle;
	Shape *P_Tri = new Triangle;
	Shape *P_Cir = new Circle;
	//Start Program
	for (int i = 0; i < 100; i++){ // loop for Menu
		system("cls");
		cout << "\n\t Menu for Area" << endl;
		cout << "   1.Rectangle" << endl;
		cout << "   2.Triangle" << endl;
		cout << "   3.Circle" << endl;
		cout << "   4.Exit" << endl;
		cout << "    Your choice:";
		switch (_getch())
		{
		case 49:{ // Rectangle Details
					cout << "\n\n\t Rectangle Details" << endl;
					cout << "Enter height of Rectangle: "; cin >> length_1;
					cout << "Enter weight of Rectangle: "; cin >> length_2;
					P_Rec->get_data(length_1, length_2);
					cout << "----------------------------------" << endl;
					cout << "             Details             " << endl;
					P_Rec->display_area();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 50:{ // Triangle Details
					cout << "\n\n\t Triangle Details" << endl;
					cout << "Enter height of Triangle: "; cin >> length_1;
					cout << "Enter base   of Triangle: "; cin >> length_2;
					P_Tri->get_data(length_1, length_2);
					cout << "----------------------------------" << endl;
					cout << "             Details             " << endl;
					P_Tri->display_area();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 51:{ // Rectangle Details
					cout << "\n\n\t Circle Details" << endl;
					cout << "Enter the Radious of Circle: "; cin >> length_1;
					cout << "\n Important !" << endl;
					cout << "Enter the angle of Sector (if it is '360' than it will be Circle Area)" << endl;
					cout << "Angle: "; cin >> length_2;
					P_Cir->get_data(length_1, length_2);
					cout << "----------------------------------" << endl;
					cout << "             Details             " << endl;
					P_Cir->display_area();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 52:{
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