#pragma once
#include "definitions.h"

class Space{
private:
    float pos_x;
    float pos_y;
    float pos_z;
public:
    Space(float x, float y, float z);

    void setX(float x){pos_x = x;};
    float getX(){return pos_x;};

    void setY(float y){pos_y = y;};
    float getY(){return pos_y;};

    void setZ(float z){pos_z = z;};
    float getZ(){return pos_z;};
    
};

Space::Space(float x = WORLDSIZE, float y = WORLDSIZE, float z = WORLDSIZE){
    pos_x = x;
    pos_y = y;
    pos_z = z;
}