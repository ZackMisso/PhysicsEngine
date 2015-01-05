//
//  renderer.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__renderer__
#define ___DPhysicsEngine__renderer__

#include <stdio.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include "particle.h"
#include "aabb.h"
#include "circle.h"

class RenderingEngine{
    // Figure out how to use this
    static void render2DParticle(Particle2D particle);
    static void render3DParticle(Particle3D particle);
    static void renderAABB(AABB aabb);
    static void renderCircle(Circle circle);
};

#endif /* defined(___DPhysicsEngine__renderer__) */
