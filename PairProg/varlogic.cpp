


#include <iostream>; //this 
#include <string>;  // allows us to use the string varriable type
#include <cstdlib>;
#include <ctime>;
using namespace std; //adds a lot of bloat but lets us save time

//this is where the program starts 
int main() {
	//allways seed your random number generator ONCE, at the begining of your program.
	srand(time(0));



	bool debug = false; // turn to false before shipping

	if (debug) cout << "DEBUG MODE IS ON\n";
	// an if statement is a test.
	// if test is true it will run.
	//if test is false it will not run.
	// if(test) {code block}
	if (true) {
		cout << "this line of code will always run \n";
	} // end of if (true)
	if (false) {
		cout << "this line of code will never run \n";
	} // end of if (false)
	if (1 + 1 == 2) {
		cout << "thank goodness! \n";
	}
	if (2 + 2 == 6) {
		cout << "math seems to have failed \n";
	}

	// variables stuff
	//int, float, doubles, characters, strings, and booleans.
	// an interger is a whole number, positive or negative, between -2bil and 2bil.
	//when creating a variable,specifytype, name, and optionaly, value.
	// we are creating a new int variable with the name playerScore
	

	// declaring (and defining) the variable, type int, name = playerTwoScore;
	int playerTwoScore = 0;
	// contant variables cannot change their value
	const float EARTH_GRAVITY = -9.81f;



	cout << "Player 2 score = " << playerTwoScore << ".\n";
	cout << "Earths gravity is " << EARTH_GRAVITY << " meters/second.\n";

	//  a float is a floating point number accurate to 7 digits.
	// that means 9,999,999 or 0.000001

	// a double is a double precision floating point number accurate to 22 digits.
	// 9,999,999,999,999,999,999,999
	const double PI = 3.1415926535897932385;

	// a character is a single unicode. one key on your keyboard.
	char answer = 'n';

	cout << "would you like to keep playing?\n";
	cin >> answer;

	if (answer == 'y') {
		cout << "Yay! lets go again!\n";
	}
	else {
		cout << "Aww. thanks for playing.\n";
		return 0;
	}

	//  strings are an array of characters in an ordered list one after the other.
	string profName = "Dumbledore";
	string user = "Conner";
	string password = "Videogames";
	string input = "";

	cout << "what is your username?\n";
	cin >> input;
	if (input == user) {
		cout << "what is your password?\n";
		cin >> input;
		if (input == password) {
			cout << "hello conner! Professor " << profName << " has a question for you.\n";
		}
		else {
			cout << "Wrong Password. Nice try jake!\n";
		}
	}
	else {
		cout << "username not recognised\n";
	}

	// booleans are a variable type of true or false/on or off.
	bool playerIsAlive = true;
	int playerScore = 0;
	while (playerIsAlive) {
		playerScore += 5;
		string input;
		cout << "are you dead yet?\n";
		cin >> input;

		if (input == "yes") {
			playerIsAlive = false; // this breaks the loop
			cout << "Yippee! you suck!\n" << "your score is " << playerScore << ".\n"; // prints a celebration of your death
		}
	}
	
	cout << "here is a randomm number: " << rand() << ".\n";

	cout << "here are 10 random numbers: \n";
	int count = 0;
	while (count < 10) {
		count += 1;
		cout << (rand() % 10) + 1 << "\n";

	}
} // this is the end of main
