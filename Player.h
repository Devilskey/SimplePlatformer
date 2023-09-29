#pragma once
#include "GameObject.h"
#include "raylib.h"

class Player : public GameObject
{
public:
	void Update();
	void Render();
	void LoadTextures();
	void UnloadTextures();
};

