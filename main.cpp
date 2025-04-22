#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include "SweetFish.h"
#include "Herb.h"
#include "Milk.h"
#include "Branch.h"
#include "GalricMilk.h"
class Numbers
{
public:
	int GetNumber() const;
	void SetNumber(const int& InNumber);

	void ChangeNumber(int& InOutNumber);

private:
	int Number = 10;

};


int main()
{
	const float PI = 3.14f;

	Numbers N;
	int NewNumber = 20;

	N.SetNumber(NewNumber);

	int Gold = N.GetNumber();



	return 0;
}




int Numbers::GetNumber() const
{
	int i = 10;
	i = 20;

	return Number;
}


void Numbers::ChangeNumber(int& InOutNumber)
{
	Number = InOutNumber;
	InOutNumber = 20;
}

void Numbers::SetNumber(const int& InNumber)
{
	Number = InNumber;
}