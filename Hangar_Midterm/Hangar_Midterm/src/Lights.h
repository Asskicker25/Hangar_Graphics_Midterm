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
	Lights();

	void AssignRenderer(Renderer* renderer, Shader* shader, LightManager* lightManager);
	void Load();
	void AddToRenderers();
};

