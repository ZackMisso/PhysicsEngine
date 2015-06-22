//
//  collisionResolver.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/21/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "collisionResolver.h"
#include "shape.h"

void CollisionResolver::simpleResolveCollision(Shape* a,Shape* b){
    /* commenting out to test
     
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
     
     */
}

void CollisionResolver::positionalCorrection(Shape *a,Shape *b){
    /* commenting out to test
     
     float percent=.2f; // can range from 20% - 80%
     Vector2D correction= penetrationDepth/(a->getInverseMass()+b->getInverseMass());
     // set the positions
     
     */
}
