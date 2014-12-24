//
//  shape.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__shape__
#define ___DPhysicsEngine__shape__

#include <stdio.h>
#include "vector.h"

class Shape{
private:
    Vector2D *velocity;
    Vector2D *position;
    float restitution;
    float mass;
    float inverseMass;
public:
    Shape();
    ~Shape();
    Vector2D* getVelocity();
    Vector2D* getPosition();
    float getRestitution();
    float getMass();
    float getInverseMass();
    void setVelocity(Vector2D* param);
    void setPosition(Vector2D* param);
    void setRestitution(float param);
    void setMass(float param);
    void setInverseMass(float param);
};

#endif /* defined(___DPhysicsEngine__shape__) */
