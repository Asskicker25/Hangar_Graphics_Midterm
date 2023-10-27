#include "HangarApplication.h"
#include "Walls.h"
#include "Lights.h"

void HangarApplication::SetUp()
{

#pragma region Camera
	
	camera.InitializeCamera(PERSPECTIVE, windowWidth, windowHeight, 0.1f, 300.0f,45.0f);

	cameraPos = glm::vec3(30.0f,0, 30.0f);

#pragma endregion


	Lights* lights = new Lights();
	lights->AssignRenderer(&renderer, &defShader, &lightManager);
	lights->Load();

	lightManager.AddShader(defShader);

	Walls* walls = new Walls();
	walls->AssignRenderer(&renderer, &defShader);
	walls->Load();


	/*Model* wall = new Model("Assets/Models/Walls/SM_Env_Construction_Wall_01_xyz_n_rgba_uv_flatshaded_xyz_n.ply");

	renderer.AddModel(wall, &defShader);*/
}

void HangarApplication::PreRender()
{
}

void HangarApplication::PostRender()
{
}

void HangarApplication::ProcessInput(GLFWwindow* window)
{
}

void HangarApplication::KeyCallBack(GLFWwindow* window, int& key, int& scancode, int& action, int& mods)
{
}

void HangarApplication::MouseButtonCallback(GLFWwindow* window, int& button, int& action, int& mods)
{
}
