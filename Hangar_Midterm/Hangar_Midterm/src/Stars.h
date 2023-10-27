#pragma once

#include "LoaderBase.h"

class Stars : public LoaderBase
{
	static const int NUMBER_OF_STARS = 80;

	static constexpr float Z_MIN = -30;
	static constexpr float Z_MAX = 80;

	static constexpr float Y_MIN = -20;
	static constexpr float Y_MAX = 80;


public:

	// Inherited via LoaderBase
	void Load() override;
};

