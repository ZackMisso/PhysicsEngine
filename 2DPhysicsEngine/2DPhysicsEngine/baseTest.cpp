//
//  baseTest.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/7/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "baseTest.h"
#include <iostream>
#include <string>
#include <GL/freeglut.h>

BaseTest::BaseTest(){
    run(0,0);
}

BaseTest::BaseTest(int argC,char** argV){
    run(argC,argV);
}

void BaseTest::draw(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex3f(.25,.25,.0);
    glVertex3f(.75,.75,.0);
    glEnd();
    glFlush();
}

void draw2(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex3f(.25,.25,.0);
    glVertex3f(.75,.75,.0);
    glEnd();
    glFlush();
}

void BaseTest::init(){
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}

int BaseTest::run(int argC,char** argV){
    std::cout << "Beginning Run\n";
    glutInit(&argC,argV);
    std::cout << "Setting Display Mode\n";
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    std::cout << "Setting Window Size\n";
    glutInitWindowSize(250,250);
    std::cout << "Setting Window Position\n";
    glutInitWindowPosition(200,200);
    std::cout << "Hey Listen!\n";
    glutCreateWindow("Test");
    std::cout << "You Should Listen!\n";
    init();
    //void (*fptr)()=draw;
    glutDisplayFunc(draw2);
    //while(true){
    //    draw();
    //}
    //draw();
    glutMainLoop();
    return 0;
}
