/*
Student Information:
ID: U1910060
Name: Alimov Abdullokh
Section: 004
*/


// Program 1
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

///////////////////////////////////////////////
class DayTime{
private:
	//Identifires
	int Hour, Minute, Second;
public:
	//Constructor
	DayTime(){	}
	DayTime(int Hour, int Minute, int Second){
		this->Hour = Hour;
		this->Minute = Minute;
		this->Second = Second;
	}

	// Hour
	int getHour() const {
		return Hour;
	}

	// Minute
	int getMinute() const {
		return Minute;
	}

	// Second
	int getSecond() const {
		return Second;
	}
	
	// Daytime in seconds
	int asSecond() const {
		return (60 * 60 * Hour + 60 * Minute + Second);
	}

	//Increament Seconds Overload increament
	friend void operator++(DayTime &M_DayTime);

	//Decreament Minutes Overload decreament
	friend void operator--(DayTime &M_DayTime);

	//Displaying Time
	void DisplayTime(){
		cout << getHour() << " : " << getMinute() << " : " << getSecond() << endl;
	}

	//Displaying Time AsSeconds
	void DisplayTime_asSeconds(){
		cout <<" "<< asSecond() << endl;
	}


	// Destructor
	~DayTime(){
		cout << "Destructor is Working for DayTime Class " << endl;
	}

};

//Increment Seconds by 1
void operator++(DayTime &M_DayTime){
	M_DayTime.Second++;
	if (M_DayTime.Second >= 60){ M_DayTime.Second = 0; M_DayTime.Minute++; }
	if (M_DayTime.Minute >= 60){ M_DayTime.Minute = 0; M_DayTime.Hour++; }
}

// Decrement Minute by 1
void operator--(DayTime &M_DayTime){
	M_DayTime.Minute--;
	if (M_DayTime.Minute < 0){ M_DayTime.Minute = 59; M_DayTime.Hour--; }
	}

///////////////////////////////////////////////
int main(){
	DayTime DayTime_Obj(8,0,8);
	
	for (int i = 0; i < 100; i++){
		system("cls");
		cout << "  _Main_Menu_  " << endl;
		cout << " 1.To Display Time" << endl;
		cout << " 2.To Display Time asSeconds" << endl;
		cout << " 3.To Increament seconds" << endl;
		cout << " 4.To Decrements minutes" << endl;
		cout << " 5.To Exit" << endl;

		cout << "Your Choice: " << endl;
		switch (_getch()){
		case 49:{
					system("cls");
					cout << "Time:" << endl;
					DayTime_Obj.DisplayTime();
					system("pause");
		}
			break;
		case 50:{
					system("cls");
					cout << "Time as Seconds" << endl;
					DayTime_Obj.DisplayTime_asSeconds();
					system("pause");
		}
			break;
		case 51:{
					system("cls");
					DayTime_Obj++;
					cout << "Succesfully Increase by 1 second" << endl;
					system("pause");
		}
			break;
		case 52:{
					system("cls");
					DayTime_Obj--;
					cout << "Succesfully Increase by 1 minute" << endl;
					system("pause");
		}
			break;
		case 53: {
					 system("cls");
					 return 0;
		}
			break;


		}
	}


	system("pause");
	return 0;
}


/*
// Program 2
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

///////////////////////////////////////////////
class Dollar{
private:
	//Identifires
	float Currnecy, Mktrate, Offrate;
public:

	Dollar(){
		Currnecy = 8;
	}

	// Input current date market and official rates
	void setRates(){
		cout << "Enter the Mktrate rate of Dollar: "; cin >> Mktrate;
		cout << "Enter the Currency rate of Dollar: "; cin >> Offrate;
	}

	//get Dollar
	float getDollar(){

		return Currnecy;
	}

	//get Market Soums
	float getMarketSoums(){

		return Currnecy*Mktrate;
	}
	
	//get Official Soums
	float getOfficialSoums(){

		return Currnecy * Offrate;
	}
 
	//Overload Operator to print details of a Dollar
	friend void operator<<(ostream &out, Dollar & M_Dollar_obj);
};

void operator<<(ostream &out, Dollar &M_Dollar_obj){
	out << "Your Money: " << M_Dollar_obj.getDollar() << "$" << endl;
	out << "Market Soums: " << M_Dollar_obj.getMarketSoums() << endl;
	out << "Official Soums: " << M_Dollar_obj.getOfficialSoums() << endl;
}

///////////////////////////////////////////////
int main(){
	Dollar Dollar_Obj;
	Dollar_Obj.setRates();
	cout << Dollar_Obj;
	system("pause");
	return 0;
}
*/