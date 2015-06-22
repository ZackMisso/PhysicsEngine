//
//  renderer.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include <GLFW/glfw3.h>
#include "renderer.h"

RenderingEngine2D::~RenderingEngine2D(){
    glfwDestroyWindow(window);
}

void RenderingEngine2D::init(ProjectSettings *settings){
    glfwInit();
    window = glfwCreateWindow(settings->getWindowWidth(), settings->getWindowHeight(), "Physics Engine", NULL, NULL);
    glfwMakeContextCurrent(window);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, settings->getWindowWidth(), settings->getWindowHeight(), 0.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    //glBegin(GL_LINES);
    //glVertex3f(.25,.25,.0);
    //glVertex3f(.75,.75,.0);
    //glEnd();
    //glFlush();
}

void RenderingEngine2D::beginRenderingFrame(){
    // to be implemented maybe
}

void RenderingEngine2D::finishRenderingFrame(){
    glFlush();
    glfwSwapBuffers(window); // calls pollEvents
}

void RenderingEngine2D::render2DParticle(Particle2D particle){
    // to be implemented
}

void RenderingEngine2D::renderCircle(Circle circle){
    // to be implemented
}

void RenderingEngine2D::renderAABB(AABB aabb){
    // to be implemented
}

void RenderingEngine2D::renderTest(){
    // simple unit test
}