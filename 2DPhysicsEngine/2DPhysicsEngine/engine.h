//
//  engine.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__engine__
#define ___DPhysicsEngine__engine__

#include "collisionDetector.h"
#include "collisionResolver.h"

class PhysicsEngine2D{
private:
    CollisionDetector *detector;
    CollisionResolver *resolver;
    // maybe add culling as its own engine
public:
    PhysicsEngine2D();
    // setter methods
    void setDetector(CollisionDetector* param);
    void setResolver(CollisionResolver* param);
};

#endif