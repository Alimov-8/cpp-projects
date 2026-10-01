/*
Student information:
ID:     1910060
Name:   Alimov Abdullokh
Section:004
*/

//Example 1
#include <iostream>
using namespace std;
int main() {
	int arr[88],n;
	cout << "Enter number of elements of Array = ";
	cin >> n;
	cout << "Enter Array elements" << endl;
	for (int i = 0; i < n; i++) {  //This loop helps to input elements of Array
		cin >> arr[i];}
	cout << "Array" << endl;
	for (int i = 0; i < n; i++) {  // Output
		cout << "arr[" << i << "] = " << arr[i] << endl;}
	system("pause");
	return 0;
}

/*
//Example 2
#include <iostream>
using namespace std; int n;
int Sum(int arr[88]) {  // This function helps to calculate sum of array elements
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	return sum/n;  // average of array elements 
}
int main() {
	int arr[50];
	cout << "Enter number of elements of Array = ";
	cin >> n;
	cout << "Enter Array elements" << endl;
	for (int i = 0; i < n; i++) {   // Input
		cout << "a[" << i << "] = ";
		cin >> arr[i]; 
	}
		cout << "Average of Array elements = " << Sum(arr)<< endl;
		system("pause");
		return 0;
}
*/
/*
//Example 3
#include <iostream>
using namespace std; 
int main() {
	int arr1[10],arr2[10],arr3[20],n1,n2;
	int i = 0, k = 0, d = 0, j = 0;

	cout << "Enter number of elements of Array 1 = ";  // 1st Array elements, Input
	cin >> n1;
	cout << "Enter Array elements" << endl;
	for (int i = 0; i < n1; i++) {
		cout << "arr1[" << i << "] = ";
		cin >> arr1[i];}

	cout << "Enter number of elements of Array 2 = "; // 2nd Array elements, Input
	cin >> n2;
	cout << "Enter Array elements" << endl;
	for (int i = 0; i < n2; i++) {
		cout << "arr2[" << i << "] = ";
		cin >> arr2[i];}
	
	for (i = 0; i < n1 + n2; i++) { // This loop helps to process for working till n1+n2 times (n1+n2 means that number of 3rd array elements) 
		if (arr1[k] > -8000 && arr2[j] > -8000) { // If Array elements is not garbage then it will compare which is greator among two Arrays elements
			if (arr1[k] > arr2[j]) { arr3[d] = arr2[j]; ++j; ++d; }   
			else { arr3[d] = arr1[k]; ++k; ++d; }
		}
		else if (arr1[k] < -8000) arr3[d] = arr2[j]; // if 1st array element garbage in k position then that arr3 = arr2 in j position
		else if (arr2[j] < -8000) arr3[d] = arr1[k]; 
	}

	cout << "\n Array 3 " << endl;   //Output of 3rd Array elements
	for (int i = 0; i < n1+n2; i++) {   
		cout << "arr3[" << i << "] = " << arr3[i] << endl;
	}
	system("pause");
	return 0;
}
*/
/*
//Example 4
#include <iostream>
using namespace std;
int main() {
	int arr[88], n, x=88, p = 88;
	cout << "Enter number of elements of Array = ";
	cin >> n;
	cout << "Enter Array elements" << endl;
	for (int i = 0; i < n; i++) {     //This loop helps to Input array elements
		cout << "a[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "Enter value which you want to insert = ";
	cin >> x;
	cout << "Enter position where you want to insert = ";
	cin >> p;
	n++;
	for (int i = n; i >= p; i--) {   // Shifting
	     arr[i + 1]= arr[i];
	}
	arr[p]=x;  
	for (int i = 0; i < n; i++) {   // Output
		cout << "a[" << i << "] = " << arr[i] << endl;
	}
	system("pause");
	return 0;
}
*/
/*
//Example 5
#include <iostream>
using namespace std;
int main() {
	int arr[88], n, x, p=88;
	cout << "Enter number of elements of Array = ";
	cin >> n;
	cout << "Enter Array elements" << endl;
	for (int i = 0; i < n; i++) {     //This loop helps to Input array elements
		cout << "a[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "Enter value which you want to delete = ";
	cin >> x;
	for (int i = 0; i < n; i++) {   //This loop helps to find position of element which should delete
		if (x == arr[i]) { p = i; }}
	for (int i = p; i < n; i++) {  // Shifting
		arr[i] = arr[i + 1];}
	--n;
	for (int i = 0; i < n; i++) {   // Output
		cout << "a[" << i << "] = " << arr[i] << endl;}
	system("pause");
	return 0;
}
*/

