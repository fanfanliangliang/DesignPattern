#pragma once
#include "State.h"
class PlayState :
	public State
{
public:
	PlayState();
	~PlayState();
	virtual void doAction(Context *context);
};

