//Conner Corn Codeing1a

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	srand(time(0));

	string input = "";
	bool debug = true;

	cout << "which type of pizza do you like more, cheese, or pepperoni?\n";

	getline(cin, input);

	if (input == "cheese") {
		cout << "you abomination, you shall be purged for your heresy.\n";
	}
	else if (input == "pepperoni") {
		cout << "YAY, another believer for the cause!\n"; 
	}
	else {
		cout << "that isnt an option, try again\n";
	}

	int number = (rand() % 10) + 1;

	while (true) {

		

		cout << "I've chosen a number 1-10 please try and guess it\n";

		if (debug) {
			cout << "--debug-- the number is " << number << ".\n";
		}

		getline(cin, input);

		int guess = 0;	

		if (input == "quit") break;

		try {guess = stoi(input);}
		catch (invalid_argument) {
			cout << "that's not  a number try again\n";
			continue;
		}


		if (stoi(input) > number) {
			cout << "Lower.\n";
		}
		else if (stoi(input) < number) {
			cout << "Higher.\n";
		}
		else {
			cout << "Good job youve guessed the number!\n";

			break;

		}

	}

	cout << "OK Bye Bye!\n";
















}