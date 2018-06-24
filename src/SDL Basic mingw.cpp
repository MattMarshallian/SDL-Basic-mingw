//============================================================================
// Name        : SDL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
	W MinGW i pewnie w ca³ym Linuksie:
	Je¿eli biblioteka siê nazywa libSDL2.a, to w Properies->Libraries podaje siê tylko SDL2
	czyli bez prefiksu lib i suffiksu .a
*/

#include <iostream>
#include <SDL.h>

// #undef poni¿ej to jakaœ sztuczka z
// https://stackoverflow.com/questions/6847360/error-lnk2019-unresolved-external-symbol-main-referenced-in-function-tmainc
// co ciekawe, to samo trzeba by³o zrobiæ w Visual Studio
#undef main

using namespace std;

int main() {

	const int WINDOW_WIDTH = 800;
	const int WINDOW_HEIGHT = 600;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL screwed up" << endl;
		return 1;
	}

	cout << "Hello World with SDL2" << endl;

	SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

	if (nullptr == window) {
		SDL_Quit();
		return 2;
	}

	SDL_Event event;

	bool quit = false;

	while (!quit) {
		// Upgrade particles
		// Draw particles
		// Check for messages/events
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}

		};
	}


	SDL_Quit();

	return 0;
}
