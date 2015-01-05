//
//  particle.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__particle__
#define ___DPhysicsEngine__particle__

#include <stdio.h>
#include "vector.h"

class Particle2D{
public:
    float damping;
    float inverseMass; // 0 = infinite mass
    Vector2D position; // the position of the particle
    Vector2D velocity; // the velocity of the particle
    Vector2D acceleration; // the acceleration of the particle
    void update(float time);
    void integrate(float duration);
};

class Particle3D{
public:
    float damping; // 1.0 = no damping 0.0 = full damping
    float inverseMass; // 0 = infinite mass
    Vector3D position; // the position of the particle
    Vector3D velocity; // the velocity of the particle
    Vector3D acceleration; // the acceleration of the particle
    void update(float time);
    void integrate(float duration);
};

#endif /* defined(___DPhysicsEngine__particle__) */