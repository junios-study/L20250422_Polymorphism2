#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include "SweetFish.h"
#include "Herb.h"
#include "Milk.h"
#include "Branch.h"
#include "GalricMilk.h"

int main()
{
	AInventory Inventory;

	Inventory.AddItem(new ASweetFish());
	Inventory.AddItem(new AMilk());
	Inventory.AddItem(new ABranch());
	Inventory.AddItem(new AHerb());

	AGalricMilk Milk;

	Milk.Use();

	return 0;
}