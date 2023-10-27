#pragma once

#include "LoaderBase.h"

class HangarDoor : public LoaderBase
{
private:

	bool openingDoor = false; 
	float firstPanelSpeed = 1.0f;
	float secondPanelSpeed = 1.0f;

public:
	std::vector<Model*> rightFirstPanel;
	std::vector<Model*> rightSecondPanel;
	std::vector<Model*> leftFirstPanel;
	std::vector<Model*> leftSecondPanel;

	// Inherited via LoaderBase
	void Load() override;

	void OpenDoor();
	void UpdateDoorPosition(float deltaTime);
};

