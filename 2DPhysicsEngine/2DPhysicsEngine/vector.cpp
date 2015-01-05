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

float Vector2D::exactDistance(Vector2D other){
    float x=xpos-other.getX();
    float y=ypos-other.getY();
    x*=x;
    y*=y;
    return sqrtf(x+y);
}

float Vector2D::optimizedDistance(Vector2D other){
    float x=xpos-other.getX();
    float y=ypos-other.getY();
    x*=x;
    y*=y;
    return x+y;
}

float Vector2D::dot(Vector2D other){
    return xpos*other.getX()+ypos*other.getY();
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

////////////////// VECTOR 3D ///////////////////

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