//
//  collisionDetector.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/21/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__collisionDetector__
#define ___DPhysicsEngine__collisionDetector__

#include "circle.h"
#include "aabb.h"

class CollisionDetector{
private:
public:
    bool AABBvsAABB(AABB a,AABB b);
    bool CirclevsCircle(Circle a,Circle b);
};

#endif /* defined(___DPhysicsEngine__collisionDetector__) */
