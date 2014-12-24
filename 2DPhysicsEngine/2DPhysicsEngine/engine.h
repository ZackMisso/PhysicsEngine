//
//  engine.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__engine__
#define ___DPhysicsEngine__engine__

#include <stdio.h>
#include "aabb.h"
#include "circle.h"
#include "shape.h"

class CollisionDetector{
public:
    bool AABBvsAABB(AABB a,AABB b);
    bool CirclevsCircle(Circle a,Circle b);
    void simpleResolveCollision(Shape* a,Shape* b);
    void positionalCorrection(Shape *a,Shape *b);
};

#endif /* defined(___DPhysicsEngine__engine__) */
