//
//  arrayUnitTests.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 7/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include <iostream>
#include "arrayUnitTests.h"
#include "array.h"
#include "testClass.h"

void ArrayUnitTest::runUnitTests(){
    Array<TestClass*> *array = new Array<TestClass*>();
    if(array->size() != 0){
        std::cout << "Initial size of array not 0";
        return;
    }
    array->add(new TestClass(1));
    array->add(new TestClass(2));
    array->add(new TestClass(3));
    if(array->size() != 3){
        std::cout << "Size of array not 3";
        return;
    }
    array->add(new TestClass(4));
    array->add(new TestClass(5));
    array->add(new TestClass(6));
    array->add(new TestClass(7));
    array->add(new TestClass(8));
    array->add(new TestClass(9));
    if(array->size() != 9){
        std::cout << "Size of array not 9";
        return;
    }
    array->remove(0);
    if(array->size() != 8){
        std::cout << "Size of array not 8";
        return;
    }
    TestClass* clas = array->get(4);
    if(clas->getTest() != 6){
        std::cout << "Test after removal failed";
        return;
    }
    array->remove(clas);
    if(array->size() != 7){
        std::cout << "Size of array not 7";
        return;
    }
    if(array->get(4)->getTest() != 7){
        std::cout << "Test after second removal failed";
        return;
    }
    for(int i = 0; i < array->size(); i++)
        if(array->get(i) == nullptr){
            std::cout << "Something is very wrong";
            return;
        }
    while(array->size() != 0)
        array->remove(0);
}