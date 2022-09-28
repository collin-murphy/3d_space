#pragma once
#include "definitions.h"

class Player{
private:
    float pos_x;
    float pos_y;
    float pos_z;
    float angle;
public:
    Player(float x, float y, float z, float a);

    void setX(float x){pos_x = x;};
    float getX(){return pos_x;};

    void setY(float y){pos_y = y;};
    float getY(){return pos_y;};

    void setZ(float z){pos_z = z;};
    float getZ(){return pos_z;};

    void setAngle(float a){angle = a;};
    float getAngle(){return angle;};
    
};

Player::Player(float x = WORLDSIZE, float y = WORLDSIZE, 
               float z = WORLDSIZE, float a = 0){
    pos_x = x;
    pos_y = y;
    pos_z = z;
    angle = a;
}