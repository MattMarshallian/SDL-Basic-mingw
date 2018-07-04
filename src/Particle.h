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
	double m_x = 0;
	double m_y = 0;

public:
	Particle();
	virtual ~Particle();
	void update(int interval);

private:
	double m_speed;
	double m_direction;
	void init();
};

} /* namespace sdlbasic */

#endif /* PARTICLE_H_ */
