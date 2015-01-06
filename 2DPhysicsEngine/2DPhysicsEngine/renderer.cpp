//
//  renderer.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "renderer.h"

void RenderingEngine::createWindow(){
    // implement
}

void RenderingEngine::render2DParticle(Particle2D particle){
    // implement
}

void RenderingEngine::render3DParticle(Particle3D particle){
    // implement
}

void RenderingEngine::renderCircle(Circle circle){
    // implement
}

void RenderingEngine::init(){
    glGenVertexArrays(NumVAOs,VAOs);
    glBindVertexArray(VAOs[Triangles]);
    
    GLfloat vertices[NumVertices][2] = {
        { -.9, -.9 }, // triangle 1
        { .85, -.9 },
        { -.9, .85 },
        { .9, .85 }, // triangle 2
        { .9, .9 },
        { -.85, .9 }
    };
    
    glGenBuffers(NumBuffers,Buffers);
    glBindBuffer(GL_ARRAY_BUFFER,Buffers[ArrayBuffer]);
    glBufferData(GL_ARRAY_BUFFER,sizeof(vertices),vertices,GL_STATIC_DRAW);
    ShaderInfo shaders[] = {
        { GL_VERTEX_SHADER,"triangles.vert" },
        { GL_FRAGMENT_SHADER,"triangles.frag" },
        { GL_NONE,0x0 }
    };
    
    GLuint program = LoadShaders(shaders);
    glUseProgram(program);
    glVertexAttribPointer(vPosition,2,GL_FLOAT,GL_FALSE,0,0x0);
    //glVer
    glEnableVertexAttribArray(vPosition);
}

void RenderingEngine::display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBindVertexArray(VAOs[Triangles]);
    glDrawArrays(GL_TRIANGLES,0,NumVertices);
    glFlush();
}

void RenderingEngine::test(int argc,char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGBA);
    glutInitWindowSize(512,512);
}