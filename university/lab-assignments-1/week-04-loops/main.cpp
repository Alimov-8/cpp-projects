/*
Student Information:
Alimov Abdullokh
U1910060
Section 004
*/


//Exercise #1
#include <iostream>
using namespace std;
int main()
{
	int m, n, sum = 0;
	cout << "Enter value for m = ";
	cin >> m;
	cout << "Enter value for n = ";
	cin >> n;

	if (m < n)
	{
		while (m <= n)
		{
			sum = sum + m;
			m++;
		}
		cout << "Sum of numbers from m to n = " << sum << endl;
	}
	else if (n < m)
	{
		while (n <= m)
		{
			sum = sum + n;
			n++;
		}
		cout << "Sum of numbers from m to n = " << sum << endl;
	}
	else if (n == m)
	{
		sum = m;
		cout << "Sum of numbers from m to n = " << sum << endl;
	}
	system("pause");
	return 0;
}



/*
//Exercise #2
#include <iostream>
using namespace std;
int main()
{
	int  f1, f2, f3, i;
	f1 = 1;
	f2 = 1;
	f3 = 0;
	cout << f1 << endl << f2 << endl;
	for (i = 0; i <= 8; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		cout << f3 << endl;
	}
	system("pause");
	return 0;
}
*/

/*
//Exercise #3
#include <iostream>
using namespace std;
int main()
{
	int n,x ,f1=0;
	cout <<"Enter value for n = ";
	cin >> n;
	if (n >= 0) {
		while (n > 0)
		{
			x = n % 10;
			f1 = f1 + x;
			n = n / 10;
		}
		cout << "Sum of its digits is = " << f1 << endl;
	}
	else cout << "Please enter another value" << endl;
	system("pause");
	return 0;
}
*/


/*
//Exercise #4
#include <iostream>
using namespace std;
int main()
{
	int n, x, r=0;
	cout << "Enter value for n= ";
	cin >> n;
	for (int i = 2; i < n; i++) {
		x = n % i;
		if (x == 0) { r = r + 1; }
	}
	if (r>0) { cout << n << " is not prime number" << endl; }
	else { cout << n << " is prime number" << endl; }
	system("pause");
	return 0;
}
*/

/*
//Exercise #5
#include <iostream>
using namespace std;
int main()
{
	double n, sum=0;
	cout << "Enter value for n= ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum = sum + (1.0 / i);
	}
	 cout <<"Sum of series = "<<sum << endl; 
	system("pause");
	return 0;
}
*/


/*
//Exercise #6
#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "Enter value for n= ";
	cin >> n;
	for (int i = 1; i <= n; i=i+2) {
		sum = sum + i;
	}
	cout << "Sum of series = " << sum << endl;
	system("pause");
	return 0;
}
*/


/*
//Exercise #7
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter value for n= ";
	cin >> n;
	switch (n) {
	case 1:cout << "Monday" << endl;
		break;
	case 2:cout << "Tuesday" << endl;
		break;
	case 3:cout << "Wednesday" << endl;
		break;
	case 4:cout << "Thursday" << endl;
		break;
	case 5:cout << "Friday" << endl;
		break;
	case 6:cout << "Saturday" << endl;
		break;
	case 7:cout << "Sunday" << endl;
		break;
	default: cout << "Enter another value for n" << endl;
	}
	system("pause");
	return 0;
}
*/

/*
//Exercise #8
#include <iostream>
using namespace std;
int main()
{
	double num1,num2;
	char x;
	cout << "Enter value for num1= ";
	cin >> num1;
	cout << "Enter value for num2= ";
	cin >> num2;
	cout << "Enter arithmetic operator ";
	cin >> x;
	switch (x) {
	case '+':cout << "Addition = " << num1 + num2 << endl;
		break;
	case '-':cout << "Subtraction = " << num1 - num2 << endl;
		break;
	case '/':cout << "Division = " << (num1*1.0 / num2) << endl;
		break;
	case '*':cout << "Multiplication = " << (num1 * num2) << endl;
		break;
	default: cout << "Enter only arithmetic operators like (+,-,*,/) " << endl;
	}
	system("pause");
	return 0;
}
*/