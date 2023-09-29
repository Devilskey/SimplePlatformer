#pragma once
class GameObject {
public:
   	int x;
	int y;
	virtual void Update() = 0;
	virtual void Render() = 0;
	virtual void LoadTextures() = 0;
	virtual void UnloadTextures() = 0;

};