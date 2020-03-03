#include <iostream>
#include <string>

using namespace std;

//prototype functions
string GetUserName();
void NewEmployeeWelcome(string userName);
string Scenario 1;
string Scenario 2;


int main()
{
	//Show title of game sim
	cout << "\n\n\t\t *** Welcome to the Advanced Technology Lab Sim!***\n\n";
	// Creating a string variable to hold the user name:
	string userName;
	// Call function to get user name
	userName = GetUserName();
	// Display into to user
	NewEmployeeWelcome(userName);
	//This return will end the game
	return 0;
}

string GetUserName()
{
	// Creating a string variable to hold the user name:
	string userName;
	//telling the user to enter their name.
	cout << "\nWhat is your name?"
	//getting the name from user
	getline(cin, userName);
	//return name
	return userName;
}

void NewEmployeeWelcome(string userName)
{
	cout << "\nWelcome to Advanced Technology Lab LB-00\n";
	cout << "\nYou arrive at the classified location of LB-00, ready for your first day of work.\n ";
	cout << "\nYou hear a voice over the intercom that says 'Welcome, new empoyee! Please make your way to room 01 and pick up the items that you will require for your first day.'\n ";
}