/*
Student Information:
ID: U1910060
Name: Alimov Abdullokh
Section: 004
*/

// Program 1
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

///////////////////////////////////////////////
class Rectangle{
private:
	//Identifires
	int Length, Breadth;
public:
	//Constructor
	Rectangle(){	}
	Rectangle(int Length, int Breadth){
		this->Length = Length;
		this->Breadth = Breadth;
	}

	// Length
	void setLength(int Length){
		this->Length = Length;
	}

	// Breadth
	void setBreadth(int Breadth){
		this->Breadth = Breadth;
	}

	// Area
	int getArea(){
		return Length*Breadth;
	}

	// Overloading (+)
	Rectangle operator+ (Rectangle &Obj)
	{
		Rectangle temp;
		temp.Length = Length + Obj.Length;
		temp.Breadth = Breadth + Obj.Breadth;
		return temp;
	}

	//friend Rectangle operator+(Rectangle &Obj_1, Rectangle &Obj_2);

	// ostream
	void operator<<(ostream &Obj)


		// Destructor
		~Rectangle(){
			cout << "Destructor is Working for Rectangle Class " << endl;
		}
};

//Rectangle operator+(Rectangle &Obj_1, Rectangle &Obj_2)
//{
//	return Rectangle((Obj_1.Length + Obj_2.Length), (Obj_1.Breadth + Obj_2.Breadth));
//}

///////////////////////////////////////////////
int main(){
	//Identifires
	int Lenght_1, Breadth_1;
	int Lenght_2, Breadth_2;
	// Objects
	cout << "Enter Length of 1st Rectangle: "; cin >> Lenght_1;
	cout << "Enter Breadth of 1st Rectangle: "; cin >> Breadth_1;
	cout << "Enter Length of 2st Rectangle: "; cin >> Lenght_2;
	cout << "Enter Breadth of 2st Rectangle: "; cin >> Breadth_2;

	Rectangle Rectangle_Obj_1(int Length_1, int Breadth_1);
	Rectangle Rectangle_Obj_2(int Length_2, int Breadth_2);
	Rectangle Rectangle_Obj_3;
	Rectangle_Obj_1 + Rectangle_Obj_2;

	system("pause");
	return 0;
}

/*
#include<iostream>
using namespace std;
class Distance
{
private:
int k;
int m;
public:
Distance() {
k = 0;
m = 0;
}
Distance(int x, int y)
{
k = x;
m = y;

}
void operator=(Distance& c)
{
k = c.k;
m = c.m;
}
float getk()
{
cout << "Please enter the Kilometr" << endl;
cin >> k;
return k;
}
void setk(int k)
{
this->k = k;
}
float getm()
{
cout << "Please enter the meter" << endl;
cin >> m;
return m;
}
void setm(int m)
{
this->m = m;
}
Distance operator==(Distance& c)
{
if ((k == c.k) && (m ==c.m))
{
cout << "Both objects are equal" << endl;

}
else
{
cout << "Not equal" << endl << endl;

}
return *this;
}
void showDistance()
{
cout << k * 1000 + m << endl;
}
friend void operator<<(ostream & output, Distance & c);
void print()
{
cout << "Kilometr= " << k << endl;
cout << "Meter = " << m << endl;
}

};
void operator<<(ostream& output, Distance& c)
{
cout << "Kilometr= " <<c. k << endl;
cout << "Meter = " <<c.m << endl;
}
int main()
{
Distance c, o;
c.getm();
c.getk();
o.getk();
o.getm();

c.showDistance();
o.showDistance();
c == o;
system("pause");
return 0;

}
*/