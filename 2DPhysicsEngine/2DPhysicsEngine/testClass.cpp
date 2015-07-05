//
//  testClass.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 7/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "testClass.h"

TestClass::TestClass(){
    test = 0;
}

TestClass::TestClass(int param){
    test = param;
}

int TestClass::getTest(){
    return test;
}

void TestClass::setTest(int param){
    test = param;
}