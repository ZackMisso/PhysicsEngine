//
//  collisionDetector.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/21/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "collisionDetector.h"

Manifold2D* CollisionDetector::AABBvsAABB(AABB *a,AABB *b){
    if(a->getMax()->getX() < b->getMin()->getX() || a->getMin()->getX() > b->getMin()->getX())
        return nullptr;
    if(a->getMax()->getY() < b->getMin()->getY() || a->getMin()->getY() > b->getMax()->getY())
        return nullptr;
    // to be implemented
    return nullptr;
}

Manifold2D* CollisionDetector::CirclevsCircle(Circle *a,Circle *b){
    float r = a->getRadius() + b->getRadius();
    bool collides = (r*r) < a->getPosition()->optimizedDistance(b->getPosition());
    // to be implemented
    return nullptr;
}

Vector2D* CollisionDetector::convertTo3Space(Vector3D* vector){
    return new Vector2D(vector->getX(), vector->getY());
}

Vector3D* CollisionDetector::convertTo2Space(Vector2D* vector){
    return new Vector3D(vector->getX(),vector->getY(),1);
}
