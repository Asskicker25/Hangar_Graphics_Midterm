#include "LoaderBase.h"

void LoaderBase::AssignRenderer(Renderer* renderer, Shader* shader)
{
	this->renderer = renderer;
	this->shader = shader;
}

void LoaderBase::AddToRenderers()
{
	for (int i = 0; i < modelPos.size(); i++)
	{
		Model* newWall = new Model();
		newWall->CopyFromModel(*modelPos[i].model);

		newWall->transform.SetPosition(glm::vec3(modelPos[i].modelPos.x, modelPos[i].modelPos.y, modelPos[i].modelPos.z));

		renderer->AddModel(newWall, shader);
	}
}

void LoaderBase::AddModelPos(ModelPos modelPos)
{
	this->modelPos.push_back({ currentModel, modelPos });
}

void LoaderBase::SetCurrentModel(const std::string& path, glm::vec3 rotation)
{
	Model* obj = new Model("Assets/Models/Walls/SM_Env_Construction_Wall_01_xyz_n_rgba_uv_flatshaded_xyz_n_rgba_uv.ply");
	obj->transform.SetRotation(rotation);
	currentModel = obj;
}
