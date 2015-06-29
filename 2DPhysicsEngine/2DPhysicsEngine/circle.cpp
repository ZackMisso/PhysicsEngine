//
//  circle.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/28/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "circle.h"

Circle::~Circle(){
    delete position;
}

Circle::Circle(){
    position = nullptr;
    radius = 0.0f;
}

Circle::Circle(Vector2D *pos, float r){
    position = pos;
    radius = r;
}

void Circle::update(){
    // to be implemented
}

// getter methods
Vector2D* Circle::getPosition(){return position;}
float Circle::getRadius(){return radius;}

// setter methods
void Circle::setPosition(Vector2D* param){position = param;}
void Circle::setRadius(float param){radius = param;}