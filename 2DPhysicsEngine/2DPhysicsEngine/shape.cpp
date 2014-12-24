//
//  shape.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#include "shape.h"

Shape::Shape(){
    // implement
}

Shape::~Shape(){
    // implement
}

Vector2D* Shape::getVelocity(){
    return velocity;
}

Vector2D* Shape::getPosition(){
    return position;
}

float Shape::getRestitution(){
    return restitution;
}

float Shape::getMass(){
    return mass;
}

float Shape::getInverseMass(){
    return inverseMass;
}

void Shape::setVelocity(Vector2D* param){
    velocity=param;
}

void Shape::setPosition(Vector2D* param){
    position=param;
}

void Shape::setRestitution(float param){
    restitution=param;
}

void Shape::setMass(float param){
    mass=param;
}

void Shape::setInverseMass(float param){
    inverseMass=param;
}