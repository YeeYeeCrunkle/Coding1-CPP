#include "item.h"

//in c++ the first enum = 0, then counts up.
enum location {GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY};

item::item()
{
	cout << "Creating a new item!\n";
	location = MARKET; // sets default location for items.
}
