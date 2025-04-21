#pragma once
#include "Monster.h"

class AGoble : public AMonster
{
public:
	AGoble();
	virtual~AGoble();

	virtual void Tick() override;
	virtual void Move() override;
};

