#pragma once
#include <vector>

class AMonster;
class APlayer;
class ASlime;
class AGoblin;
class APig;


class AWorld
{
//protected:
//	int Gold;
//
//public:
//	int HP;
//	int MP;
//
//	int Players;
//	int Monsters;
//	int TotalGold;
//
//	int GetGold();
//	void SetGold(int G);
//
//	inline void SlideAttack(); // inline -> 함수가 있는 부모에게 들리지않고 인스턴스생성된 클래스가 바로 갈 수있음
//	void HitAndAttack();
//	void RunAndAttack();
//	void MonsterAttack(int M);
//
//	void PlayerHPMP(int M, int H,char N);
public:
	std::vector<APlayer*> Player;
	std::vector<ASlime*> Slime;
	std::vector<AGoblin*> Goblin;
	std::vector<APig*> Pig;

public:
	void Initialize();

};

