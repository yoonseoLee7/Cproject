#pragma once
#include "Actor.h"

class APlayer: public AActor
{
public:
	virtual void Tick() override;
	void Move();
};

