#pragma once
#include <iostream>
using namespace std;

class item
{
private:
	enum location location; //where item is stored

public:

	item(string name, enum location)
	{
	
		item();
		use();
		examine();

		//SayHello();

	};

	item();

	void use()
	{

	}

	void examine()
	{

	}
	
};

