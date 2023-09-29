#include "Menu.h"

void Menu::UpdateScene()
{
	for (int i = 0; i < Objects.size(); i++) {
		Objects[i]->Render();
	}

	for (int i = 0; i < Objects.size(); i++) {
		Objects[i]->Update();
	}
}

void Menu::SceneLogic()
{
}

void Menu::InitializeObjects()
{
	Player* player = new Player();
	Objects.push_back(player);
}

void Menu::RenderUIScene()
{
}
