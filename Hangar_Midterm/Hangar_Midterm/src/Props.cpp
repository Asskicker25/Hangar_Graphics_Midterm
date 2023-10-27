#include "Props.h"

void Props::Load()
{

	//Lab Desks
	SetCurrentModel("Assets/Models/Props/SM_Prop_Desk_Lab_02_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));

	AddModelPos({51.0f, 0.0f, 37.3f});


	SetCurrentModel("Assets/Models/Props/SM_Prop_Desk_Lab_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 30.0f, 0.0f));

	AddModelPos({ 53.5f, 0.0f, 32.0f });

	//Small object Desks
	SetCurrentModel("Assets/Models/Props/SM_Prop_Desk_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	glm::vec3 largeTablePos = glm::vec3(32.5f, 0.0f, 32.5f);

	AddModelPos({ largeTablePos .x, largeTablePos.y, largeTablePos.z});

	SetCurrentModel("Assets/Models/Props/SM_Prop_Desk_02_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 30.0f, 0.0f));

	AddModelPos({ largeTablePos.x - 5.0f, largeTablePos.y, largeTablePos.z});

	//Small Objects
	SetCurrentModel("Assets/Models/Props/SM_Prop_Beaker_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	float startOffset = 0.5f;

	for (int i = 0; i < 4; i++)
	{
		AddModelPos({ 
			largeTablePos.x + startOffset - ( i * 0.5f),
			largeTablePos.y + 1.5f,
			largeTablePos.z + (startOffset * 0.5f) - (i * 0.275f)
			});
	}

	//Shuttle
	SetCurrentModel("Assets/Models/Props/SM_Prop_Shuttle_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -90.0f, 0.0f));

	AddModelPos({ 40.0f, 0.0f, 20.0f });

	//Rocekt
	SetCurrentModel("Assets/Models/Props/SM_Prop_Rocket_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));

	AddModelPos({ 20.0f, 0.0f, 10.0f });


	//Satellite
	SetCurrentModel("Assets/Models/Props/SM_Prop_Satellite_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 125.0f, 0.0f));

	AddModelPos({ 18.0f, 0.0f, 28.0f });



	AddToRenderers();
}
