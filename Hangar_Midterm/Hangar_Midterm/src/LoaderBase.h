#pragma once

#include <Graphics/Debugger.h>
#include <Graphics/Renderer.h>
#include"ModePos.h"

class LoaderBase
{
public:
	Renderer* renderer;
	Shader* shader = nullptr;

	Model* currentModel = nullptr;
	std::vector<ModelWithPos> modelPos;

	void AssignRenderer(Renderer* renderer, Shader* shader);
	void AddToRenderers();
	void AddModelPos(ModelPos modelPos);
	void SetCurrentModel(const std::string& path, glm::vec3 rotation);

	virtual ~LoaderBase() {};
	virtual void Load() = 0;
};

