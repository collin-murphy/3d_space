#include <iostream>
#include "space.h"
#include "player.h"

int main(void){
    Space s1;
    Player p1;
    
    
    printf("s1 = %f %f %f\n", s1.getX(), s1.getY(), s1.getZ());
    printf("player = %f %f %f %f\n", p1.getX(), p1.getY(), p1.getZ(), p1.getAngle());
    

    return 0;
} 
