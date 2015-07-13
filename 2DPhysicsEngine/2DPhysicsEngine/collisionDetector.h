//
//  collisionDetector.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/21/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__collisionDetector__
#define ___DPhysicsEngine__collisionDetector__

#include "circle.h"
#include "aabb.h"
#include "manifold.h"

class CollisionDetector{
private:
public:
    Manifold2D* AABBvsAABB(AABB *a,AABB *b);
    Manifold2D* CirclevsCircle(Circle *a,Circle *b);
    //int SAT(Shape *one, Shape *two);
    int SAT(AABB *one, AABB *two);
    Vector2D* convertTo3Space(Vector3D* vector);
    Vector3D* convertTo2Space(Vector2D* vector);
};

#endif /* defined(___DPhysicsEngine__collisionDetector__) */
