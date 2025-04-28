#include "FileMGMT.h"





void WriteArrayToFile(string* arr, int size)
{
	ofstream file("favs.txt");

	if (!file.is_open())
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		file << arr[i] << "\n";

	}

	file.close();

}

void WriteToFile()
{
	ofstream file("file.txt");

	file << "Play ocarina of time!\n";
}

void ReadFromFile()
{
	string fileContents;

	ifstream file("file.txt");

	while (getline(file, fileContents))
	{
		cout << fileContents;
	}

	file.close();
}

void ReadFromArray()
{
	
	ifstream file("favs.txt");
	vector<string> lines;
	string line;

	if (file.is_open()) {
		while (getline(file, line)) {
			lines.push_back(line);
		}
		file.close();
	}
	

	cout << "File content:" << endl;
	for (const string& str : lines) {
		cout << str << endl;
	}

	return;
}