//
//  sizeData.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/28/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__sizeData__
#define ___DPhysicsEngine__sizeData__

class SizeData{
private:
    float restitution;
    float mass;
public:
    SizeData();
    SizeData(float rest, float mas);
    // getter methods
    float getRestitution();
    float getMass();
    // setter methods
    void setRestitution(float param);
    void setMass(float param);
};

#endif /* defined(___DPhysicsEngine__sizeData__) */
