//============================================================================
// Name        : SDL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
	W MinGW i pewnie w ca�ym Linuksie:
	Je�eli biblioteka si� nazywa libSDL2.a, to w Properies->Libraries podaje si� tylko SDL2
	czyli bez prefiksu lib i suffiksu .a
*/

#include <iostream>
#include "Screen.h"

// #undef poni�ej to jaka� sztuczka z
// https://stackoverflow.com/questions/6847360/error-lnk2019-unresolved-external-symbol-main-referenced-in-function-tmainc
// co ciekawe, to samo trzeba by�o zrobi� w Visual Studio
#undef main

using namespace std;

int main() {

	sdlbasic::Screen screen;
	if (false == screen.init()) {
		cout << "Error initialization SDL" << endl;
	}

	while (true) {
		// Upgrade particles
		// Draw particles
		// Check for messages/events
		if (false == screen.processEvents()) {
			break;
		}
	}

	screen.close();

	return 0;
}
