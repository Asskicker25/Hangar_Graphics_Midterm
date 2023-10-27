#include "FloorAndCeiling.h"

void FloorAndCeiling::Load()
{
	SetCurrentModel("Assets/Models/FloorAndCeiling/SM_Env_Floor_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));

	//Floor
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			AddModelPos({ i * 5.0f, 0, j * 5.0f });
		}
	}

	SetCurrentModel("Assets/Models/FloorAndCeiling/SM_Env_Ceiling_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));


	//Ceiling
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			AddModelPos({ (i + 1) * 5.0f, 25, j * 5.0f });
		}
	}




	AddToRenderers();
}
