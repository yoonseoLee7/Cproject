#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Wall.h"
#include "Floor.h"
#include "World.h"
#include "Goal.h"

using namespace std;

int main()
{

	Player* PlayerA = new Player();
	AMonster* Monstar = new AMonster();



	delete PlayerA;
	PlayerA = nullptr;

	delete Monstar;
	Monstar = nullptr;

	return 0;
}