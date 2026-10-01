/*
Student Information:
Name:    Alimov Abdullokh
ID:      U1910060
Section: 004
*/

/*
// Program 1
// Hierarchical Inheretence
#include <iostream> 
#include <string> //text
#include <conio.h> //getch
using namespace std;

////////////////////////////////////////////
class Publication   //Base class
{
private:
	//identifires
	string title; float price;
public:
	// Set Function for title and Price
	void setdata(){
		cout << "Enter the values for title" << endl;
		cin >> title;
		cout << "Enter the value for price" << endl;
		cin >> price;
	}
	// Get Function for title and Price
	 void getdata(){
		 cout << "Title is: " << title << endl;
		 cout << "Price are: " << price << endl;
	}
};
//////////////////////////////////////////////
class Book:public Publication // 1st Sub class
{
private:
	//identifires
	int page_count;
public:
	// Set function for Book class
	void setdata(){
		Publication::setdata(); //set data (title, price) from Base class
		cout << "Enter the number of pages" << endl;
		cin >> page_count;
	}
	// Get function for Book class
	void getdata(){
		Publication::getdata(); //get data (title, price) from Base class
		cout << "Pages: " << page_count << endl;
	}
};
//////////////////////////////////////////////
class Tape :public Publication // 2nd Sub class
{
private:
	//identifires
	float playing_time;
public:
	// Set function for Tape class
	void setdata(){
		Publication::setdata(); //set data (title, price) from Base class
		cout << "Enter the playing time" << endl;
		cin >> playing_time;
	}
	// Get function for Tape class
	void getdata(){
		Publication::getdata(); //get data (title, price) from Base class
		cout << "Playing time: " << playing_time << endl;
	}
};
////////////////////////////////////////////
int main(){
	//Objects 
	Book Book_Obj;
	Tape Tape_Obj;
	//Start Program
	for (int i = 0; i < 100; i++){ // loop for Menu
		system("cls"); 
		cout << "\n\t Menu" << endl;
		cout << "   1.Book Details" << endl;
		cout << "   2.Tape Details" << endl;
		cout << "   3.Exit" << endl;
		cout << "    Your choice:";
		switch (_getch())
		{
		case 49:{ // Book Details
					cout << "\n\n\t   Book Details" << endl;
					Book_Obj.setdata();
					cout << endl;
					Book_Obj.getdata();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 50:{ // Tape Details
					cout << "\n\n\t   Tape Details" << endl;
					Tape_Obj.setdata();
					cout << endl;
					Tape_Obj.getdata();
					cout << "\n Press any keyboard to continue program " << endl << endl;
					system("pause");
		}
			break;
		case 51:{
					system("cls");
					return 0;
		}
		default: {
					 cout << "\n\n Your choice is not available in Menu " << endl;
					 cout << " Press any keyboard to continue program " << endl<<endl;
					 system("pause");
		}
			break;
		} // end of switch
	} // end of loop

	system("pause");
	return 0;
}
*/

// Program 2
// Hierarchical Inheretence
#include <iostream> 
#include <string> //text
#include <conio.h> //getch
#include <cmath> // power
using namespace std;

////////////////////////////////////////////
class Account   //Base class
{
private:
	//identifires
	string customer_name, account_number; char type_of_account[100];
public:
	// Set Function for customer name, account number and type of account
	void setdata(){
		cout << "    Set Details " << endl;
		cout << " Enter the Customer Name: "; cin >> customer_name;
		cout << " Enter the Account Number: "; cin >> account_number;
		cout << " Enter the Type of Account: "; cin >> type_of_account;
	}
	//  Function for customer name, account number and type of account
	void Display(){
		cout << " Customer Name  : " << customer_name << endl;
		cout << " Account Number : " << account_number << endl;
		cout << " Type of Account: " << type_of_account << endl;
	}
};
//////////////////////////////////////////////
class CURR_ACCT :public Account // 1st Sub class
{
private:
	//identifires
	float amount, penalty = 2; float balance ;
public:
	// Set function for Curr_Acct class
	void setdata(){
		Account::setdata(); //set data (name, number, type acct) from Base class
		cout << " Enter the firts balance: "; cin >> balance;
	}
	// Display function for Sav_Acct class
	void Balance(){
		Account::Display(); //Display data (title, price) from Base class
		cout << " Balance: " << balance << " $" << endl;
	}
	// Get_Balance
	int get_balance(){
		return balance;
	}
	// Deposit 
	void Deposit(){
		cout << " Enter the amount of money which you want to add for balance " << endl;
		cin >> amount;
		balance += amount;
		cout << "Succesfully added" << endl;
		amount = 0;
	}
	// Withdraw -> get money from balance
	void Withdraw(){
		Display(); // Show balace
		cout << " Enter the amount of money which you want to get from balance " << endl;
		cin >> amount;
		if (amount <= balance){ // Can get only money which is less or equal to balance
			balance -= amount;
			cout << "Succesfully" << endl;
			amount = 0;
		}
		else cout << "You have not enough money in your balance" << endl;
	}
	// Penaltu for balance if less than 100$
	void Penalty(){
		if (balance < 100){
			balance -= penalty;
			cout << "Your balance have money less than minimum thats why you get penalty 2$" << endl;
		}
	}
};
//////////////////////////////////////////////
class SAV_ACCT :public Account // 2nd Sub class
{
private:
	//identifires
	float amount; float balance; float ROI = 4; // ROI is 4% per annum
	int year;
public:
	// Set function for Sav_Acct class
	void setdata(){
		Account::setdata(); //set data (name, number, type acct) from Base class
		cout << " Enter the firts balance: ";cin >> balance;
	}
	// Display function for Sav_Acct class
	void Balance(){
		Account::Display(); //Display data (title, price) from Base class
		cout << " Balance: " << balance << " $" << endl;
	}
	// Deposit 
	void Deposit(){
		cout << " Enter the amount of money which you want to add for balance " << endl;
		cin >> amount;
		balance += amount;
		cout << "Succesfully added" << endl;
		amount = 0;
	}
	// Compute_Interest
	void Compute_Interest(){
		Balance(); // Show balace
		cout << "Enter the year for compute Interest: "; cin >> year;
		amount = balance * pow((1 + (ROI / 100)), year);
		cout << "Your money will be : " << amount << endl;
		amount = 0;
	}
	// Withdraw -> get money from balance
	void Withdraw(){
		Display(); // Show balace
		cout << " Enter the amount of money which you want to get from balance " << endl;
		cin >> amount;
		if (amount <= balance){ // Can get only money which is less or equal to balance
			balance -= amount;
			cout << "Succesfully" << endl;
			amount = 0;
		}
		else cout << "You have not enough money in your balance" << endl;
	}
};
////////////////////////////////////////////
int main(){
	// identifier 
	int Calculator_Penalty=0;
	//Objects 
	CURR_ACCT Current_Account;
	SAV_ACCT  Save_Account;
	//Start Program
	for (int i = 0; i < 100; i++){ // loop for Menu
		system("cls");
		cout << "\n\t Menu" << endl;
		cout << "   1.Current Account" << endl;
		cout << "   2.Save Account" << endl;
		cout << "   3.Exit" << endl;
		cout << "    Your choice:";
		switch (_getch()){ // Main Menu

		case 49:{ // Current Account Menu
					system("cls");
					Current_Account.setdata(); //setdata
					for (int j = 0; j < 100; j++){
						system("cls");
						cout << "\n\t Current Account" << endl;
						cout << "   1.Balance" << endl;
						cout << "   2.Deposit" << endl;
						cout << "   3.WithDraw" << endl;
						cout << "   4.Back" << endl;
						cout << "    Your choice:" << endl;
						if (Calculator_Penalty == 0 && Current_Account.get_balance()<100){
							Calculator_Penalty = 1;
							Current_Account.Penalty(); //if balans less it will give penalty 2$
						}
						switch (_getch()){
						case 49:{ // Balance
									Current_Account.Balance();
									cout << "\nPress any keyboard to continue program" << endl;
									system("pause");
						}
							break;
						case 50:{ //Deposit
									Current_Account.Deposit();
									if (Current_Account.get_balance() >= 100){ Calculator_Penalty = 1; }
									if (Current_Account.get_balance() < 100){ Calculator_Penalty = 0; }
									cout << "\nPress any keyboard to continue program" << endl;
									system("pause");
						}
							break;
						case 51:{ //Withdraw
									Current_Account.Withdraw();
									if (Current_Account.get_balance() < 100){ Calculator_Penalty = 0; }
									cout << "\nPress any keyboard to continue program" << endl;
									system("pause");
						}
							break;
						case 52:{ //Exit
									j = 100;
						}
							break;
						default: {
									 cout << "\n\n Your choice is not available in Menu " << endl;
									 cout << " \nPress any keyboard to continue program " << endl << endl;
									 system("pause");
						}
							break;
						} // switch end 
					} // loop end
		}// Cuurent account Mune end
			break;

		case 50:{ // Save Account Menu
					system("cls");
					Save_Account.setdata(); //setdata
					for (int j = 0; j < 100; j++){
						system("cls");
						cout << "\n\t Save Account" << endl;
						cout << "   1.Balance" << endl;
						cout << "   2.Deposit" << endl;
						cout << "   3.WithDraw" << endl;
						cout << "   4.Interest" << endl;
						cout << "   5.Back" << endl;
						cout << "    Your choice:" << endl;
						switch (_getch()){
						case 49:{ // Balance
									Save_Account.Balance();
									cout << "\nPress any keyboard to continue program" << endl;
									system("pause");
						}
							break;
						case 50:{ //Deposit
									Save_Account.Deposit();
									cout << "\nPress any keyboard to continue program" << endl;
									system("pause");
						}
							break;
						case 51:{ //Withdraw
									Save_Account.Withdraw();
									cout << "\nPress any keyboard to continue program" << endl;
									system("pause");
						}
							break;
						case 52:{ //Interest
									Save_Account.Compute_Interest();
									cout << "\nPress any keyboard to continue program" << endl;
									system("pause");
						}
							break;
						case 53:{ //Exit
									j = 100;
						}
							break;
						default: {
									 cout << "\n\n Your choice is not available in Menu " << endl;
									 cout << " Press any keyboard to continue program " << endl << endl;
									 system("pause");
						}
							break;
						} // switch end 
					} // loop end
		}// Save account Mune end
			break;

		case 51:{
					system("cls");
					return 0;
		}
		default: {
					 cout << "\n\n Your choice is not available in Menu " << endl;
					 cout << " Press any keyboard to continue program " << endl << endl;
					 system("pause");
		}
			break;
		} // end of switch
	} // end of loop

	system("pause");
	return 0;
}
