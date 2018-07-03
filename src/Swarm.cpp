/*
 * Swarm.cpp
 *
 *  Created on: 3 lip 2018
 *      Author: Marcin
 */

#include "Swarm.h"

namespace sdlbasic {

Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete[] m_pParticles;
}

void Swarm::update() {
	for (int i = 0; i < NPARTICLES; ++i) {
		m_pParticles[i].update();
	}
}
} /* namespace sdlbasic */
