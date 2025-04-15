#pragma once
#include "World.h"
#include <iostream>

class APlayer:public AWorld
{
private:
	int ID;
	char Name;

public:
	string NickName;
	char GetName();
	void SetName(int N);



};

