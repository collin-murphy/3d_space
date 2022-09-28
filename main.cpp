#include <iostream>
#include "space.h"
#include "point.h"

int main(void){
    Space s1;
    Point p1;
    
    
    printf("s1 = %f %f %f\n", s1.getX(), s1.getY(), s1.getZ());
    printf("v1 = %f %f %f\n", p1.getX(), p1.getY(), p1.getZ());
    

    return 0;
} 
