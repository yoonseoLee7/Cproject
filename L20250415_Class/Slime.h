#pragma once
#include "Monster.h"
#include <iostream>

using namespace std;

class ASlime:public AMonster
{
public:
	void Slide();

	void PrintOfMonster() override
	{
		cout << "미끌" << endl;
	}
};

