//
//  vector.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__vector__
#define ___DPhysicsEngine__vector__

#include <stdio.h>

class Vector2D{
private:
    float xpos;
    float ypos;
public:
    Vector2D();
    Vector2D(float x,float y);
    Vector2D operator + (Vector2D);
    Vector2D operator - (Vector2D);
    Vector2D operator * (float);
    void operator += (Vector2D);
    void operator -= (Vector2D);
    void operator *= (float);
    float exactDistance(Vector2D other);
    float optimizedDistance(Vector2D other);
    float dot(Vector2D other);
    float getX();
    float getY();
    void setX(float x);
    void setY(float y);
};

// possibly implement more types of vectors

#endif /* defined(___DPhysicsEngine__vector__) */
