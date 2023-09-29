#pragma once
#include "Scene.h"
#include "player.h"
class Menu : public Scene
{
public:
	vector<GameObject*> Objects;
	void UpdateScene();
	void SceneLogic();
	void InitializeObjects();
	void RenderUIScene();
};

