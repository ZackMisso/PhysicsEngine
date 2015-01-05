//
//  timing.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__timing__
#define ___DPhysicsEngine__timing__

#include <stdio.h>

class TimingData{
public:
    static long lastFrameTimestamp;
    static void update();
};

#endif /* defined(___DPhysicsEngine__timing__) */
