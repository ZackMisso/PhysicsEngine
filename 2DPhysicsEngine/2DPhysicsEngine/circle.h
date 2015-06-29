//
//  circle.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#ifndef _DPhysicsEngine_circle_h
#define _DPhysicsEngine_circle_h

#include "vector.h"

class Circle{
private:
    Vector2D *position;
    float radius;
public:
    ~Circle();
    Circle();
    Circle(Vector2D *pos, float r);
    void update();
    // getter methods
    Vector2D* getPosition();
    float getRadius();
    // setter methods
    void setPosition(Vector2D* param);
    void setRadius(float param);
};

#endif
