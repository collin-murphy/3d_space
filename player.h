#pragma once
#include "definitions.h"
#include "point.h"
#include "angle.h"


class Player{
private:
    Point point;
    Angle angle;
public:
    Angle getAngle(){return angle;};
    Point getPoint(){return point;};

    Player(float a, Point p);
};

Player::Player(float a = 45, Point p = Point(0,0,0)){
    point = p;
    angle.setA1(a);
}