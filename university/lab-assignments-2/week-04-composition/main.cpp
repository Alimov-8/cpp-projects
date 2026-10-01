#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

//////////////////////////////////////////////////////////////
class FullName{

private:
	//Identifires
	string FirstName, MiddleName, LastName;

public:
	// Constructor
	FullName(){
		FirstName = "";
		MiddleName = "";
		LastName = "";
	}
	// First Name
	void setFirstName(string M_FirstName){
		FirstName = M_FirstName;
	}
	string getFirstName(){
		return FirstName;
	}
    // Middle Name
	void setMiddleName(string M_MiddleName){
		MiddleName = M_MiddleName;
	}
	string getMiddleName(){
		return MiddleName;
	}
	//Last Name
	void setLastName(string M_LastName){
		LastName = M_LastName;
	}
	string getLastName(){
		return LastName;
	}
	// Destructor
	~FullName(){
		cout << "Destructor is Working for FullName Class " << endl;
	}
};

//////////////////////////////////////////////////////////////
class Player{

private:
	//Identifires
	string Player_ID, Player_Name; 
	int Matches_Played;
	

public:
	//Identifers
	static int Goals_Scored;
	string M_FirstName, M_MiddleName, M_LastName;
	int M_Matches_Played, M_Goals_Scored;
	// Constructor
	Player(){
		Player_ID = "";
		Player_Name = "";
		Matches_Played = 0;
	}
	// Player_ID
	void setPlayer_ID(string M_Player_ID){
		Player_ID = M_Player_ID;
	}
	string getPlayer_ID(){
		return Player_ID;
	}
	// Matches_Played
	void setMatches_Played(int M_Matches_Played){
		Matches_Played = M_Matches_Played;
	}
	int getMatches_Played(){
		return Matches_Played;
	}
	
	// Goals_Scored
	// Number of Goals auotomatically 0 
	
	
	// Making Composition Object 
	FullName Footballer_1;
	
	// Player_Name
	void setPlayer_Name(){
		cout << "Enter First Name of Footballer:"; cin >> M_FirstName;
		cout << "Enter Middle Name of Footballer:"; cin >> M_MiddleName;
		cout << "Enter Last Name of Footballer:"; cin >> M_LastName;
		Footballer_1.setFirstName(M_FirstName);
		Footballer_1.setMiddleName(M_MiddleName);
		Footballer_1.setLastName(M_LastName);
	}

	void getPlayer_Name(){
		cout <<"First Name"<< Footballer_1.getFirstName() << endl;
		cout << "Middle Name:" << Footballer_1.getMiddleName() << endl;
		cout << "Last Name" << Footballer_1.getLastName() << endl;
	}

	//Friend Function
	friend void Increase_GoalsScored(Player);
	
	// Destructor
	~Player(){
		cout << "Destructor is Working for Player Class " << endl;
	}
};


//Static Declaretion 
int Player::Goals_Scored;

//Friend Function

void Increase_GoalsScored(Player M_Footballer_1){
	M_Footballer_1.Goals_Scored++;
}

//////////////////////////////////////////////////////////////
int main(){
	string M_Player_ID; int M_Matches_Played;
	FullName *P_FullName = new FullName;
	Player *P_Player = new Player;
	Player M_Footballer_1;
	P_Player = &M_Footballer_1;

	for (int i = 0; i < 100; i++){
		system("cls");
		cout << "  _Main_Menu_  " << endl;
		cout << " 1.Add Player Details" << endl;
		cout << " 2.Display Player Details" << endl;
		cout << " 3.Increase Player Goal scored" << endl;
		cout << " 4.Delete Player from memory" << endl;
		cout << " 5.Exit" << endl;

		cout << "Your Choice: " << endl;
		switch (_getch()){
		case 49:{
					system("cls");
					cout << "Enter Details" << endl;
					P_Player->setPlayer_Name();
					cout << "Enter ID:"; cin >> M_Player_ID;
					P_Player->setPlayer_ID(M_Player_ID);
					cout << "Enter Matches_Played:"; cin >> M_Matches_Played;
					P_Player->setMatches_Played(M_Matches_Played);
					
					system("pause");
		}
			break;
		case 50:{
					system("cls");
					cout << "Details" << endl;
					P_Player->getPlayer_Name();
					cout << "ID:" << P_Player->getPlayer_ID() << endl;
					cout << "Matches:" << P_Player->getMatches_Played() << endl;
					cout << "NUmber of Goals:" << P_Player->Goals_Scored << endl;
					system("pause");
		
		}
			break;
		case 51:{
					system("cls");
					Increase_GoalsScored(M_Footballer_1);
					system("pause");
		}
			break;
		case 52:{
					system("cls");
					delete P_Player;
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







