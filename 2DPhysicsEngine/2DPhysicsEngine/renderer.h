//
//  renderer.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 1/4/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__renderer__
#define ___DPhysicsEngine__renderer__

#include "particle.h"
#include "aabb.h"
#include "circle.h"
#include "projectSettings.h"

class RenderingEngine2D{
private:
    GLFWwindow *window;
public:
    ~RenderingEngine2D();
    void init(ProjectSettings *settings);
    void beginRenderingFrame();
    void finishRenderingFrame();
    void render2DParticle(Particle2D particle);
    void renderAABB(AABB aabb);
    void renderCircle(Circle circle);
    void renderTest();
};

class RenderingEngine3D{
    // to be implemented
};

#endif /* defined(___DPhysicsEngine__renderer__) */
