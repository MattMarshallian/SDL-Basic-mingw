//============================================================================
// Name        : SDL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 W MinGW i pewnie w calym Linuksie:
 Jezeli biblioteka nazywa sie libSDL2.a, to w Properies->Libraries podaje sie tylko SDL2
 czyli bez prefiksu lib i suffiksu .a
 */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"

// #undef ponizej to jakas sztuczka z
// https://stackoverflow.com/questions/6847360/error-lnk2019-unresolved-external-symbol-main-referenced-in-function-tmainc
// co ciekawe, to samo trzeba bylo zrobic w Visual Studio
#undef main

using namespace std;

int main() {

	srand(time(NULL));

	sdlbasic::Screen screen;
	if (false == screen.init()) {
		cout << "Error initialization SDL" << endl;
	}

	sdlbasic::Swarm swarm;

	while (true) {
		// Update particles
		screen.clear();
		swarm.update();

		int elapsed = SDL_GetTicks();
		unsigned int red = static_cast<unsigned char>((1 + sin(elapsed * 0.0003)) * 128);
		unsigned int green = static_cast<unsigned char>((1 + sin(elapsed * 0.0005)) * 128);
		unsigned int blue = static_cast<unsigned char>((1 + cos(elapsed * 0.0007)) * 128);

		const sdlbasic::Particle * const pParticles = swarm.getParticles();
		for (int i = 0; i < sdlbasic::Swarm::NPARTICLES; ++i) {
			sdlbasic::Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * sdlbasic::Screen::SCREEN_WIDTH / 2;
			int y = (particle.m_y + 1) * sdlbasic::Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
		}



		// Draw the screen
		screen.update();

		// Check for messages/events
		if (false == screen.processEvents()) {
			break;
		}
	}

	screen.close();

	return 0;
}
