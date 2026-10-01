/*
Student Information:
U1910060
Alimov Abdullokh 
Section: 004
*/
    // Example 1
#include <iostream>
#include <cmath>    // i used sqrt that's why i added this library
using namespace std;
const double pi = 3.14;   // constant variable
double Area(double a) { // this function overloading provides to calculate area of circle
	cout << "Area of Circle = " ;
	return a * a * pi;
}
double Area(double a, double b) { // this function overloading provides to calculate area of Rectangle
	cout << "Area of Rectangle = ";
	return a * b;
}
double Area(double a, double b,double c) { //this function overloading provides to calculate area of Triengle
	cout << "Area of Triangle = ";
	return sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c));
}
void Area() { //this function overloading provides to calculate area of square
	double a, area;
	cout << "Enter vaule for square ";
	cin >> a;
	if (a > 0){ area = a * a;      // Side can not be negative or 0
	cout << "Area of Square = " << area << endl;}
	else cout << "Invalid value" << endl;
}
int main()  // Main function
{
	bool k = false;
 while (!k) { // This loop help to procedura will continue infinity times 
	double a, b, c; int x;
	cout << "\n\t\t Menu \n 1. Area of Circle \n 2. Area of Rectangle \n 3. Area of Triangle \n 4. Area of Square\n";
	cout << "\n\tYour choice ";
	cin >> x;
	switch (x) {
	case 1: {
		cout << "Enter value for Radius = "; cin >> a;
		if (a > 0) cout << Area(a) << endl;  // Radious can not be negative or 0
		else cout << "Invalid value" << endl;
	}
			break;
	case 2: {
		cout << "Enter value for Rectengular 2 sides\n"; 
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		if (a > 0 && b>0 ) cout << Area(a, b) << endl;  // rectengular's side can not be negative or 0
		else cout << "Invalid value" << endl;} 
			break;
	case 3: {
		cout << "Enter value for Triengle 3 sides\n"; 
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		cout << "c = "; cin >> c;
		if (a + b > c && a + c > b && c + b > a && a>0 && b>0 && c>0) { // Rule of Triengles' sides
			cout << Area(a, b, c) << endl;} 
		else cout << "Invalid value" << endl;
	}
			break;
	case 4: Area();
		break;
	default: cout << "Invalid choice" << endl;
	}
	cout << "\n Press any keybr and you will go to Menu\n\n";
	system("pause");
	system("cls");
}
	system("pause");
	return 0;
}

/*
// Example 2
#include <iostream>
using namespace std;
const double pi = 3.14;   // constant variable
double Area(double a) { // this function overloading provides to calculate Circumference of circle
	cout << "Circumference of Circle = ";
	return 2 * pi * a;
}
double Area(double a, double b) { // this function overloading provides to calculate Circumference of Rectangle
	cout << "Circumference of Rectangle = ";
	return 2*(a + b);
}
double Area(double a, double b, double c) { //this function overloading provides to calculate Circumference of Triengle
	cout << "Circumference of Triangle = ";
	return a+b+c;
}
void Area() { //this function overloading provides to calculate Circumference of square
	double a, p;
	cout << "Enter vaule for square ";
	cin >> a;
	if (a > 0) {
		p =  4*a;      // Side can not be negative or 0
		cout << "Circumference of Square = " << p << endl;
	}
	else cout << "Invalid value" << endl;
}
int main()  // Main function
{
	bool k = false;
	while (!k) { // This loop help to procedura will continue infinity times 
		double a, b, c; int x;
		cout << "\n\t\t Menu \n 1. Circumference of Circle \n";
		cout <<" 2. Circumference of Rectangle \n 3. Circumference of Triangle \n 4. Circumference of Square\n";
		cout << "\n\tYour choice ";
		cin >> x;
		switch (x) {
		case 1: {
			cout << "Enter value for Radius = "; cin >> a;
			if (a > 0) cout << Area(a) << endl;  // Radious can not be negative or 0
			else cout << "Invalid value" << endl;
		}
				break;
		case 2: {
			cout << "Enter value for Rectengular 2 sides\n"; 
			cout << "a = "; cin >> a; 
			cout << "b = "; cin >> b;
			if (a > 0 && b > 0) cout << Area(a, b) << endl;  // rectengular's side can not be negative or 0
			else cout << "Invalid value" << endl; }
				break;
		case 3: {
			cout << "Enter value for Triengle 3 sides\n"; 
			cout << "a = "; cin >> a;
			cout << "b = "; cin >> b;
			cout << "c = "; cin >> c;
			if (a + b > c && a + c > b && c + b > a && a > 0 && b > 0 && c > 0) { // Rule of Triengles' sides
				cout << Area(a, b, c) << endl;
			}
			else cout << "Invalid value" << endl;
		}
				break;
		case 4: Area();
			break;
		default: cout << "Invalid choice" << endl;
		}
		cout << "\n Press any keybr and you will go to Menu\n\n";
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}
*/
/*
// Example 3
#include <iostream>
using namespace std;
int Largest(int a, int b, int c) {
	if (a >= b && a >= c) return a;
	else if (b >= c && b >= a)  return b;
	else if (c >= b && c >= a) return c;
}
float Largest(float a, float b, float c) {
	if (a >= b && a >= c) return a;
	else if (b >= c && b >= a)  return b;
	else if (c >= b && c >= a) return c;
}

int main()  // Main function
{
	bool k = false;
	while (!k) { // This loop help to procedura will continue infinity times 
		int a, b, c; int x;
		cout << "\n\t\t Menu \n 1. Largest number between Integers \n";
		cout << " 2. Largest number between Float numbers \n";
		cout << "\n\tYour choice ";
		cin >> x;
		switch (x) {
		case 1: {
			cout << "a = "; cin >> a;
			cout << "b = "; cin >> b;
			cout << "c = "; cin >> c;
			cout << "MAX = " << Largest(a, b, c) << endl;
		}
				break;
		case 2: {
			float a, b, c;
			cout << "a = "; cin >> a;
			cout << "b = "; cin >> b;
			cout << "c = "; cin >> c;
			cout << "MAX = " << Largest(a, b, c) << endl;
		}
				break;
		
		default: cout << "Invalid choice" << endl;
		}
		cout << "\n Press any keybr and you will go to Menu\n\n";
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}
*/

/*
// Example 4
#include <iostream>
using namespace std;
template <typename T>  
T Largest(T a, T b, T c) {   // This will get any type which will entered instead of T 
	if (a >= b && a >= c) return a;
	else if (b >= c && b >= a)  return b;
	else if (c >= b && c >= a) return c;
}

int main()  // Main function
{
	bool k = false;
	while (!k) { // This loop help to procedura will continue infinity times
		int a, b, c; int x;
		cout << "\n\t\t Menu \n 1. Largest number between Integers \n";
		cout << " 2. Largest number between Float numbers \n";
		cout << "\n\tYour choice ";
		cin >> x;
		switch (x) {
		case 1: {
			cout << "a = "; cin >> a;
			cout << "b = "; cin >> b;
			cout << "c = "; cin >> c;
			cout << "MAX = " << Largest <int> (a, b, c) << endl;  
			// that <int> means that <T> will be int
		}
				break;
		case 2: {
			double a, b, c;
			cout << "a = "; cin >> a;
			cout << "b = "; cin >> b;
			cout << "c = "; cin >> c;
			cout << "MAX = " << Largest <double> (a, b, c) << endl;
		}
				break;

		default: cout << "Invalid choice" << endl;
		}
		cout << "\n Press any keybr and you will go to Menu\n\n";
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}
*/

