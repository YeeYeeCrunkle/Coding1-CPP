#include <iostream>; //this 
#include <string>;  // allows us to use the string varriable type
#include <cstdlib>;
#include <ctime>;
using namespace std; 

// this code is available on my github:https://github.com/YeeYeeCrunkle/Coding1-CPP
// last unresloved issue from most recent editing sesion : displays damage taken or successful block at end of journey
int health = 25;
int treasure = 0;

void story() {
	cout << "you are out of money and out of options!\n\n" << "Your total health is " << health <<".\n\n";
}

int rollDie() {
	int diceRoll = (rand() % 6);
	return diceRoll;//the random dice roll
}

void ending() {
	cout << "you have successfully escaped with your treasure and your life!\n" << "\tTotal treasure collected: " << treasure << ".\n";
	if (health < 5) cout << "You may want to seek some medical help...\n";
}

void death() {
	cout << "you've fallen in combat losing both your life and the treasure you carried.\n" << "\tTotal treasure lost: " << treasure << ".\n";	
	treasure = 0;
}

bool askYesNo(string question = "Would you like to continue your Adventure?\n") {
	do {
		cout << question << "Yes / No" << endl;
		string input;
		getline(cin, input);

		if (input == "Yes") {
			return true;
		}
		else if (input == "No") {
			return false;
		}
		else {
			cout << "please type 'Yes' or 'No'\n";
		}



	} while (true);
}

void adventure() {
	while (true) { //main game loop

		turns += 1; // tracks player turn
		int attack = rollDie(); //the randomiser for attack
		int block = rollDie(); // the randomiser for block
		cout << "\nthe enemies attack is " << attack << " and your block is " << block << ".\n";

	
		if (block >= attack) {//checks if block is high enough to ignore damage
			cout << "you've blocked the attack and got the treasure!\n";
			treasure += rollDie() * 3;
			cout << "Your current treasure count is " << treasure << " Pieces of treasure\n\n";

		}
		else if (attack > block) { // takes health away if unable to block
			health -= attack;
			cout << "you've taken " << attack << " damage!\n" << "You have " << health << " health points remaining.\n\n";
		}

		if (health < 1) { // checks if your dead
			death();
			break;
		}
		else if (askYesNo() == false) { // checks if youve reached the end of the journey
			ending();
			break;
		
		}
		
	
		
	}
}






int main() {
	srand(time(0)); //seeds random number generator

	story();

	askYesNo("Would you like to go on an Adventure?\n");

	adventure();
	
}




