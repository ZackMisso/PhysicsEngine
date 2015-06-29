//
//  manifold.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/28/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__manifold__
#define ___DPhysicsEngine__manifold__

#include "physicsObject.h"
#include "vector.h"

class Manifold2D{
private:
    PhysicsObject2D *one;
    PhysicsObject2D *two;
    Vector2D *normal;
    float penetration;
public:
    ~Manifold2D();
    Manifold2D();
    Manifold2D(PhysicsObject2D *a, PhysicsObject2D *b, Vector2D *n, float p);
    // getter methods
    PhysicsObject2D* getObjectOne();
    PhysicsObject2D* getObjectTwo();
    Vector2D* getNormal();
    float getPenetration();
    // setter methods
    void setObjectOne(PhysicsObject2D *param);
    void setObjectTwo(PhysicsObject2D *param);
    void setNormal(Vector2D *param);
    void setPenetration(float param);
};

#endif /* defined(___DPhysicsEngine__manifold__) */