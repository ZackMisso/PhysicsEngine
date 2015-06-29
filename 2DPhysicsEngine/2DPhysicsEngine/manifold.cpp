//
//  manifold.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/28/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "manifold.h"

Manifold2D::~Manifold2D(){
    // to be implemented
}

Manifold2D::Manifold2D(){
    // to be implemented
}

Manifold2D::Manifold2D(PhysicsObject2D *a, PhysicsObject2D *b, Vector2D *n, float p){
    // to be implemented
}

// getter methods
PhysicsObject2D* Manifold2D::getObjectOne(){return one;}
PhysicsObject2D* Manifold2D::getObjectTwo(){return two;}
Vector2D* Manifold2D::getNormal(){return normal;}
float Manifold2D::getPenetration(){return penetration;}

// setter methods
void Manifold2D::setObjectOne(PhysicsObject2D *param){one = param;}
void Manifold2D::setObjectTwo(PhysicsObject2D *param){two = param;}
void Manifold2D::setNormal(Vector2D *param){normal = param;}
void Manifold2D::setPenetration(float param){penetration = param;}