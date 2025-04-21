#include "Goble.h"
#include <iostream>

using namespace std;
AGoble::AGoble()
{
	//cout << "고블린 생성" << endl;
}

AGoble::~AGoble()
{
	//cout << "고블린 삭제" << endl;
}

void AGoble::Tick()
{
	Move();
}

void AGoble::Move()
{
	cout << "RunRun!!!" << endl;
}
