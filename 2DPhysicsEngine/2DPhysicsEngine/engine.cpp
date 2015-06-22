//
//  engine.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#include "engine.h"

PhysicsEngine2D::PhysicsEngine2D(){
    detector = nullptr;
    resolver = nullptr;
}

void PhysicsEngine2D::setDetector(CollisionDetector *param) { detector = param; }
void PhysicsEngine2D::setResolver(CollisionResolver *param) { resolver = param; }