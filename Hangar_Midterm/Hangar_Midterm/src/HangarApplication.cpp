#include "HangarApplication.h"
#include "Walls.h"
#include "FloorAndCeiling.h"
#include "Walkway.h"
#include "Props.h"
#include "Stars.h"

void HangarApplication::SetUp()
{

#pragma region Camera
	
	camera.InitializeCamera(PERSPECTIVE, windowWidth, windowHeight, 0.01f, 300.0f,60.0f);

	SetBackgroundColor(glm::vec3(0.12f, 0.12f, 0.12f));

	cameraPos = glm::vec3(30.0f,12.5f, 30.0f);

#pragma endregion


	lights = new Lights();
	lights->AssignRenderer(&renderer, &lightShader, &lightManager);
	lights->Load();

	lightManager.AddShader(defShader);

	Walls* walls = new Walls();
	walls->AssignRenderer(&renderer, &defShader);
	walls->Load();

	FloorAndCeiling* floorAndCeiling = new FloorAndCeiling();
	floorAndCeiling->AssignRenderer(&renderer, &defShader);
	floorAndCeiling->Load();

	Walkway* walkway = new Walkway();
	walkway->AssignRenderer(&renderer, &defShader);
	walkway->Load();

	Props* props = new Props();
	props->AssignRenderer(&renderer, &defShader);
	props->Load();

	hangarDoor = new HangarDoor();
	hangarDoor->AssignRenderer(&renderer, &defShader);
	hangarDoor->Load();
	hangarDoor->lights = lights;

	Stars* stars = new Stars();
	stars->AssignRenderer(&renderer, &lightShader);
	stars->Load();
	/*Model* wall = new Model("Assets/Models/Walls/SM_Env_Construction_Wall_01_xyz_n_rgba_uv_flatshaded_xyz_n.ply");

	renderer.AddModel(wall, &defShader);*/
}

void HangarApplication::PreRender()
{
}

void HangarApplication::PostRender()
{
	hangarDoor->UpdateDoorPosition(deltaTime);
	lights->UpdateLights(deltaTime);
}

void HangarApplication::ProcessInput(GLFWwindow* window)
{
}

void HangarApplication::KeyCallBack(GLFWwindow* window, int& key, int& scancode, int& action, int& mods)
{
	if (action == GLFW_PRESS)
	{
		if (key == GLFW_KEY_SPACE)
		{
			hangarDoor->OpenDoor();
		}
		else if (key == GLFW_KEY_ENTER)
		{
			hangarDoor->CloseDoor ();
		}
	}
}

void HangarApplication::MouseButtonCallback(GLFWwindow* window, int& button, int& action, int& mods)
{
}
