//
//  aabb.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#include "aabb.h"

AABB::~AABB(){
    delete min;
    delete max;
}

AABB::AABB(){
    min = nullptr;
    max = nullptr;
}

AABB::AABB(Vector2D *x,Vector2D *y){
    min = x;
    max = y;
}

void AABB::update(){
    // to be implemented
}

// getter methods
Vector2D* AABB::getMin(){return min;}
Vector2D* AABB::getMax(){return max;}

// setter methods
void AABB::setMin(Vector2D* param){min = param;}
void AABB::setMax(Vector2D* param){max = param;}