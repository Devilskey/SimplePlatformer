#include "Game.h"
#include "player.h"
#include "menu.h"

void Game::AddGameObject(GameObject* gameObject)
{
	Objects.push_back(gameObject);
}

void Game::initializeWindow(const char* title)
{
	InitWindow(width, height, title);

	SetTargetFPS(60);

	if (!IsWindowReady) {
		throw new exception("Window could not be created");
	}

}

void Game::initializeSettings()
{
	Menu* menu = new Menu();
	sceneManager->AddScene(menu);
}

void Game::GameLoop()
{
	while (!WindowShouldClose()) {
		sceneManager->UpdateScene();
		DrawScreen();
	}
}

void Game::Cleanup()
{
}

void Game::DrawScreen()
{
	BeginDrawing();
		sceneManager->RenderScene();
		ClearBackground(WHITE);
	EndDrawing();
}