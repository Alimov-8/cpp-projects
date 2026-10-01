/*
Student Information:
ID:      U1910060
Name:    Alimov Abdullokh
Section: 004
*/
  //Example 1
#include <iostream>
using namespace std;
int Power(int x, int y) {  // Power function 
	if (y == 0) { return 1; }  // any number's first power is equal to 1
	else return (x * Power(x, y - 1)); // x*x*x*...*x*1  
}
int main(){
	int x, y;
	cout << "Input X = "; cin >> x;
	cout << "Input Y = "; cin >> y;
	cout << "Power of " << x << "^" << y <<" = "<< Power(x, y) << endl;
	system("pause");
	return 0;
}

/*
//Example 2
#include <iostream>
using namespace std;
int Sum(int x) {  // Sum function 
	if (x == 1) { return 1; }  // when x =1 it will work as a like this ..+..+..+1=   
	else return (x + Sum(x-1));  // ...+...+...+...
}
int main() {
	int x;
	cout << "Input X = "; cin >> x;
	cout << "Sum of natural numbers " << x << " = " << Sum(x) << endl;
	system("pause");
	return 0;
}
*/
/*
//Example 3
#include <iostream>
using namespace std;
int F(int n) {  // Fibonacci function 
	if (n == 1 || n == 0) { return 1; } // when n=1 or n=0 it will give 1 
	else return  (F(n - 1) + F(n - 2)); // it will decrease till that n=1 or n=0 then we get
}                                       // like this 1+1+1+1+...+1 
int main() {
	int n,i=1;
	cout << "Input N = "; cin >> n;
	cout << "Fibonacci Series " << n << " = 1 ";
	while (i <= n) {  //This loop provides that to create Fibonacci series 
		cout << F(i) << " ";
		i++;
	}
	cout << endl;
	system("pause");
	return 0;
}
*/
/*
//Example 4
#include<iostream>
using namespace std;
int GCD(int num1, int num2) {
	if (num2 == 0) return num1;   // when last remainder = 0 it will print previous remainder
	else return GCD(num2,num1%num2);  // num1=num2 and num2=remainder
}
int main(){
	int num1, num2;
	cout << "Enter First Number:";
	cin >> num1;
	cout << "Enter Second Number:";
	cin >> num2;
	cout << "GCD of " << num1 << " and " << num2 << " is " << GCD(num1,num2) << endl;
	system("pause");
	return 0;
}
*/

