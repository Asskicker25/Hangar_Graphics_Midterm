#include "Walkway.h"

void Walkway::Load()
{

	SetCurrentModel("Assets/Models/Walkway/SM_Env_Construction_Block_01_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply",
		glm::vec3(0.0f, 180.0f, 0.0f));

	//Row1
	AddModelPos({ 35.0f,0.0f, 0.0f });
	AddModelPos({ 40.0f,0.0f, 0.0f });
	AddModelPos({ 45.0f,0.0f, 0.0f });
	AddModelPos({ 50.0f,0.0f, 0.0f });

	//Row2
	AddModelPos({ 35.0f,5.0f, 0.0f });
	AddModelPos({ 40.0f,5.0f, 0.0f });

	//Row3
	AddModelPos({ 35.0f,10.0f, 0.0f });


	//Bridge
	AddModelPos({ 35.0f,10.0f, 5.0f });
	AddModelPos({ 35.0f,10.0f, 10.0f });
	AddModelPos({ 35.0f,10.0f, 15.0f });
	AddModelPos({ 35.0f,10.0f, 20.0f });
	AddModelPos({ 35.0f,10.0f, 25.0f });
	AddModelPos({ 35.0f,10.0f, 30.0f });
	AddModelPos({ 35.0f,10.0f, 35.0f });

	//Bridge Rail
	SetCurrentModel("Assets/Models/Walkway/SM_Env_Construction_Rail_01_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));

	AddModelPos({ 35.0f,15.0f, 10.0f });
	AddModelPos({ 35.0f,15.0f, 15.0f });
	AddModelPos({ 35.0f,15.0f, 20.0f });
	AddModelPos({ 35.0f,15.0f, 25.0f });
	AddModelPos({ 35.0f,15.0f, 30.0f });
	AddModelPos({ 35.0f,15.0f, 35.0f });
	AddModelPos({ 35.0f,15.0f, 40.0f });

	AddModelPos({ 40.0f,15.0f, 10.0f });
	AddModelPos({ 40.0f,15.0f, 15.0f });
	AddModelPos({ 40.0f,15.0f, 20.0f });
	AddModelPos({ 40.0f,15.0f, 25.0f });
	AddModelPos({ 40.0f,15.0f, 30.0f });
	AddModelPos({ 40.0f,15.0f, 35.0f });
	AddModelPos({ 40.0f,15.0f, 40.0f });

	SetCurrentModel("Assets/Models/Walkway/SM_Env_Construction_Rail_03_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply",
		glm::vec3(0.0f, 180.0f, 0.0f));

	AddModelPos({ 35.0f,15.0f, 0.0f });

	SetCurrentModel("Assets/Models/Walkway/SM_Env_Construction_Rail_03_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));

	AddModelPos({ 55.0f,5.0f, 0.0f });


	SetCurrentModel("Assets/Models/Walkway/SM_Env_Construction_Stairs_01_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));

	AddModelPos({ 50.0f,5.0f, 5.0f });
	AddModelPos({ 45.0f,10.0f, 5.0f });

	SetCurrentModel("Assets/Models/Walkway/SM_Env_Construction_Stairs_01_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply",
		glm::vec3(0.0f, -90.0f, 0.25f));

	AddModelPos({ 50.0f,0.0f, 10.0f });


	

	


	AddToRenderers();
}
