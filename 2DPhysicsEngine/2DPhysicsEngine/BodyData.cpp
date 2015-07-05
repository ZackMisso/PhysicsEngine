//
//  BodyData.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/28/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "BodyData.h"

BodyData2D::BodyData2D(){
    velocity = new Vector2D();
    acceleration = new Vector2D();
}

BodyData2D::~BodyData2D(){
    delete velocity;
    delete acceleration;
}

void BodyData2D::update(){
    // to be implemented
}

// getter methods
Vector2D* BodyData2D::getVelocity(){return velocity;}
Vector2D* BodyData2D::getAcceleration(){return acceleration;}

// setter methods
void BodyData2D::setVelocity(Vector2D* param){velocity = param;}
void BodyData2D::setAcceleration(Vector2D* param){acceleration = param;}