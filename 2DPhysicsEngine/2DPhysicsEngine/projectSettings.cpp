//
//  projectSettings.cpp
//  2DPhysicsEngine
//
//  Created by Zackary T Misso on 6/21/15.
//  Copyright (c) 2015 Zackary T Misso. All rights reserved.
//

#include "projectSettings.h"

// constructors
ProjectSettings::ProjectSettings(){
    windowWidth = 800;
    windowHeight = 800;
    beginX = 0;
    beginY = 0;
    maxX = 800;
    maxY = 800;
    allowWindowShift = false;
    timed = false;
}

ProjectSettings::ProjectSettings(int w, int h){
    windowWidth = w;
    windowHeight = h;
    beginX = 0;
    beginY = 0;
    maxX = 800;
    maxY = 800;
    allowWindowShift = false;
    timed = false;
}

ProjectSettings::ProjectSettings(int x, int y, int w, int h){
    windowWidth = w;
    windowHeight = h;
    beginX = x;
    beginY = y;
    maxX = 10000;
    maxY = 10000;
    allowWindowShift = true;
    timed = false;
}

// getter methods
int ProjectSettings::getWindowWidth() { return windowWidth; }
int ProjectSettings::getWindowHeight() { return windowHeight; }
int ProjectSettings::getBeginX() { return beginX; }
int ProjectSettings::getBeginY() { return beginY; }
int ProjectSettings::getMaxX() { return maxX; }
int ProjectSettings::getMaxY() { return maxY; }
bool ProjectSettings::getAllowWindowShift() { return allowWindowShift; }
bool ProjectSettings::getTimed() { return timed; }

// setter methods
void ProjectSettings::setWindowWidth(int param) { windowWidth = param; }
void ProjectSettings::setWindowHeight(int param) { windowHeight = param; }
void ProjectSettings::setBeginX(int param) { beginX = param; }
void ProjectSettings::setBeginY(int param) { beginY = param; }
void ProjectSettings::setMaxX(int param) { maxX = param; }
void ProjectSettings::setMaxY(int param) { maxY = param; }
void ProjectSettings::setAllowWindowShift(bool param) { allowWindowShift = param; }
void ProjectSettings::setTimed(bool param) { timed = param; }