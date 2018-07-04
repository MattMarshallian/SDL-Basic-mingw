/*
 * Particle.cpp
 *
 *  Created on: 3 lip 2018
 *      Author: Marcin
 */

#include "Particle.h"
#include <math.h>
#include <stdlib.h>

namespace sdlbasic {

Particle::Particle() :m_x(0), m_y(0) {
	init();
}


void Particle::init() {
	m_direction = (2.0 * M_PI * rand()) / RAND_MAX;
	m_speed = (0.02 * rand()) / RAND_MAX;

	m_speed *= m_speed;
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update(int interval) {
	m_direction += 0.0003 * interval;
	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);
	m_x += xspeed * interval;
	m_y += yspeed * interval;

	if (m_x <= -1 || m_x >= 1 || m_y <= -1 || m_y >= 1) {
		init();
	}

}

} /* namespace sdlbasic */
