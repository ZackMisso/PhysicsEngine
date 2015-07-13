//
//  NormalFromShapesUnitTests.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 7/12/15.
//  Copyright © 2015 Zackary T Misso. All rights reserved.
//

#ifndef NormalFromShapesUnitTests_h
#define NormalFromShapesUnitTests_h

#include "array.h"
#include "shape.h"
#include "vector.h"

class NormalFromShapesUnitTests{
private:
    Array<Shape2D*>* shapes;
    Array<Vector2D*>* allNormalVectors;
    Array<Vector2D*>* calculatedNormalVectors;
    void initializeDataToTest();
    void runTest();
    void printResults();
    void cleanUp();
public:
    NormalFromShapesUnitTests();
};

#endif /* NormalFromShapesUnitTests_h */
