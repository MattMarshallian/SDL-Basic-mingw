/*
 * Swarm.h
 *
 *  Created on: 3 lip 2018
 *      Author: Marcin
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace sdlbasic {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle *m_pParticles;

public:
	Swarm();
	virtual ~Swarm();
	void update();
	const Particle* const getParticles() { return m_pParticles; }
};

} /* namespace sdlbasic */

#endif /* SWARM_H_ */
