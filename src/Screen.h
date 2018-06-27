/*
 * Screen.h
 *
 *  Created on: 27 cze 2018
 *      Author: Marcin
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>

namespace sdlbasic {

class Screen {
public:
	const static int WINDOW_WIDTH = 800;
	const static int WINDOW_HEIGHT = 600;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;

public:
	Screen();
	virtual ~Screen();
	bool init();
	bool processEvents();
	void close();
};

} /* namespace sdlbasic */

#endif /* SCREEN_H_ */
