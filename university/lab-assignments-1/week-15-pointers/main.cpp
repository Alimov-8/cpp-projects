/*
Student information:
ID:      U1910060
Name:    Alimov Abdullokh
Section: 004
*/
/*
    //Example 1
#include <iostream>
using namespace std;
int main() {
	int arr[88] = {}, n, sum=0, avr, *ptr = arr;
	cout << "Enter number of elements of Array = ";	cin >> n;
	cout << "Enter Array elements" << endl;
	for (int i = 0; i < n; i++) {  //This loop helps to input elements of Array
		cin >> arr[i];	}
	cout << "Array" << endl;
	for (int i = 0; i < n; i++) {  // Output
		cout << "arr[" << i << "] = " << arr[i] << endl;}
	cout << " Average of n numbers\n";
	for (int i = 0; i < n; i++) {
		sum = sum + *ptr;
		ptr = ptr + 1;}
	avr = sum / n;
	cout << "Answer = " << avr  << endl;
	system("pause");
	return 0;
}
*/
/*
//Example 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a, b, c; float p;  int *ptra = &a, * ptrb = &b, * ptrc = &c;
cout << " Please enter 3 sides of Triengle\n Enter value for a = ";cin >> a;
cout << " Enter value for b = ";cin >> b;
cout << " Enter value for c = ";cin >> c;
if ((*ptra > 0) && (*ptrb > 0) && (*ptrc > 0) && (*ptra + *ptrb > *ptrc) && (*ptra + *ptrc > *ptrb) && (*ptrb + *ptrc > *ptra)) {
p = (*ptra + *ptrb + *ptrc) / 2;	
cout << "Area of Scalene Triangle = " << sqrt(p * (p - *ptra) * (p - *ptrb) * (p - *ptrc)) << endl;}
else cout << "Invalid Input. Please enter again"<<endl;
system("pause");
return 0;
}
*/

/*
   //Example 3
#include <iostream>
using namespace std;
int main() {
	int Num1,Num2, * ptr1 = &Num1,*ptr2=&Num2;
	cout << "Enter Number 1 = ";	cin >> Num1;
	cout << "Enter Number 2 = ";	cin >> Num2;
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	cout << " Number 1 = " << Num1 << "  Number 2 = " << Num2 << endl;
	system("pause");
	return 0;
}
*/