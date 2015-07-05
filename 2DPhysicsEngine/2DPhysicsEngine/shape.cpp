//
//  shape.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#include "shape.h"

Shape2D::Shape2D(){
    vertices = new Array<Vector2D*>();
    bodyData = new BodyData2D();
    sizeData = new SizeData();
}

Shape2D::~Shape2D(){
    delete vertices;
    delete bodyData;
    delete sizeData;
}

// getter methods
Array<Vector2D*>* Shape2D::getVertices(){return vertices;}
BodyData2D* Shape2D::getBodyData(){return bodyData;}
SizeData* Shape2D::getSizeData(){return sizeData;}

// setter methods
void Shape2D::setVertices(Array<Vector2D*> *param){vertices = param;}
void Shape2D::setBodyData(BodyData2D *param){bodyData = param;}
void Shape2D::setSizeData(SizeData *param){sizeData = param;}