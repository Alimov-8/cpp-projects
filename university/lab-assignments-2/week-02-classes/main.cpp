/*
Student Information:
ID: U1910060
Name: Alimov Abdullokh
Section: 004
*/


// Problem ¹1 and ¹2
//libraries 
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

//Class of Problem 1
class Student{
private:
	//Identifires
	string ID, Name;
	double OOP2_Score, Maths_Score, English_Score, Total_Score;
	double F_ctotal(double x, double y, double z);
public:
	//Declaretion of Functions
	void F_Takedata();
	void F_Showdata();
};

//Functions of Problem 1
double Student::F_ctotal(double x, double y, double z){
	return x + y + z;
}
void Student::F_Takedata(){
	cout << "ID ";
	cin >> ID;
	cout << "Name ";
	cin >> Name;
	cout << "OOP2_Score ";
	cin >> OOP2_Score;
	cout << "Maths_Score ";
	cin >> Maths_Score;
	cout << "English_Score ";
	cin >> English_Score;
	Total_Score = F_ctotal(OOP2_Score, Maths_Score, English_Score);
}

void Student::F_Showdata(){
	cout << "Student Information " << endl;
	cout << "ID : " << ID << endl;
	cout << "Name : " << Name << endl;
	cout << "OOP2_Score " << OOP2_Score << endl;
	cout << "Maths_Score " << Maths_Score << endl;
	cout << "English_Score " << English_Score << endl;
	cout << "Total_Score : " << Total_Score << endl;

}

// class of 2nd Problem
class Employee {
private:
	// Identifires
	string ID, Name;
	int No_Hrs, Rate_Hrs;



public:
	//   Functions 
	void setEmployee_ID(string x){
		ID = x;
	}
	string getEmployee_ID(){
		return ID;
	}
	void setEmployee_Name(string y){
		Name = y;
	}
	string getEmployee_Name(){
		return Name;
	}
	void setEmployee_No_Hrs(int z){
		No_Hrs = z;
	}
	int getEmployee_No_Hrs(){
		return No_Hrs;
	}
	void setEmployee_Rate_Hrs(int t){
		Rate_Hrs = t;
	}
	int getEmployee_Rate_Hrs(){
		return Rate_Hrs;
	}
	double getTotal_Monthly_Salary(){
		return No_Hrs*Rate_Hrs;
	}

};





// Main Function
int main(){
	setlocale(LC_ALL, "RU"); // this for " ¹ "
	// Main_Menu
	cout << "  _Main_Menu_\n Problem ¹1 \n Problem ¹2" << endl;
	switch (_getch()){

		// Problem 1
	case 49: {
				 system("cls");
				 cout << "Problem ¹1" << endl;
				 Student Student_1;
				 Student_1.F_Takedata();
				 system("cls");
				 Student_1.F_Showdata();
				 system("pause");
				 return 0;
	}
		break;

		//Problem 2
	case 50:{
				for (int i = 0; i <= 2; i++){
					//Menu 2
					system("cls");
					cout << "      _Menu_\n 1) setDetails \n 2) getDetails" << endl;
					Employee Employee_1;
					switch (_getch()){
					case 49: {
								 system("cls");
								 cout << "Enter Details" << endl;
								 string x, y;
								 int z, t;
								 cout << "ID: "; cin >> x;
								 cout << "Name: "; cin >> y;
								 cout << "No_Hrs: "; cin >> z;
								 cout << "Rate_Hrs: "; cin >> t;
								 Employee_1.setEmployee_ID(x);
								 Employee_1.setEmployee_Name(y);
								 Employee_1.setEmployee_No_Hrs(z);
								 Employee_1.setEmployee_Rate_Hrs(t);

					}

					case 50:{

					}
						system("cls");
						cout << "Details Of Employee " << endl;
						cout << "ID: " << Employee_1.getEmployee_ID() << endl;
						cout << "Name: " << Employee_1.getEmployee_Name() << endl;
						cout << "No_Hrs: " << Employee_1.getEmployee_No_Hrs() << endl;
						cout << "Rate_Hrs: " << Employee_1.getEmployee_Rate_Hrs() << endl;
						cout << "Total: " << Employee_1.getTotal_Monthly_Salary() << endl;
						system("pause");

					}
					break;
				}


	}
		break;

		//Incorrect input -> Recursion
	default:  {
				  main();
				  system("cls");
	}
		break;
	}


	system("pause");
	return 0;
}
