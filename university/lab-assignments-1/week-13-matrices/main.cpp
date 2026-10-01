/*
Student information:
ID:      U1910060
Name:    Alimov Abdullokh
Section: 004
*/

  //Example 1
#include <iostream>
using namespace std;
int main() {
	int arr[7][7] = {};
	int row=0,col=0;
	arr[0][0] = 1;
	for ( row=0;row<7;row++) {
		for ( col=0;col<=row;col++){
			if (col == 0 || row == col) { arr[row][col] = 1; cout <<" "<< arr[row][col]; }
			else { arr[row][col] = arr[row - 1][col-1] + arr[row - 1][col ]; cout <<" "<< arr[row][col]; }
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

/*
//Example 2
#include <iostream>
#include <conio.h>
using namespace std;
int Main_arr[5][5], Tr_arr[5][5], Second_arr[5][5], Arr3[5][5], m, n,d, sum=0;

void Input() {
	cout << " Enter M*N matrix value of Rows ";    cin >> m;
	cout << " Enter M*N matrix value of Columns "; cin >> n;
	cout << " Enter elements of Matrix \n";
	for (int row = 0; row < m; row++) {  //Input array elements
		for (int col = 0; col < n; col++)
		{ cin >> Main_arr[row][col]; }}
	cout <<m<<"*"<<n<< " Matrix\n";
	for (int row = 0; row < m; row++) {  //Output 2D array elements  
		for (int col = 0; col < n; col++)
		{ cout << Main_arr[row][col] << " "; }
		cout << endl; }}

void Input2() {
	cout << " Enter elements of 2nd Matrix \n";
	for (int row = 0; row < m; row++) {  //Input array elements
		for (int col = 0; col < n; col++)
		{	cin >> Second_arr[row][col];}	}
	cout << m << "*" << n << " Matrix\n";
	for (int row = 0; row < m; row++) {  //Output 2D array elements  
		for (int col = 0; col < n; col++) {
			cout << Second_arr[row][col] << " ";}
		cout << endl;}}

void Sum() {
	for (int row = 0; row < m; row++) {   
		for (int col = 0; col < n; col++)
		{
			Arr3[row][col] = Main_arr[row][col] + Second_arr[row][col];
		}
	}
	for (int row = 0; row < m; row++) {  //Output 2D array elements  
		for (int col = 0; col < n; col++) {
			cout << Arr3[row][col] << " ";}
		cout << endl;}
}

void Transpose() {
	cout << n << "*" << m << " Matrix\n";
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col++) {
			Tr_arr[row][col] = Main_arr[col][row];}}
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col++) {
			cout << Tr_arr[row][col] << " ";
		}cout << endl;}
}

void Product() {
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < d; col++) {
			for (int row1 = 0; row1 < n; row1++) {
				Arr3[row][col] +=  Main_arr[row][row1] * Second_arr[row1][col];
			}
		}
	}
	cout << "Answer = " <<m<<"*"<<d<<" Matrix is"<< endl;
	for (int row = 0; row < m; row++) {  //Output 2D 2nd array elements  
		for (int col = 0; col < d; col++) {
			cout << Arr3[row][col] << " ";
		}
		cout << endl;
	}
}
void Input3(){
	cout << " Enter M*D matrix value of Rows " << n << endl;
	cout << " Enter M*D matrix value of Columns "; cin >> d;
	cout << " Enter elements of 2nd Matrix \n";
	for (int row = 0; row < n; row++) {  //Input 2nd array elements
		for (int col = 0; col < d; col++)	{
			cin >> Second_arr[row][col];	}	}
	cout << n << "*" << d << " Matrix\n";
	for (int row = 0; row < n; row++) {  //Output 2D 2nd array elements  
		for (int col = 0; col < d; col++)	{
			cout << Second_arr[row][col] << " ";	}
		cout << endl;	}
}
int main() {
	cout << "\n\t\t\t    Menu\n\t\t\t M*N matrix\n\t\t\t <1> Read and Display\n\t\t\t <2> Sum\n\t\t\t";
	cout << " <3> Transpose \n\t\t\t <4> Product\n\t\t\t < > Exit\n\t\t\t Press Your choice ";
	switch (_getch()) {	  
	    case 49:{system("cls"); cout << "\n\t M*N matrix\n"; Input();  }
				break;
	    case 50: { system("cls"); cout << "\n\tSum of two M*N matrix\n"; Input(); Input2();
			cout << "\n\tAnswer: \n"; Sum(); }
				   break;
	    case 51: { system("cls"); cout << "\n\tTranspose of M*N matrix\n"; Input(); 
			Transpose(); }
				   break;
		case 52: { system("cls"); cout << "\n\tProduct of M*N matrix and N*D matrix\n"; Input(); 
			Input3(); Product(); }
				   break;
		default: {system("cls");}
	}
	system("pause");
	return 0;
}
*/
/*
//Example 3
#include<iostream>
using namespace std;
int main() {
	int a[3][5];
	int s1, s2, s3, s4, s5; //S is total sales of each salesman
	int p1, p2, p3;         //P is total sales of each item
	cout << " Enter elements and it will read like this \n";
	cout << "     S1  S2  S3  S4  S5" << endl;
	cout << "P1   1   2   3   4   5\nP2   1   2   3   4   5\nP3   1   2   3   4   5\n ";
	for (int row = 0; row < 3; row++)
	{	for (int col = 0; col < 5; col++)
		{	cin >> a[row][col];	}	}
	for (int row = 0; row < 3; row++)
	{   for (int col = 0; col < 5; col++)
		{cout << a[row][col] << "   ";	}
		cout << endl;	}
	s1 = a[0][0] + a[1][0] + a[2][0];
	s2 = a[0][1] + a[1][1] + a[2][1];
	s3 = a[0][2] + a[1][2] + a[2][2];
	s4 = a[0][3] + a[1][3] + a[2][3];
	s5 = a[0][4] + a[1][4] + a[2][4];
	cout << "Total sales of S1 = " << s1 << endl;
	cout << "Total sales of S2 = " << s2 << endl;
	cout << "Total sales of S3 = " << s3 << endl;
	cout << "Total sales of S4 = " << s4 << endl;
	cout << "Total sales of S5 = " << s5 << endl;
	p1 = a[0][0] + a[0][1] + a[0][2] + a[0][3] + a[0][4];
	p2 = a[1][0] + a[1][1] + a[2][2] + a[2][3] + a[2][4];
	p3 = a[2][0] + a[2][1] + a[2][2] + a[2][3] + a[2][4];
	cout << "Total sales of P1 = " << p1 << endl;
	cout << "Total sales of P2 = " << p2 << endl;
	cout << "Total sales of P3 = " << p3 << endl;
	system("pause");
	return 0;
}
*/