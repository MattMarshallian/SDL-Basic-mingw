/*
 * Particle.cpp
 *
 *  Created on: 3 lip 2018
 *      Author: Marcin
 */

#include "Particle.h"
#include <stdlib.h>

namespace sdlbasic {

Particle::Particle() {
	m_x = 2.0 * rand()/RAND_MAX - 1.0;
	m_y = 2.0 * rand()/RAND_MAX - 1.0;

}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace sdlbasic */
