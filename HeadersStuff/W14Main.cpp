#include "FileMGMT.h"
using namespace std;


/*
homework:
1. make a function in FileMGMT.cpp to read a file into an array.
	a. eaach new line becomes a new element in the array
2. finish the item class
3. in main, create an array of 5 items and display them with a loop
	a.  use itemArray[i].examine() to show all of the details of the item
4. Upload the folder of files to github
	a. submit a link to the

*/




int main()
{

	
	

	string favsList[100];
	int favsCount = 0;
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

			favsList[favsCount++] = input;


		}

		else if (input == "Edit")
		{

			cout << "What do you want to edit?\n";

			getline(cin, input);

			for (int i = 0; i < favsCount; i++) {

				if (favsList[i] == input) {

					cout << "what would you like to change it to?\n";

					getline(cin, input);

					favsList[i] = input;

					cout << "OK! it has been changed too " << input << ".\n";

					break;

				}
				if (i + 1 == favsCount) {

					cout << "Sorry couldent find your game, recheck spelling or input\n";

				}


			}

		}

		else if (input == "Remove")
		{

			cout << "What do you want to remove?\n";

			getline(cin, input);

			for (int i = 0; i < favsCount; i++) {

				if (favsList[i] == input) {

					favsList[i] = "";

					cout << "OK! it has been removed!\n";

					break;

				}
				if (i + 1 == favsCount) {

					cout << "Sorry couldent find your game, recheck spelling or input\n";

				}


			}

		}

		else if (input == "Show")
		{
			for (int i = 0; i < favsCount; i++) {
				if (favsList[i] == "") {
					continue;
				}
				else {

					cout << favsList[i] << ".\n";
				}

			}
		}

		else if (input == "Quit")
		{
			cout << "thanks for adding your favorite games!\n";

			break;
		}

		else if (favsCount >= 99)
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

	WriteArrayToFile(favsList, favsCount);

	ReadFromArray();
}
