/*
Student information:
Alimov Abdullokh
User ID: U1910060
*/



// #1 Exercise
#include <iostream>
using namespace std;
int main()
{
	float s, l, r;
	const float pi = 3.14;
	cout << "Enter value for radius=";
	cin >> r;
	if (r > 0) {
		s = pi * r * r;
		l = 2 * pi * r;
		cout << "Area of Circle = " << s << endl;
		cout << "Circumference of Circle =" << l << endl;
	}
	if (r <0) 
		cout << "Please enter positive number. Radius can not be negative"<<endl;
	system("pause");
	return 0;
}





/*
// #2 Exercise
#include <iostream>
using namespace std;
int main()
{
float a,b,c,s,p;
cout << "Enter value for a=";
cin >> a;
cout << "Enter value for b=";
cin >> b;
cout << "Enter value for c=";
cin >> c;
if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a)) {
	p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Area of Scalene Triangle = " << s << endl;
}
if ((a < 0) || (b < 0) || (c < 0)) cout << "Please enter positive number.Triangle side can not be negative"<<endl;
if ((a + b <= c) || (a + c <= b) || (b + c <= a)) cout << "Your values are not appropriate!"<<endl;
system("pause");
return 0;
}
*/



/*
// #3 Exercise
#include <iostream>
using namespace std;
int main()
{
	float a, s;
	cout << "Enter value for triangular side =";
	cin >> a;
	if (a > 0){
		s = (sqrt(3) * a * a) / 4;
	cout << "Area of Equilateral Triangle = " << s << endl;
     }
if (a < 0) cout << "Please enter positive number.Triangle side can not be negative" << endl;
system("pause");
return 0;
}
*/




/*
// #4 Exercise
#include <iostream>
using namespace std;
int main()
{
float a,b,s;
cout << "Enter value for triangular side a =";
cin >> a;
cout << "Enter value for triangular side b =";
cin >> b;
if ((a > 0) && (b > 0)) {
	s = (a * b) / 2;
	cout << "Area of Right angle Triangle = " << s << endl;
}
if ((a < 0) || (b < 0)) cout << "Please enter positive number.Triangle side can not be negative" << endl;
system("pause");
return 0;
}
*/


/*
// #5 Exercise
#include <iostream>
using namespace std;
int main()
{
	float a, b, s;
	cout << "Enter value for rectangular side a =";
	cin >> a;
	cout << "Enter value for rectangular side b =";
	cin >> b;
	if ((a > 0) && (b > 0)) {
		s = a * b;
		cout << "Area of Rectangle = " << s << endl;
	}
	if ((a < 0) || (b < 0)) cout << "Please enter positive number.Rectengular side can not be negative" << endl;
	system("pause");
	return 0;
}
*/



/*
// #6 Exercise
#include <iostream>
using namespace std;
int main()
{
	float a, b, s;
	cout << "Enter value for square a =";
	cin >> a;
	if (a > 0) {
		s = a * a;
		cout << "Area of Square  = " << s << endl;
	}
	if (a < 0) cout << "Square side can not be negative"<<endl;
	system("pause");
	return 0;
}
*/