/*
Student Information:
ID: U1910060
Alimov Abdullokh
Section: 004
*/

   //Example 1
#include <iostream>
using namespace std;
const float Pi = 3.14;
float area,r;
void Area() // This function calculate value of Area
{
	area = Pi * r * r;	
}
int main()  // Main function
{
	cout << "This Program calculate area of circle" << endl;
	cout << " Enter value for Radious of circle = ";
read:
	cin >> r;
	Area();  // Function 
	if (r > 0) {
		cout << "Area of circle = " << area << endl << endl;
	}
	if (r <= 0) {
		cout << " Radious can not be negative or 0" << endl;
		cout << "Enter value again = ";
		    goto read;
	}
	system("pause");
	return 0;
}


/*
  //Example 2
#include <iostream>
using namespace std;
int x, y;
void Logic()  // This function provides to swap values of two number  
{
	x = x + y;
	y = x - y;
	x = x - y;
}
int main()  // This is main function 
{
	cout << "This Program swap two values"<< endl;
	cout << " Enter value for First  Number = ";
	cin >> x;
	cout << " Enter value for Second Number = ";
	cin >> y;
	Logic();
	cout << "First number = " << x << "   Second number = " << y << endl << endl;
	system("pause");
	return 0;
}
*/

/*
   //Example 3
#include <iostream>
using namespace std;
int x, y, z;
float a, b;
float time;
void Calculate()  // This function provides to convert hour and second to minute. 
{
		a = x * 60.0;
		b = z / 60.0;
		time = a + b + y;	
}
int main()  // This is main function 
{
	cout << "This Program convert time to minutes" << endl;
	read:
	cout << " Enter value for Hour = ";
	cin >> x;
	cout << " Enter value for Minute = ";
	cin >> y;
	cout << " Enter value for Second = ";
	cin >> z;
	if (x >= 0 && y >= 0 && z >= 0) {
		Calculate();
		cout << "Time is = " << time << " minutes" << endl << endl;
	}
	else {
		cout << "Time can not be negative. Enter value again" << endl;
		goto read;
	}
	system("pause");
	return 0;
}
*/

/*
   //Example 4
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int n;
float f=1,sum=0,k=1;
void Calculate()  // This function provides to convert hour and second to minute. 
{
	for(int i=1;i<=n;i++){  //This loop help to calculate factorial,power and sum  
		f = f * i; // factorial
		k = pow(i, i); // power of number
		sum = sum + k*1.0 / f*1.0; // sum of series
	}
}
int main()
{
	cout << "This Program calculate sum of series" << endl;
	cout << " Enter value for n = ";
	cin >> n;
	Calculate();
	cout << "Sum of Series = " << sum << endl<<endl;
	system("pause");
	return 0;
}
*/
