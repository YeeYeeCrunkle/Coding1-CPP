// Conner Corn  Coding 1 2/25/25
// loops and lists
#include <iostream>; //this 
#include <string>;  // allows us to use the string varriable type

using namespace std;
/*
int main() {
	// we are going to build an array
	//an array is an ordered list of a single type of variable

	//create an array of integers with a [size of 10]

	const int MAX_SIZE = 10;    // this 

	int element = 0;     // keeps track of position in the array

	int scores[MAX_SIZE];  // this array has made 10 spots for integers

	scores[0] = 9001;
	


	cout << "the highest score is " << scores[0] << ".\n";

	element = 1;
	scores[element++] = 5053;
	scores[element++] = 4082;
	scores[element++] = 3709;
	scores[element++] = 2500;
	scores[element++] = 2000;
	scores[element++] = 1890;
	scores[element++] = 1760;
	scores[element++] = 1478;
	scores[element++] = 810;

	cout << "the next highest is " << scores[1] << ".\n";

	
	int counter = 0;

	while (counter < element) {

		cout << "the scores are " << scores[counter] << ".\n";
		counter += 1;

	}

	string bestFriends[20];
	int friendCount = 0;
	string  input;
	do {

		cout << "where making a list of best friends who would you like to add?\n";
		cout << "or type 'quit' to quit.\n";
		getline(cin, input);

		if (input == "quit") {
			cout << "thanks for adding your friends!\n";
			break;
		}
		if (friendCount >= 19) {
			cout << "youve reached max best friends.\n";
			break;
		}

		bestFriends[friendCount++] = input;


		

	} while (true);


	for (int i = 0; i < friendCount; i++) {
		cout << i + 1 << ".\t";
		cout << bestFriends[i] << ".\n";
	}







	/*
		Pseudocode for fave games
		string gamesList[10];
		int gameCount = 0;
		string input;



		0. great player and ask for input
		1. Add
			ask the player what they want to add
			get input
			add input to array and add one to gameCount
			repeat name of added string
		2. Edit
			ask the player which name they want to edit
			get input <-
			check array for input for gameCount using for loop
			if name doesnt match any in array ask again for what they want to edit or if they changed their mind
			->
			if name has a match ask the player to type the new name and replace old name
			repeat new name
		3. Remove
			ask the player which name they want to remove
			get input <-
			check array for input for gameCount
			if name doesnt match any in array ask again for what they want to remove or if they changed their mind
			->
			if match found anounce what is getting removed then remove the game
		4. Show
			print the array of all names so they player can see
		5. Quit
			return(0) if the player types 'Quit'
	
	
	
	
	*/







