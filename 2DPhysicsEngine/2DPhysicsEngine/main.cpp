//
//  main.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#include <iostream>
#include "baseTest.h"
#include "arrayUnitTests.h"

int main(int argc,char **argv) {
    std::cout << "Hello, World!\n";
    ArrayUnitTest arrayTest;
    arrayTest.runUnitTests();
    //BaseTest(argc,argv);
    return 0;
}
