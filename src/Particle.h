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
	double m_xspeed;
	double m_yspeed;

public:
	Particle();
	virtual ~Particle();
	void update();
};

} /* namespace sdlbasic */

#endif /* PARTICLE_H_ */
