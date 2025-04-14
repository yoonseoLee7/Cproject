#include "PetInfo.h"

void PetInfo::Info(int A, string N)
{
	Age = A;
	Name = N;

	cout << "Age: " << Age << ", Name: " << Name << endl;

}

void PetInfo::W_Type(int W)
{
	Weight = W;

	if (Weight <= 7)
	{
		Type = "소형견";

	}
	else if (Weight <= 17)
	{
		Type = "중형견";
	}
	else
	{
		Type = "대형견";
	}
	cout << Weight << "kg로 " << Type << "입니다." << endl;
}
