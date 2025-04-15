#pragma once
#include "World.h"

class APlayer:public AWorld
{
private:
	int ID;
	char Name;

public:
	char GetName();
	void SetName(int N);



};

