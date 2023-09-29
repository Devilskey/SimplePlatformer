#pragma once
#include <iostream>
#include <vector>
#include "GameObject.h"

using namespace std;

class Scene {
public:
	vector<GameObject*> Objects;
	virtual void UpdateScene() = 0;
	virtual void SceneLogic() = 0;
	virtual void InitializeObjects() = 0;
	virtual void RenderUIScene() = 0;
};