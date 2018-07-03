/*
 * Particle.h
 *
 *  Created on: 3 lip 2018
 *      Author: Marcin
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace sdlbasic {

class Particle {

// intentionally changed access to public
public:
	double m_x;
	double m_y;

public:
	Particle();
	virtual ~Particle();
};

} /* namespace sdlbasic */

#endif /* PARTICLE_H_ */
