//
//  engine.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#include "engine.h"

bool CollisionDetector::AABBvsAABB(AABB a,AABB b){
    if(a.max.getX() < b.min.getX() || a.min.getX() > b.min.getX())
        return false;
    if(a.max.getY() < b.min.getY() || a.min.getY() > b.max.getY())
        return false;
    return true;
}

bool CollisionDetector::CirclevsCircle(Circle a,Circle b){
    float r = a.radius + b.radius;
    return (r*r) < a.position.optimizedDistance(b.position);
}

void CollisionDetector::simpleResolveCollision(Shape* a,Shape* b){
    Vector2D rv = *b->getVelocity() - *a->getVelocity();
    float velocityAlongNormal = rv.dot(normal); // how do i find normal ???
    // dont resolve if velocities are seperating
    if(velocityAlongNormal>0)
        return;
    // calculates the restitution
    float e = (a->getRestitution()>b->getRestitution())?b->getRestitution():a->getRestitution();
    // calculate the impulse scalar
    float j= -(1 + e) * velocityAlongNormal;
    j /= a->getInverseMass() + b->getInverseMass();
    // apply the impulses
    Vector2D impulse = j*normal; // somehow get the normal
    *a->getVelocity() -= impulse*a->getInverseMass();
    *b->getVelocity() += impulse*b->getInverseMass();
}

void CollisionDetector::positionalCorrection(Shape *a,Shape *b){
    float percent=.2f; // can range from 20% - 80%
    Vector2D correction= penetrationDepth/(a->getInverseMass()+b->getInverseMass());
    // set the positions
}