#include <iostream>
#include "PetInfo.h"

using namespace std;

int main()
{
	PetInfo* MyPet = new PetInfo();


	MyPet->Info(7, "춘득이");
	MyPet->W_Type(17);

	delete MyPet;
	MyPet = nullptr;


	return 0;
}