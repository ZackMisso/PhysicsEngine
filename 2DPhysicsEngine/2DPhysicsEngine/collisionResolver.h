//
//  collisionResolver.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/21/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__collisionResolver__
#define ___DPhysicsEngine__collisionResolver__

#include "shape.h"

class CollisionResolver{
private:
public:
    void simpleResolveCollision(Shape2D* a,Shape2D* b);
    void positionalCorrection(Shape2D *a,Shape2D *b);
};

#endif
