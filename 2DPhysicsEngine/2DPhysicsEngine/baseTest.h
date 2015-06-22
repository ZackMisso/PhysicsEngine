//
//  baseTest.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/7/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__baseTest__
#define ___DPhysicsEngine__baseTest__

#include <stdio.h>
#include <vector>
#include <stdio.h>
//#include <string.h>
//#include <algorithm>
#include <GL/freeglut.h>

class BaseTest{
private:
public:
    BaseTest();
    BaseTest(int argC,char** argV);
    int run(int argC,char** argV);
    void draw();
    void init();
    void display();
    //void reshape(int w,int h);
    //void keyboard(unsigned char key,int x,int y);
};





#endif /* defined(___DPhysicsEngine__baseTest__) */
