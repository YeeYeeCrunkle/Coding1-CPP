/*
0. great player and ask for input
1. Add
ask the player what they want to add
get input
add input to array and add one to gameCount
repeat name of added string
2. Edit
ask the player which name they want to edit
get input < -
	check array for input for gameCount using for loop
	if name doesnt match any in array ask again for what they want to edit or if they changed their mind
		->
		if name has a match ask the player to type the new name and replace old name
			repeat new name
			3. Remove
			ask the player which name they want to remove
			get input < -
			check array for input for gameCount
			if name doesnt match any in array ask again for what they want to remove or if they changed their mind
				->
				if match found anounce what is getting removed then remove the game
					4. Show
					print the array of all names so they player can see
					5. Quit
					return(0) if the player types 'Quit' */

#include <iostream>;
#include <string>;

	using namespace std;

	int main() {

		string gamesList[20];
		int gameCount = 0;
		string  input;

		cout << "we're making a list of your favorite games!\nType 'Add' to add to the list\nType 'Edit' to edit an item in the list\nType 'Remove' to delete an item from the list\nType 'Show' to display everything in your list so fara\n";

		cout << "or type 'Quit' to quit.\n";

		do {

			cout << "\n\tPlease type a command.\n";

			getline(cin, input);

			if (input == "Add")
			{

				cout << "What do you want to Add?\n";

				getline(cin, input);

				cout << "Ok! added " << input << " to the list!\n";

				gamesList[gameCount++] = input;


			}

			else if (input == "Edit")
			{

				cout << "What do you want to edit?\n";

				getline(cin, input);

				for (int i = 0; i < gameCount; i++) {

					if (gamesList[i] == input) {

						cout << "what would you like to change it to?\n";

						getline(cin, input);

						gamesList[i] = input;

						cout << "OK! it has been changed too " << input << ".\n";

						break;

					}
					if (i + 1 == gameCount) {

						cout << "Sorry couldent find your game, recheck spelling or input\n";

					}


				}

			}

			else if (input == "Remove")
			{

				cout << "What do you want to remove?\n";

				getline(cin, input);

				for (int i = 0; i < gameCount; i++) {

					if (gamesList[i] == input) {

						gamesList[i] = "";

						cout << "OK! it has been removed!\n";

						break;

					}
					if (i + 1 == gameCount) {

						cout << "Sorry couldent find your game, recheck spelling or input\n";

					}


				}

			}

			else if (input == "Show")
			{
				for (int i = 0; i < gameCount; i++) {
					if (gamesList[i] == "") {
						continue;
					}
					else{
						
						cout << gamesList[i] << ".\n";
					}
					
				}
			}

			else if (input == "Quit") 
			{
				cout << "thanks for adding your favorite games!\n";

				break;
			}

			else if (gameCount >= 19)
			{
				cout << "youve reached max favorite games.\n";

				break;
			}






			/*for (int i = 0; i < gameCount; i++) {
				if (gamesList[1] == "") {
					continue;
				}
				else {
					cout << i + 1 << ".\t";
					cout << gamesList[i] << ".\n";
				}
			} */







		} while (true);
	}