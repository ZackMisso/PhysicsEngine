//
//  NormalFromShapesUnitTests.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 7/12/15.
//  Copyright © 2015 Zackary T Misso. All rights reserved.
//

#include "normalFromShapesUnitTests.h"

NormalFromShapesUnitTests::NormalFromShapesUnitTests(){
    shapes = new Array<Shape2D*>();
    allNormalVectors = new Array<Vector2D*>();
    calculatedNormalVectors = new Array<Vector2D*>();
    initializeDataToTest();
    runTest();
    printResults();
    cleanUp();
    
}

void NormalFromShapesUnitTests::initializeDataToTest(){
    // to be implemented
}

void NormalFromShapesUnitTests::runTest(){
    // to be implemented
}

void NormalFromShapesUnitTests::printResults(){
    // to be implemented
}

void NormalFromShapesUnitTests::cleanUp(){
    // to be implemented
}