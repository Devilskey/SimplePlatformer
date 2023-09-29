#pragma once
#include <vector>
#include <iostream>
#include "Scene.h"

using namespace std;

class SceneManager
{
public:
	void UpdateScene();
	void RenderScene();
	void SwitchScene(int SceneId);
	void AddScene(Scene* scene);
	Scene* LoadedScene;

private:
	vector<Scene*> scenes;

};
