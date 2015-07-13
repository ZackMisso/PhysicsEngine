//
//  vector3.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 7/12/15.
//  Copyright © 2015 Zackary T Misso. All rights reserved.
//

#include "vector3.h"
#include <math.h>

///////////////// VECTOR 3D ///////////////////

Vector3D::Vector3D(){
    xpos = 0.0f;
    ypos = 0.0f;
    zpos = 0.0f;
}

Vector3D::Vector3D(float x,float y,float z){
    xpos = x;
    ypos = y;
    zpos = z;
}

Vector3D Vector3D::operator+(Vector3D other){
    Vector3D temp;
    temp.setX(xpos+other.getX());
    temp.setY(ypos+other.getY());
    temp.setZ(zpos+other.getZ());
    return temp;
}

Vector3D Vector3D::operator-(Vector3D other){
    Vector3D temp;
    temp.setX(xpos-other.getX());
    temp.setY(ypos-other.getY());
    temp.setZ(zpos-other.getZ());
    return temp;
}

Vector3D Vector3D::operator*(float scalar){
    Vector3D temp;
    temp.setX(xpos*scalar);
    temp.setY(ypos*scalar);
    temp.setZ(zpos*scalar);
    return temp;
}

Vector3D Vector3D::invertRet(){
    Vector3D temp;
    temp.setX(xpos);
    temp.setY(ypos);
    temp.setZ(zpos);
    return temp;
}

Vector3D Vector3D::crossProduct(Vector3D other){
    Vector3D temp;
    temp.setX(ypos*other.getZ() - zpos*other.getY());
    temp.setY(zpos*other.getX() - xpos*other.getZ());
    temp.setZ(xpos*other.getY() - ypos*other.getX());
    return temp;
}

void Vector3D::operator+=(Vector3D other){
    xpos+=other.getX();
    ypos+=other.getY();
    zpos+=other.getZ();
}

void Vector3D::operator-=(Vector3D other){
    xpos-=other.getX();
    ypos-=other.getY();
    zpos-=other.getZ();
}

void Vector3D::operator*=(float scalar){
    xpos*=scalar;
    ypos*=scalar;
    zpos*=scalar;
}

void Vector3D::invertSelf(){
    xpos=-xpos;
    ypos=-ypos;
    zpos=-zpos;
}

float Vector3D::magnitude(){
    return sqrtf(xpos*xpos + ypos*ypos + zpos*zpos);
}

float Vector3D::exactDistance(Vector3D other){
    float x = xpos - other.getX();
    float y = ypos - other.getY();
    float z = zpos - other.getZ();
    x*=x;
    y*=y;
    z*=z;
    return sqrtf(x+y+z);
}

float Vector3D::optimizedDistance(Vector3D other){
    float x = xpos - other.getX();
    float y = ypos - other.getY();
    float z = zpos - other.getZ();
    x*=x;
    y*=y;
    z*=z;
    return x+y+z;
}

float Vector3D::dot(Vector3D other){
    return xpos*other.getX()+ypos*other.getY()+zpos*other.getZ();
}

float Vector3D::getX(){
    return xpos;
}

float Vector3D::getY(){
    return ypos;
}

float Vector3D::getZ(){
    return zpos;
}

void Vector3D::setX(float x){
    xpos=x;
}

void Vector3D::setY(float y){
    ypos=y;
}

void Vector3D::setZ(float z){
    zpos=z;
}