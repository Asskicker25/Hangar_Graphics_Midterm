#include "Lights.h"
#include "Utilities/Random.h"

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
	//Dim point Light
	AddPointLight(glm::vec3(30.0f, 20.0f, 30.0f), glm::vec3(1.0f), 1.0f,
		glm::vec4(1.0f, 0.01f, 0.02f, 30.0f));

	//Red and green lights
	AddPointLight(glm::vec3(35.25f, 9.75f, 21.0f), glm::vec3(1.0f, 0.0f, 0.0f), 1.5f,
		glm::vec4(1.0f, 0.1f, 0.05f, 20.0f));

	AddPointLight(glm::vec3(35.25f, 9.75f, 19.0f), glm::vec3(0.0f, 1.0f, 0.0f), 1.5f,
		glm::vec4(1.0f, 0.1f, 0.05f, 20.0f));

	redSpotLight =  AddSpotLight(glm::vec3(35.25f, 9.75f, 21.0f),
		glm::vec3(0.0f, 180.0f, 0.0f), glm::vec3(1.0, 0.0f, 0.0f), 1.0f,
		glm::vec4(1.0f, 0.01f, 0.001f, 30.0f), 10, 15);

	greenSpotLight =  AddSpotLight(glm::vec3(35.25f, 9.75f, 19.0f),
		glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0, 1.0f, 0.0f), 1.0f,
		glm::vec4(1.0f, 0.01f, 0.001f, 30.0f), 10, 15);


	/*AddPointLight(glm::vec3(30.0f, 2.5f, 10.0f),glm::vec3(2.0f), 0.5f,
		glm::vec4(1.0f, 0.1f, 0.1f, 5.0f));

	AddPointLight(glm::vec3(34.0f, 2.5f, 10.0f), glm::vec3(2.0f), 0.5f,
		glm::vec4(1.0f, 0.1f, 0.1f, 5.0f));*/


	for (int i = 0; i < 6; i++)
	{
		float xValue;
		if (i % 2 == 0)
		{
			xValue = 30.0f;
		}
		else
		{
			xValue = 20.0f;
		}

		float randomInnerAngle = GetRandomFloatNumber(7.0f, 12.0f);
		float randomOuterAngle = GetRandomFloatNumber(15.0f, 20.0f);

		if (i == 3)
		{
			randomOuterAngle = randomInnerAngle + 0.5f;
		}

		AddSpotLight(glm::vec3(xValue, 20.0f, 32.5f - (i * 5.0f)),
			glm::vec3(-90.f, 0.0f, 0.0f), glm::vec3(1.0f), 1.0f,
			glm::vec4(1.0f, 0.01f, 0.001f, 30.0f), randomInnerAngle, randomOuterAngle);
	}

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

Light* Lights::AddPointLight(glm::vec3 position, glm::vec3 color, float intensity, glm::vec4 atten)
{
	Model* lightModel = new Model("Assets/Models/DefaultSphere.fbx", false, false);
	lightModel->transform.SetScale(glm::vec3(0.01f));
	lightModel->transform.SetPosition(position);

	listOfModels.push_back(lightModel);

	Light* light = new Light();
	light->InitializeLight(lightModel, Point);
	light->SetLightColor(color);
	light->intensity = intensity;
	light->attenuation = atten;

	listOfLights.push_back(light);

	return light;

}

Light* Lights::AddSpotLight(glm::vec3 position, glm::vec3 rotation, glm::vec3 color, float intensity,
	glm::vec4 atten, float innerAngle, float outerAngle)
{
	Model* lightModel = new Model("Assets/Models/DefaultSphere.fbx", false, false);
	lightModel->transform.SetScale(glm::vec3(0.01f));
	lightModel->transform.SetPosition(position);
	lightModel->transform.SetRotation(rotation);

	listOfModels.push_back(lightModel);

	Light* light = new Light();
	light->InitializeLight(lightModel, Spot);
	light->SetLightColor(color);
	light->intensity = intensity;
	light->attenuation = atten;
	light->innerAngle = innerAngle;
	light->outerAngle = outerAngle;

	listOfLights.push_back(light);

	return light;
}
