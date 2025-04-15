#include "World.h"
#include <iostream>
using namespace std;

int AWorld::GetGold()
{
	return Gold;
}

void AWorld::SetGold(int G)
{
	Gold = G;
}

void AWorld::SlideAttack()
{
	cout << "미끄러지고 공격" << endl;
}

void AWorld::HitAndAttack()
{
	cout << "들이받고 공격" << endl;
}

void AWorld::RunAndAttack()
{
	cout << "달리다간 공격" << endl;
}

void AWorld::MonsterAttack(int M)
{
	SetGold(100);
	
	TotalGold = GetGold()* M;
	cout << TotalGold << "획득" << endl;
}

void AWorld::PlayerHPMP(int M, int H, char N)
{
	HP = H;
	MP = M;

}



