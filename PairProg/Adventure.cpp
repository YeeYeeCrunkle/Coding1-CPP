#include <iostream>; //this 
#include <string>;  // allows us to use the string varriable type
#include <cstdlib>;
#include <ctime>;
using namespace std; 

// this code is available on my github:https://github.com/YeeYeeCrunkle/Coding1-CPP
// last unresloved issue from most recent editing sesion : displays damage taken or successful block at end of journey


int main() {
	srand(time(0)); //seeds random number generator

	int health = (rand() % 15) + 5; //sets health to a random number from 5-20
	int attack = 0;
	int block = 0;
	int turns = 0;
	string ready = "";
	bool gameLive = false;
	string name = "";

	cout << "what is your name?\n";
	cin >> name;// allows player to input name
	cout << "hello " << name << " welcome to your new adventure!\n";
	cout << "Your health for this adventure will be " << health << ".\n"; // lets player know their characters starting health
	cout << "type onwards to start your adventure.\n"; //tells player the start code
	cin >> ready; 
	if (ready == "onwards") gameLive = true; // checks to see if the player has entered the right code phrase

	

	while (gameLive) { //main game loop

		turns += 1; // tracks player turn
		attack = (rand() % 4); //the randomiser for attack
		block = (rand() % 4); // the randomiser for block

		if (block < attack) { // takes health away if unable to block
			health = health - attack;
			cout << "you've taken " << attack << " damage!\n";
		}
		if (block >= attack) {//checks if block is high enough to ignore damage
			cout << "you've blocked the attack!\n";

		}
		if (health < 1) { // checks if your dead
			gameLive = false;
			cout << "oh no, youre dead!\n";
			return(0);
		}
		if (turns == (rand() % 10) + 4) { // checks if youve reached the end of the journey
			gameLive = false;
			cout << "you've survived " << turns << " turns and reached the end of your journey! Congrats!\n";
			return(0);
		}
		else { // this tells you your health and how many turns have passed if you havent died and arent at the end of the journey
			cout << "you survived this turn with " << health << " HP remaining. and survived " << turns << " turns total\n" << "type END to stop type anything else to continue to next turn\n";
			cin >> ready;
			if (ready == "END") { // allows the player to quit at the end of every turn if they want
				cout << "Thanks for playing!\n";
				return(0);

			}
		}
	}

	

}




