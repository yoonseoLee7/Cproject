#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:

	AMonster();
	virtual ~AMonster();

	virtual void Tick() override;
	virtual void Move();


};

