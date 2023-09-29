#include <iostream>
#include "Game.h"

using namespace std;

const char* Title = "Hi MOM!";

int main() {
	try {
		Game game = Game();
		game.initializeWindow(Title);
		game.initializeSettings();
		game.GameLoop();
		game.Cleanup();

		return EXIT_SUCCESS;
	}
	catch (exception& ex) {
		cout << ex.what();
		return EXIT_FAILURE;
	}

}

