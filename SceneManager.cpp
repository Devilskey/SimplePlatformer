#include "SceneManager.h"

void SceneManager::UpdateScene()
{
	if (LoadedScene == NULL)
		throw exception("No scene found in the list Or no scene loaded");

	LoadedScene->UpdateScene();
	LoadedScene->SceneLogic();
}

void SceneManager::RenderScene()
{
	LoadedScene->RenderUIScene();
}

void SceneManager::SwitchScene(int SceneId)
{
	try {
		LoadedScene = scenes[SceneId];
	}
	catch (exception& ex) {
		cout << ex.what();
	}
}

void SceneManager::AddScene(Scene* scene)
{
	scenes.push_back(scene);
	if (LoadedScene == NULL) {
		LoadedScene = scenes[0];
		LoadedScene->InitializeObjects();
	}
}
