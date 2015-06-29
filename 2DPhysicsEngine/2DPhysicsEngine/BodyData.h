//
//  BodyData.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/28/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__BodyData__
#define ___DPhysicsEngine__BodyData__

#include "vector.h"

class BodyData2D{
private:
    Vector2D *velocity;
    Vector2D *acceleration;
    // add more
public:
    BodyData2D();
    ~BodyData2D();
    void update();
    // getter methods
    Vector2D* getVelocity();
    Vector2D* getAcceleration();
    // setter methods
    void setVelocity(Vector2D* param);
    void setAcceleration(Vector2D* param);
};

#endif /* defined(___DPhysicsEngine__BodyData__) */
