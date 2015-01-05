//
//  particle.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "particle.h"
#include "vector.h"
#include <math.h>

//class Particle2D{
//    Vector2D position;
//    Vector2D velocity;
//    Vector2D acceleration;
//};

//class Particle3D{
//    Vector3D position;
//    Vector3D velocity;
//    Vector3D acceleration;
//};

void Particle2D::update(float time){
    // update position
    position += (velocity * time) + (acceleration * time * time * .5);
    // update velocity
}

void Particle2D::integrate(float duration){
    // update position
    position += velocity * duration;
    // get acceleration from the forces
    Vector2D resultingAcc = acceleration;
    resultingAcc += totalForce * inverseMass;
    // update linear velocity
    velocity += resultingAcc * duration;
    // impose drag
    velocity *= powf(damping,duration); // very expensive... need to change
}

void Particle3D::update(float time){
    // update position
    // update velocity
}