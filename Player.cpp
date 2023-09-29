#include "Player.h"

void Player::Render()
{
	DrawCircle(x, y, 20, RED);
}

void Player::Update()
{
	y++;
	x++;
}

void Player::LoadTextures()
{
}

void Player::UnloadTextures()
{
}
