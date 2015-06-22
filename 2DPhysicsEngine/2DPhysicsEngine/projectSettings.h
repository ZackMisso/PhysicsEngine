//
//  projectSettings.h
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/21/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#ifndef ___DPhysicsEngine__projectSettings__
#define ___DPhysicsEngine__projectSettings__

#include <stdio.h>

class ProjectSettings{
private:
    //const char* saveURL; // To be added a lot later
    int windowWidth;
    int windowHeight;
    int beginX;
    int beginY;
    int maxX; // displacement in either direction
    int maxY; // displacement in either direction
    bool allowWindowShift;
    bool timed;
public:
    // constructors
    ProjectSettings();
    ProjectSettings(int w, int h);
    ProjectSettings(int x, int y, int w, int h);
    // getter methods
    int getWindowWidth();
    int getWindowHeight();
    int getBeginX();
    int getBeginY();
    int getMaxX();
    int getMaxY();
    bool getAllowWindowShift();
    bool getTimed();
    // setter methods
    void setWindowWidth(int param);
    void setWindowHeight(int param);
    void setBeginX(int param);
    void setBeginY(int param);
    void setMaxX(int param);
    void setMaxY(int param);
    void setAllowWindowShift(bool param);
    void setTimed(bool param);
};

#endif /* defined(___DPhysicsEngine__projectSettings__) */
