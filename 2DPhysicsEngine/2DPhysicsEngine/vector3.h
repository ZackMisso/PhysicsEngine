//
//  vector3.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 7/12/15.
//  Copyright © 2015 Zackary T Misso. All rights reserved.
//

#ifndef vector3_h
#define vector3_h

#include "vector.h"

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
    Vector3D crossProduct(Vector3D other);
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

#endif /* vector3_h */
