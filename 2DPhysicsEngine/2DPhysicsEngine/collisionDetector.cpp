//
//  collisionDetector.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/21/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "collisionDetector.h"

bool CollisionDetector::AABBvsAABB(AABB a,AABB b){
    if(a.getMax()->getX() < b.getMin()->getX() || a.getMin()->getX() > b.getMin()->getX())
        return false;
    if(a.getMax()->getY() < b.getMin()->getY() || a.getMin()->getY() > b.getMax()->getY())
        return false;
    return true;
}

bool CollisionDetector::CirclevsCircle(Circle a,Circle b){
    float r = a.radius + b.radius;
    return (r*r) < a.getPosition()->optimizedDistance(b.getPosition());
}

