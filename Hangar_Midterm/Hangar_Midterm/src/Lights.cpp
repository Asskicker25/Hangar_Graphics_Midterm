#include "Lights.h"

Lights::Lights()
{
}

void Lights::AssignRenderer(Renderer* renderer, Shader* shader, LightManager* lightManager)
{
	this->renderer = renderer;
	this->shader = shader;
	this->lightManager = lightManager;
}

void Lights::Load()
{
	Model* dirLightModel = new Model("Assets/Models/DefaultSphere.fbx");
	dirLightModel->transform.SetScale(glm::vec3(0.5f));
	listOfModels.push_back(dirLightModel);

	Light* dirLight = new Light();
	dirLight->InitializeLight(dirLightModel, Directional);
	listOfLights.push_back(dirLight);

	AddToRenderers();
}

void Lights::AddToRenderers()
{
	for (int i = 0; i < listOfLights.size(); i++)
	{
		renderer->AddModel(listOfModels[i], shader);
		lightManager->AddLight(listOfLights[i]);
	}
}
