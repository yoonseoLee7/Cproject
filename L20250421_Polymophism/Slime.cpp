#include "Slime.h"
#include <iostream>

using namespace std;
ASlime::ASlime()
{
	//cout << "Slime 생성" << endl;
}

ASlime::~ASlime()
{
	//cout << "Slime 삭제" << endl;
}

void ASlime::Tick()
{
	Move();
}

void ASlime::Move()
{
	cout << "미끌" << endl;
}
