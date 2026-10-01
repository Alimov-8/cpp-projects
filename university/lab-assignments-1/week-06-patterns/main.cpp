/*
Student informations:
Alimov Abdullokh
U1910060
Section 004
*/


// Exercise #1
#include <iostream>
using namespace std;
int main()
{
for (int i=1;i<=5;i++)       // this is main loop and provide with 5 column  
{
for (int j=1;j<=i;j++)       // this loop work with rows and print " * "
{
cout << "*";
}
cout << endl;
}
system("pause");
return 0;
}



/*
// Exercise #2
#include <iostream>
using namespace std;
int main()
{
for (int i = 1; i <= 5; i++)       // this part provide 5 column
{
	for (int j =5;j>=i ;j-- )      // this loop print space 
	{
		cout << " ";
	}
for (int j = 1; j <= i; j++)        //this section print " * "
{
cout << "*";
}
cout << endl;
}

system("pause");
return 0;
}
*/


/*
// Exercise #3
#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5; i=i+2)         // this is main loop and provide with 3 column 
	{   
		for (int j = 3; j >= i; j=j-2)     // this part provide with space
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j = j++)   // this section print "*"
		{
			cout << "*";
		}
		cout << endl;		
	}
	system("pause");
	return 0;
}
*/

/*
// Exercise #4
#include <iostream>
using namespace std;
int main()
{
for (int i = 1; i <= 5; i++)     //this is main loop and provide with 5 column
{
for (int j = 1; j <= i; j++)     //this print " * " by increasing number of *
{
cout << "*";
}
cout << endl;
}
  
for (int i = 5; i >= 1; i--)     //this is main loop and provide with 5 column
{
for (int j = 1; j <= i; j++)     //this part print " * " by decreasing number of *
{
cout << "*";
}
cout <<endl;
}
system("pause");
return 0;
}
*/


/*
// Exercise #5
#include <iostream>
using namespace std;
int main()
{
	float f, sum, x;
	f = 1;
	sum = 0;
	for (int i = 1; i <= 7; i++)        // this loop means that calculations will be 7 times 
	{
		f = f * i;                      // calculating factorial of number
		sum = sum + (i / f*1.0);        // calculating sum of number divided by its factorial like (1/!1+ 2/!2 + 3/!3 .....)
	}
	cout << sum << endl;
	system("pause"); 
	return 0;
}
*/
