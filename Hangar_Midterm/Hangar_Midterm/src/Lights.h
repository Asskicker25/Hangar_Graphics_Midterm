#pragma once

#include <Graphics/Debugger.h>
#include <Graphics/Renderer.h>
#include <Graphics/Light.h>
#include <Graphics/LightManager.h>


class Lights
{
private:
	Renderer* renderer;
	Shader* shader = nullptr;
	LightManager* lightManager;

	std::vector<Model*> listOfModels;
	std::vector<Light*> listOfLights;

public:
	Light* greenSpotLight;
	Light* redSpotLight;

	Lights();

	void AssignRenderer(Renderer* renderer, Shader* shader, LightManager* lightManager);
	void Load();
	void AddToRenderers();
	Light* AddPointLight(glm::vec3 position, glm::vec3 color = glm::vec3(1.0f), float intensity = 1.f,
		glm::vec4 atten = glm::vec4(1.0f, 0.01f, 0.001f, 30.0f));

	Light* AddSpotLight(glm::vec3 position, glm::vec3 rotation = glm::vec3(-90.0f,0.0f,0.0f),
		glm::vec3 color = glm::vec3(1.0f), float intensity = 1.f, 
		glm::vec4 atten = glm::vec4(1.0f, 0.01f, 0.001f, 30.0f), float innerAngle = 10.0f, float outerAngle = 15.0f);

	void UpdateLights(float deltaTime);
};

