#pragma once

#include "main.h"
#include <Audioclient.h>

class Audio
{
public:
	Audio();
	~Audio();
	
	bool Init();
	void Destroy();
};