/*
 * Swarm.cpp
 *
 *  Created on: 3 lip 2018
 *      Author: Marcin
 */

#include "Swarm.h"

namespace sdlbasic {

Swarm::Swarm() :m_lastTime(0) {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete[] m_pParticles;
}

void Swarm::update(int elapsed) {

	int interval = elapsed - m_lastTime;

	for (int i = 0; i < NPARTICLES; ++i) {
		m_pParticles[i].update(interval);
	}

	m_lastTime = elapsed;
}

} /* namespace sdlbasic */
