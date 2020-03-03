#include <iostream>
#include <string>

using namespace std;

//prototype functions
int AddsTwoNumber(int firstNumber, int secondNumber);


int main()
{
	//Show title of game sim
	cout << "\n\n\t\t *** Welcome to the Advanced Technology Lab Sim!***\n\n";
	//we need a variable to catch the sum which is the
	//return value
	int catchTheSum = 0;
	catchTheSum = AddsTwoNumber(5, 7);
	//Display the answer the function gave us to the screen
	cout << "\nMy calculations say the sum is " << catchTheSum << endl;


	return 0;
}

int AddsTwoNumber(int firstNumber, int secondNumber)
{
	//Print what the function is doing
	cout << "\nI am calculating the two numbers!\n";
	//Create variable to hold the sum
	int sum;
	//add two numbers and place it into the sum
	sum = firstNumber + secondNumber;
	//returns the sum from the function
	return sum;
}