#include <iostream>;
#include <string>;
using namespace std;
/*int currentShirtSizeElement = 0;



//declairing and defining a new function
//the function must be declared before it is used
//the function CAN be defined later in the code
//this function returns notion
//
void sayHello() {
	cout << "Hello!\n";
}

void sayGoodbye(){
	cout << "bye bye!\n";
}
void show(string* array) {
	cout << "Here are the contents of your array:\n";
	for (int i = 0; i < currentShirtSizeElement; i++) {
		if (array[i] == "") {
			continue;
		}
		else if (array[i] == "quit") {
			continue;
		}
		else {

			cout << array[i] << ".\n";
		}

	}
	sayGoodbye();
}

void add(int number1 = 2, int number2 = 0) {
	cout << "the sum of number1 and number2 is " << number1 + number2 << endl;
}
void add(float firstNum, float secondNum) {
	cout << firstNum << " plus " << secondNum << " equals " << firstNum + secondNum << endl;
}
void add(string firstWord, string secondWord) {
	cout << firstWord << " plus " << secondWord << " equals " << firstWord + secondWord << endl;
}
void add(string* array) {
	string input;
	cout << "Please add a shirt size to the array.\n";
	getline(cin, input);

	while (true) {
		cout << "Please add a shirt size to the array.\n";;

		getline(cin, input);

		array[currentShirtSizeElement++] = input;

		if (currentShirtSizeElement >= 10) {
		
			cout << "You have too many sizes!\n";
			show(array);
			break;
		}
		else if (input == "quit") {
			
		
			show(array);
			break;
		}



	}
}



bool askYN(string question = "Y or N?\n") {
	do {
		cout << question << "Y/N" << endl;
		string input;
		getline(cin, input);

		if (input == "Y") {
			return true;
		}
		else if (input == "N") {
			return false;
		}
		else {
			cout << "please type 'Y' or 'N'\n";
		}



	} while (true);
}



string professor = "brian"; // try your best to not use it

	int main() {


		string shirtSizes[10];
		int currentSize = 0;


		string player = "conner"; //local variable

		sayHello();
		add(43);
		add(23, 444);
		add(2.5f, 0.7f);
		add("poop", "pee");
		add(shirtSizes);
		show(shirtSizes);


		
		if (askYN()) {
			cout << "lets get pizza then!\n";
		}
		else {
			cout << "Please explode\n";
		}

		string namesList[3];
		int gameCount = 0;
		string  input;

		/*while (true) {
			cout << "Please type things.\n";

			getline(cin, input);

			namesList[gameCount++] = input;

			if (gameCount == 3) {
				for (int i = 0; i < gameCount; i++) {
					if (namesList[i] == "") {
						continue;
					}
					else {

						cout << namesList[i] << ".\n";
					}

				}
				sayGoodbye();
				break;
			}
			

		}*/





























//} 