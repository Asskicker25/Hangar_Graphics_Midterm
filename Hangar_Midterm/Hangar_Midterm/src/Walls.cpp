#include "Walls.h"


void Walls::Load()
{
	SetCurrentModel("Assets/Models/Walls/SM_Env_Construction_Wall_01_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));


	//Right Wall
	for (int i = 0; i < 5; i++)
	{
		AddModelPos({ 0, i * 5.0f,0 });
		AddModelPos({ 10,i * 5.0f,0 });
		AddModelPos({ 20,i * 5.0f,0 });
		AddModelPos({ 30,i * 5.0f,0 });
		AddModelPos({ 40,i * 5.0f,0 });
		AddModelPos({ 50,i * 5.0f,0 });
	}

	SetCurrentModel("Assets/Models/Walls/SM_Env_Construction_Wall_01_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply",
		glm::vec3(0.0f, 180.0f, 0.0f));

	//Left Wall
	for (int i = 0; i < 5; i++)
	{
		AddModelPos({ 10, i * 5.0f, 40.0f });
		AddModelPos({ 20,i * 5.0f, 40.0f });
		AddModelPos({ 30,i * 5.0f, 40.0f });
		AddModelPos({ 40,i * 5.0f, 40.0f });
		AddModelPos({ 50,i * 5.0f, 40.0f });
		AddModelPos({ 60,i * 5.0f, 40.0f });
	}

	SetCurrentModel("Assets/Models/Walls/SM_Env_Construction_Wall_01_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply",
		glm::vec3(0.0f, -90.0f, 0.0f));

	//Back wall
	for (int i = 0; i < 5; i++)
	{
		AddModelPos({ 60,i * 5.0f, 0.0f });
		AddModelPos({ 60,i * 5.0f, 10.0f });
		AddModelPos({ 60,i * 5.0f, 20.0f });
		AddModelPos({ 60,i * 5.0f, 30.0f });
	}


	AddToRenderers();
}

