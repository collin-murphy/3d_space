#include "cheader.h"

void worldInit(struct space *space){
    space->w = WORLDSIZE;
    space->h = WORLDSIZE;
    space->d = WORLDSIZE;
}

void playerInit(struct player *player){
    player->w = WORLDSIZE / 2.0;
    player->h = WORLDSIZE / 2.0;
    player->d = WORLDSIZE / 2.0;
    player->angle = 0;
}

//void setAngle()

int main(void){
    struct space s1;
    struct player p1;
    
    worldInit(&s1);
    playerInit(&p1);
    
    printf("s1 = %f %f %f\n", s1.w, s1.h, s1.d);
    printf("player = %f %f %f %f\n", p1.w, p1.h, p1.d, p1.angle);
    
    

    return 0;
}
