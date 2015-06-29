//
//  aabb.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__aabb__
#define ___DPhysicsEngine__aabb__

#include <stdio.h>
#include "vector.h"

class AABB{
private:
    Vector2D *min;
    Vector2D *max;
public:
    ~AABB();
    AABB();
    AABB(Vector2D *x,Vector2D *y);
    void update();
    // getter methods
    Vector2D* getMin();
    Vector2D* getMax();
    // setter methods
    void setMin(Vector2D* param);
    void setMax(Vector2D* param);
};

#endif /* defined(___DPhysicsEngine__aabb__) */
