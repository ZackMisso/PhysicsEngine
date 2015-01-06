//
//  renderer.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__renderer__
#define ___DPhysicsEngine__renderer__

#ifdef __APPLE__
#define glGenVertexArrays glGenVertexArraysAPPLE
#define glBindVertexArray glBindVertexArrayAPPLE
#define glBindVertexArrays glBindVertexArraysAPPLE
#define glDeleteVertexArrays glDeleteVertexArraysAPPLE
#define BUFFER_OFFSET(offset) ((GLvoid*)(offset));
#endif

#include <stdio.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <OpenGL/gliContext.h>
#include <OpenGL/OpenGL.h>
#include "particle.h"
#include "aabb.h"
#include "circle.h"

class RenderingEngine{
    // Figure out how to use this
    enum VAO_IDs { Triangles, NumVAOs }; // learn
    enum Buffer_IDs { ArrayBuffer, NumBuffers }; // learn
    enum Attrib_IDs { vPosition = 0 }; // learn
    static GLuint VAOs[NumVAOs];
    static GLuint Buffers[NumBuffers];
    static const GLuint NumVertices = 6;
    static void createWindow();
    static void render2DParticle(Particle2D particle);
    static void render3DParticle(Particle3D particle);
    static void renderAABB(AABB aabb);
    static void renderCircle(Circle circle);
    static void init();
    static void display();
    static void test(int argc,char** argv);
};

#endif /* defined(___DPhysicsEngine__renderer__) */
