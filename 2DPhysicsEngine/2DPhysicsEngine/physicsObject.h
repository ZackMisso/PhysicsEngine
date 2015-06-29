//
//  physicsObject.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/28/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__physicsObject__
#define ___DPhysicsEngine__physicsObject__

#include "sizeData.h"
#include "BodyData.h"

class PhysicsObject2D{
protected:
    SizeData *sizeData;
    BodyData2D *bodyData;
public:
    // void update();
};

#endif /* defined(___DPhysicsEngine__physicsObject__) */