#include "HangarDoor.h"

void HangarDoor::Load()
{

	Model* modelRef = new Model("Assets/Models/Walls/SM_Env_Construction_Wall_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply");

	modelRef->transform.SetRotation(glm::vec3(0.0f, 90.0f, 0.0f));

	for (int i = 0; i < 5; i++)
	{
		Model* wall = new Model();

		wall->CopyFromModel(*modelRef);

		wall->transform.SetPosition(glm::vec3(0.0f, i * 5.0f, 10.0f));

		rightSecondPanel.push_back(wall);
		renderer->AddModel(wall, shader);
	}

	for (int i = 0; i < 5; i++)
	{
		Model* wall = new Model();

		wall->CopyFromModel(*modelRef);

		wall->transform.SetPosition(glm::vec3(-0.5f, i * 5.0f, 20.0f));
		wall->transform.SetScale(glm::vec3(1.1f, 1.0f, 1.0f));

		rightFirstPanel.push_back(wall);
		renderer->AddModel(wall, shader);
	}

	for (int i = 0; i < 5; i++)
	{
		Model* wall = new Model();

		wall->CopyFromModel(*modelRef);

		wall->transform.SetPosition(glm::vec3(-0.5f, i * 5.0f, 31.0f));
		wall->transform.SetScale(glm::vec3(1.1f, 1.0f, 1.0f));

		leftFirstPanel.push_back(wall);
		renderer->AddModel(wall, shader);
	}

	for (int i = 0; i < 5; i++)
	{
		Model* wall = new Model();

		wall->CopyFromModel(*modelRef);

		wall->transform.SetPosition(glm::vec3(0.0f, i * 5.0f, 40.0f));

		leftSecondPanel.push_back(wall);
		renderer->AddModel(wall, shader);
	}

	delete modelRef;
	//AddToRenderers();
}

void HangarDoor::OpenDoor()
{
	openingDoor = true;
	closingDoor = false;
}

void HangarDoor::CloseDoor()
{
	closingDoor = true;
	openingDoor = false;
}



void HangarDoor::UpdateDoorPosition(float deltaTime)
{
	firstPanelSpeed = 1.0f;
	secondPanelSpeed = 0.2f;

	if (openingDoor)
	{
		for (int i = 0; i < 5; i++)
		{
			if (rightFirstPanel[i]->transform.position.z < 15.0f)
			{
				secondPanelSpeed = 1.0f;
			}

			if (rightFirstPanel[i]->transform.position.z < 8.0f)
			{
				openingDoor = false;
			}
			//Middle Panels
			rightFirstPanel[i]->transform.position.z -= firstPanelSpeed * deltaTime;
			leftFirstPanel[i]->transform.position.z += firstPanelSpeed * deltaTime;

			rightSecondPanel[i]->transform.position.z -= secondPanelSpeed * deltaTime;
			leftSecondPanel[i]->transform.position.z += secondPanelSpeed * deltaTime;

		}
	}

	if (closingDoor)
	{
		for (int i = 0; i < 5; i++)
		{
			if (rightFirstPanel[i]->transform.position.z > 14.0f)
			{
				secondPanelSpeed = 1.0f;
			}

			if (rightFirstPanel[i]->transform.position.z > 20.0f)
			{
				closingDoor = false;
			}
			//Middle Panels

			rightFirstPanel[i]->transform.position.z += firstPanelSpeed * deltaTime;
			leftFirstPanel[i]->transform.position.z -= firstPanelSpeed * deltaTime;

			rightSecondPanel[i]->transform.position.z += secondPanelSpeed * deltaTime;
			leftSecondPanel[i]->transform.position.z -= secondPanelSpeed * deltaTime;

		}
	}


}

