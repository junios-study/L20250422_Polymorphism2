#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include "SweetFish.h"
#include "Herb.h"
#include "Milk.h"
#include "Branch.h"
#include "GalricMilk.h"

//내가 만들지만 다른 사람이 사용한다.
class Numbers
{
public:
	int GetNumber() const;
//	const int GetNumber2();
	void SetNumber(const int& InNumber);

	void ChangeNumber(int& InOutNumber);

private:
	int Number = 10;

};



//c++ style
void Swap(int& A, int& B)
{
	int Temp = A;
	A = B;
	B = Temp;
}


int main()
{
	const float PI = 3.14f;

	Numbers N;
	int NewNumber = 20;

	N.SetNumber(NewNumber);

	int A = 20;
	int B = 30;
	Swap(A, B);

	std::cout << A << std::endl;
	std::cout << B << std::endl;




	return 0;
}




int Numbers::GetNumber() const
{
	int i = 10;
	i = 20;

	return Number;
}

//const int Numbers::GetNumber2()
//{
//	return Number;
//}


void Numbers::ChangeNumber(int& InOutNumber)
{
	Number = InOutNumber;
	InOutNumber = 20;
}

void Numbers::SetNumber(const int& InNumber)
{
	Number = InNumber;
}