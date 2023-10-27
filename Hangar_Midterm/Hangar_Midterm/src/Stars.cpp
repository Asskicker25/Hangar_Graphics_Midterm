#include "Stars.h"
#include "Utilities/Random.h"

void Stars::Load()
{
	SetCurrentModel("Assets/Models/DefaultSphere.fbx", glm::vec3(0.0f),glm::vec3(0.2f), false);

	for (int i = 0; i < NUMBER_OF_STARS; i++)
	{
		float randomY = GetRandomFloatNumber(Y_MIN, Y_MAX);
		float randomZ = GetRandomFloatNumber(Z_MIN, Z_MAX);

		AddModelPos({ -50.0f, randomY, randomZ });
	}

	AddToRenderers();
}
