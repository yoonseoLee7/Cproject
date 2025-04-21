#include <iostream>
#include <vector>
#include "Monster.h"
#include "Goble.h"
#include "Slime.h"
#include "World.h"
#include "Player.h"
#include "Boar.h"
#include "Wall.h"
#include "Floor.h"
#include "Goal.h"

using namespace std;
int main()
{
    UWorld* MyWorld = new UWorld();

    MyWorld->SpawnActor(new AGoble());
    MyWorld->SpawnActor(new ASlime());
    MyWorld->SpawnActor(new ABoar());
    MyWorld->SpawnActor(new APlayer());
    MyWorld->SpawnActor(new AGoal());
    MyWorld->SpawnActor(new AWall());
    MyWorld->SpawnActor(new AFloor());

    MyWorld->Run();

    delete MyWorld;
    MyWorld = nullptr;

	return 0;
}

//vector<AMonster*> Monster;

//Monster.push_back(new AMonster()); 
//Monster.push_back(new AMonster());
//Monster.push_back(new AMonster());

//vector<AMonster*>::iterator iter = Monster.begin();
////원하는 1개를 지정하여 삭제하는방법
//iter++;
//delete (*iter);
//Monster.erase(iter); // 화살표까지 삭제

//통째로 삭제
/*for (auto Mon : Monster)
{
	delete Mon;
}
Monster.clear();*/

//vector<AMonster*> Monsters;
//
//Monsters.push_back(new AGoble());
//Monsters.push_back(new ASlime());
//Monsters.push_back(new AMonster());

//모든 몬스터(액터)가 이동한다
//for (auto Mon : Monsters)
//{
//	//다형성
//	Mon->Move();
//}