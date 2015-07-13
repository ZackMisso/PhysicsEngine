//
//  shape.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 12/20/14.
//  Copyright (c) 2014 Zackary T Misso. All rights reserved.
//

#include "shape.h"

// the list of vertices is stored in a way that the first vertex is connected to the
// second one and the last vertex is conntected to the first. The way this 2D engine is
// designed as of right now, it is impossible for any vertex to have more than two lines
// conntected to it

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

Array<Vector2D*>* Shape2D::calculateNormals(){
    Array<Vector2D*>* normals = new Array<Vector2D*>();
    Array<Vector3D*>* vertices3 = new Array<Vector3D*>();
    for(int i = 0; i < vertices->size(); i++)
        vertices3->add(convertTo3Space(vertices->get(i)));
    for(int i = 0; i < vertices3->size(); i++){
        if(i == vertices3->size() - 1){
            // to be implemented
        }else{
            // to be implemented
        }
    }
    return normals;
}

Vector3D* Shape2D::convertTo3Space(Vector2D* vector){
    return new Vector3D(vector->getX(),vector->getY(),1);
}

Vector2D* Shape2D::convertTo2Space(Vector3D* vector){
    return new Vector2D(vector->getX(), vector->getY());
}

// getter methods
Array<Vector2D*>* Shape2D::getVertices(){return vertices;}
BodyData2D* Shape2D::getBodyData(){return bodyData;}
SizeData* Shape2D::getSizeData(){return sizeData;}

// setter methods
void Shape2D::setVertices(Array<Vector2D*> *param){vertices = param;}
void Shape2D::setBodyData(BodyData2D *param){bodyData = param;}
void Shape2D::setSizeData(SizeData *param){sizeData = param;}