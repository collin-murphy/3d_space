#include <iostream>
#include "space.h"
#include "point.h"
#include "player.h"

int main(void){
    Space s1;
    Player p1(30);
    
    printf("s1 = %f %f %f\n", s1.getX(), s1.getY(), s1.getZ());
    printf("v1 = %f %f %f %f\n", p1.getPoint().getX(), p1.getPoint().getY(), p1.getPoint().getZ(), p1.getAngle().getA1());
    
    return 0;
} 
