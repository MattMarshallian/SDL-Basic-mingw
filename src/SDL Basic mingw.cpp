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
#include "Screen.h"

// #undef ponizej to jakas sztuczka z
// https://stackoverflow.com/questions/6847360/error-lnk2019-unresolved-external-symbol-main-referenced-in-function-tmainc
// co ciekawe, to samo trzeba bylo zrobic w Visual Studio
#undef main

using namespace std;

int main() {

	sdlbasic::Screen screen;
	if (false == screen.init()) {
		cout << "Error initialization SDL" << endl;
	}

	while (true) {
		// Update particles

		// Draw particles
		for (int y = 0; y < sdlbasic::Screen::WINDOW_HEIGHT; ++y) {
			for (int x = 0; x < sdlbasic::Screen::WINDOW_WIDTH; ++x) {
				screen.setPixel(x, y, 128, 0, 255);
			}
		}
		screen.setPixel(400, 300, 255, 255, 255);

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
