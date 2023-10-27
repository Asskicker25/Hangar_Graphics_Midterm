#pragma once

#include "LoaderBase.h"

class Stars : public LoaderBase
{
	static const int NUMBER_OF_STARS = 30;
public:

	// Inherited via LoaderBase
	void Load() override;
};

