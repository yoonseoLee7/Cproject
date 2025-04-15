#pragma once
#include "Monster.h"
#include <iostream>

using namespace std;

class AGoblin:public AMonster
{
public:
	void Hit();

	void PrintOfMonster() override
	{
		cout << "퍽퍽" << endl;
	}

};

