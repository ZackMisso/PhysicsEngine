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
    Vector2D invertRet();
    void operator += (Vector2D);
    void operator -= (Vector2D);
    void operator *= (float);
    void invertSelf();
    float magnitude();
    float exactDistance(Vector2D other);
    float optimizedDistance(Vector2D other);
    float dot(Vector2D other);
    float getX();
    float getY();
    void setX(float x);
    void setY(float y);
};

class Vector3D{
private:
    float xpos;
    float ypos;
    float zpos;
public:
    Vector3D();
    Vector3D(float x,float y,float z);
    Vector3D operator + (Vector3D);
    Vector3D operator - (Vector3D);
    Vector3D operator * (float);
    Vector3D invertRet();
    void operator += (Vector3D);
    void operator -= (Vector3D);
    void operator *= (float);
    void invertSelf();
    float magnitude();
    float exactDistance(Vector3D other);
    float optimizedDistance(Vector3D other);
    float dot(Vector3D other);
    float getX();
    float getY();
    float getZ();
    void setX(float x);
    void setY(float y);
    void setZ(float z);
};

// possibly implement more types of vectors

#endif /* defined(___DPhysicsEngine__vector__) */
