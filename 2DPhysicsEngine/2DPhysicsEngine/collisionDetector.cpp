//
//  collisionDetector.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/21/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "collisionDetector.h"

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

