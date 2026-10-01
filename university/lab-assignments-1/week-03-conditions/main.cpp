/*
Student information:
Alimov Abdullokh 
U1910060
Section:004
*/




//Exercise 1
#include <iostream>
using namespace std;
int main()
{
	float c, f;
	cout << "Enter the value of temperature in centigrade " << endl;
	cout << "T= ";
	cin >> c;
	if (c >= (-273)) {
		f = (c * 9 / 5) + 32;
		cout << "Temperature is " << f << " in fahrenheit" << endl;
	}
	else cout << " Enter value again" << endl;
	system("pause");
	return 0;
}




/*
//Exercise 2
#include <iostream>
using namespace std;
int main()
{
	float num1, num2;
	cout << "Enter the first number " << endl;
	cout << "num 1= ";
	cin >> num1;
	cout << "Enter the second number " << endl;
	cout << "num 2= ";
	cin >> num2;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	cout << "num 1= " << num1 << " num 2= " << num2 << endl;
	system("pause");
	return 0;
}
*/

/*
//Exercise 3
#include <iostream>
using namespace std;
int main()
{
	float num1, num2, num3;
	cout << "Enter the first number " << endl;
	cout << "num 1= ";
	cin >> num1;
	cout << "Enter the second number " << endl;
	cout << "num 2= ";
	cin >> num2;
	cout << "Enter the third number " << endl;
	cout << "num 3= ";
	cin >> num3;
	if (num1 >= num2 && num1 >= num3) cout << "max=" << num1 << endl;
	else if (num2 >= num1 && num2 >= num3) cout << "max=" << num2 << endl;
	else if (num3 >= num2 && num3 >= num1) cout << "max=" << num3 << endl;
	system("pause");
	return 0;
}
*/


/*
//Exercise 4
#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter value for year " << endl;
	cout << "year= ";
	cin >> year;
	if (year % 4 == 0 && year>0) cout << year << " is Leap year "<<endl;
	else if (year % 4 != 0 && year > 0) cout << year << " is not Leap year"<<endl;
	else if ( year <= 0) cout << year << " Year can not be negative " << endl;
	system("pause");
	return 0;
}
*/

/*
//Exercise 5
#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter value " << endl;
	cout << "x= ";
	cin >> x;
	if (x % 2 == 0 ) cout << x << " is even " << endl;
	else if (x % 2 != 0) cout << x << " is odd" << endl;
	system("pause");
	return 0;
}
*/