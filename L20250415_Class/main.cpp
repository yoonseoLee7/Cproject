#include <iostream>
#include "World.h"
#include "Monster.h"
#include "Goblin.h"
#include "Player.h"

using namespace std;

int main()
{

	//AGoblin Goblin;
	//Goblin.SlideAttack();

	APlayer Player;
	Player.MonsterAttack(10);
	
	AMonster* Monster = new AMonster();

	Monster->HP = 1;

	delete Monster;
	Monster = nullptr;

	Player.PlayerHPMP(150, 20,Player.GetName());

	return 0;
}