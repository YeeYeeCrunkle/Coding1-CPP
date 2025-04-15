#include <iostream>; //this 
#include <string>;  // allows us to use the string varriable type
#include <cstdlib>;
#include <ctime>;
using namespace std;

bool debug = false;


class human
{
protected:
	
	string name;
	int health = 10;
	int damage = 4;


public:
	
	human(string givenName, int givenHealth = 10, int baseDamage = 4)
	{
		SetName(givenName);
		SetHealth(givenHealth);
		SetDamage(baseDamage);

			//SayHello();

	};

	human()
	{
		//SayHello();
	}


	void SayHello();

	
	void SetHealth(int byAmount)
	{
		if (debug)
		{
			cout << "at top of SetHealth(byAmount), health = " << health << ", byAmount " << byAmount << ".\n";
		}

		health += byAmount;

		if (health < 0)
		{
			health = 0;
		}
		else if (health > 100)
		{
			health = 100;
		}
	
	}

	int GetHealth()
	{
		return health;
	}

	void SetDamage(int givenDamage = 4)
	{
		damage = givenDamage;
	}

	int GetDamage()
	{
		return damage;
	}

	void SetName(string givenName)
	{
			name = givenName;
	}
	string GetName()
	{
		return name;
	}
};


void human::SayHello()
{
	cout << "Hi! My name is " << name << ", and my health is " << health << " and my damage is " << damage << ".\n";
}

class barbarian : public human
{
	//this shoulld inherit all that a human has
	//add a constructor
	//add a yell() function
	//add a doubleSwing() function

	public:
	//a constuctor needs to have the same name as the class, and no return type

		barbarian(string givenName, int givenHealth = 10, int baseDamage = 4)
		{
			SetName(givenName);
			SetHealth(givenHealth);
			SetDamage(baseDamage);
		};

		void Yell()
		{
			cout << "The barbarian unleashes a soul shaking roar, boosting allies attack.\n";
		}

		void doubleSwing(human& target)
		{
			cout << "This barbarian swings both weapons at " << target.GetName() << "!\n";

			int tempDamage = this->GetDamage() * 2;
			target.SetHealth(-tempDamage);
		}
};

//create a shhopkeep class that inherits  from human
//add a dropGold() function
//add a shopName variable

class shopKeep : public human
{
private:
	int gold;
	string shopName;
public:
	shopKeep()
	{
		gold = 15;
	}

	void SetHealth(int byAmount)
	{
		health += byAmount;

		if (health <= 0)
		{
			cout << "The owner of " << shopName << " has Died!\n";
			cout << "They dropped " << gold << " gold!\n";

		}
	}

	
	shopKeep(string givenName,string givenShopName, int givenHealth = 10, int baseDamage = 4)
	{
		SetName(givenName);
		SetHealth(givenHealth);
		SetDamage(baseDamage);
		SetShopName(givenShopName);
	};

	void SetShopName(string givenShopName)
	{
		shopName = givenShopName;
	}

	string GetShopName() { return shopName; }





};

int main()
{
	barbarian bane("Bane", 25, 5);
	bane.SayHello();

	human corn("Conner", 50, 3); //i dont think health worked? 
	corn.SayHello();

	corn.SetHealth(15);
	cout << "Setting health \n";
	corn.SetDamage(2);
	cout << "Setting damage \n";

	cout << "Updated health: " << corn.GetHealth() << endl;
	cout << "Updated damage: " << corn.GetDamage() << endl;

	cout << "\n\nlets have the barbarian attack Conner!\n";

	bane.doubleSwing(corn);

	corn.SayHello();

	shopKeep papajohn("PapaJohn", "Papa  John's Pizza Tavern", 10, 1);

	

	bane.doubleSwing(papajohn);

	papajohn.SayHello();

	return 0;
}
