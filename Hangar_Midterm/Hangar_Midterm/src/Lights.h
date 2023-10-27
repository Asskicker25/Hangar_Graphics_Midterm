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

	static constexpr float MIN_INTENSITY = 0.0f;
	static constexpr float MAX_INTENSITY = 1.5f;

	static constexpr float SPOT_DEF_INTENSITY = 0.4f;

	static constexpr float BLINK_SPEED = 5.0f;
	static constexpr float ROTATION_SPEED = 2.0f;

	bool isBlinking;
	float timeStep = 0;

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
		glm::vec4 atten = glm::vec4(1.0f, 0.01f, 0.001f, 30.0f), float innerAngle = 10.0f, float outerAngle = 15.0f, float modelScale = 0.5f);

	void UpdateLights(float deltaTime);
	void SetLightAnimState(bool state);
};

