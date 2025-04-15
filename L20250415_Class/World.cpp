#include "World.h"
#include <iostream>
#include "Goblin.h"
#include "Slime.h"
#include "Pig.h"
#include "Monster.h"

using namespace std;

//int AWorld::GetGold()
//{
//	return Gold;
//}
//
//void AWorld::SetGold(int G)
//{
//	Gold = G;
//}
//
//void AWorld::SlideAttack()
//{
//	cout << "미끄러지고 공격" << endl;
//}
//
//void AWorld::HitAndAttack()
//{
//	cout << "들이받고 공격" << endl;
//}
//
//void AWorld::RunAndAttack()
//{
//	cout << "달리다간 공격" << endl;
//}
//
//void AWorld::MonsterAttack(int M)
//{
//	SetGold(100);
//	
//	TotalGold = GetGold()* M;
//	cout << TotalGold << "획득" << endl;
//}
//
//void AWorld::PlayerHPMP(int M, int H, char N)
//{
//	HP = H;
//	MP = M;
//
//}

void AWorld::Initialize()
{

	srand((unsigned int)time(NULL));

	vector<AMonster*> MonsterVec;

	for (int i = 0; i < 10; i++) 
	{
		int RandomMonster = rand() % 3;

		if (RandomMonster == 0)
		{
			MonsterVec.push_back(new AGoblin());
			
		}
		else if (RandomMonster == 1)
		{
			MonsterVec.push_back(new ASlime());
		}
		else
		{
			MonsterVec.push_back(new APig());
		}
	}

	for (auto Mon : MonsterVec)
	{
		Mon->PrintOfMonster();
	}

	for (auto Mon : MonsterVec)
	{
		
		delete Mon;
		Mon = nullptr;
	}
}
