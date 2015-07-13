//
//  vector.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#include "vector.h"
#include <math.h>

/////////////////// VECTOR 2D ////////////////////

Vector2D::Vector2D(){
    xpos=0.0f;
    ypos=0.0f;
}

Vector2D::Vector2D(float x,float y){
    xpos=x;
    ypos=y;
}

Vector2D Vector2D::operator+(Vector2D other){
    Vector2D temp;
    temp.setX(xpos+other.getX());
    temp.setY(ypos+other.getY());
    return temp;
}

Vector2D Vector2D::operator-(Vector2D other){
    Vector2D temp;
    temp.setX(xpos-other.getX());
    temp.setY(ypos-other.getY());
    return temp;
}

Vector2D Vector2D::operator*(float scalar){
    Vector2D temp;
    temp.setX(xpos*scalar);
    temp.setY(ypos*scalar);
    return temp;
}

Vector2D Vector2D::invertRet(){
    Vector2D temp;
    temp.setX(xpos);
    temp.setY(ypos);
    return temp;
}

void Vector2D::operator+=(Vector2D other){
    xpos+=other.getX();
    ypos+=other.getY();
}

void Vector2D::operator-=(Vector2D other){
    xpos-=other.getX();
    ypos-=other.getY();
}

void Vector2D::operator*=(float scalar){
    xpos*=scalar;
    ypos*=scalar;
}

void Vector2D::invertSelf(){
    xpos=-xpos;
    ypos=-ypos;
}

float Vector2D::magnitude(){
    return sqrtf(xpos*xpos + ypos*ypos);
}

float Vector2D::exactDistance(Vector2D *other){
    float x=xpos-other->getX();
    float y=ypos-other->getY();
    x*=x;
    y*=y;
    return sqrtf(x+y);
}

float Vector2D::optimizedDistance(Vector2D *other){
    float x=xpos-other->getX();
    float y=ypos-other->getY();
    x*=x;
    y*=y;
    return x+y;
}

float Vector2D::dot(Vector2D *other){
    return xpos*other->getX()+ypos*other->getY();
}

float Vector2D::getX(){
    return xpos;
}

float Vector2D::getY(){
    return ypos;
}

void Vector2D::setX(float x){
    xpos=x;
}

void Vector2D::setY(float y){
    ypos=y;
}