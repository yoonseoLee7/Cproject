#pragma once
#include "Monster.h"
#include <iostream>

using namespace std;

class APig:public AMonster
{
public:
	void Run();
	 
	void PrintOfMonster() override
	{
		cout << "꿀꿀" << endl;
	}
};

