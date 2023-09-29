#pragma once
#include "raylib.h"
#include "GameObject.h"
#include <iostream>
#include <vector>
#include "SceneManager.h"

using namespace std;

class Game
{
public:
	void AddGameObject(GameObject* gameObject);
	void initializeWindow(const char* Title);
	void initializeSettings();
	void GameLoop();
	void Cleanup();

private:
	const int width = 500;
	const int height = 500;
	vector<GameObject *> Objects;
	SceneManager* sceneManager = new SceneManager();
	void DrawScreen();
};

