//
//  timing.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "timing.h"

void TimingData::update(){
    // set the previous timestamp
}

StopWatch::StopWatch(){
    totalTime = 0;
    lastTimeStep = 0;
}

void StopWatch::start(){
    // to be implemented
}

void StopWatch::stop(){
    // to be implemented
}

void StopWatch::reset(){
    // to be implemented
}

long StopWatch::getTotalTime() { return totalTime; }