//
//  shape.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__shape__
#define ___DPhysicsEngine__shape__

#include "vector.h"
#include "array.h"
#include "BodyData.h"
#include "sizeData.h"

class Shape2D{
private:
    Array<Vector2D*> *vertices;
    BodyData2D *bodyData;
    SizeData *sizeData;
public:
    Shape2D();
    ~Shape2D();
    // getter methods
    Array<Vector2D*>* getVertices();
    BodyData2D* getBodyData();
    SizeData* getSizeData();
    // setter methods
    void setVertices(Array<Vector2D*> *param);
    void setBodyData(BodyData2D* param);
    void setSizeData(SizeData* param);
};

#endif /* defined(___DPhysicsEngine__shape__) */
