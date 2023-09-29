#pragma once
#include <iostream>
#include "raylib.h"

class Button
{
public:
	int x;
	int y;
	Color buttonColor;
	void Onpress();
	void Update();
};

