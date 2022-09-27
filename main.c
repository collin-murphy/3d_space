#include "header.h"

void worldInit(struct space *s1){
    s1->w = WORLDSIZE;
    s1->h = WORLDSIZE;
    s1->d = WORLDSIZE;
}

void playerInit(struct space *player){
    player->w = WORLDSIZE / 2.0;
    player->h = WORLDSIZE / 2.0;
    player->d = WORLDSIZE / 2.0;
}


int main(void){
    struct space s1;
    struct space player;
    
    worldInit(&s1);
    playerInit(&player);
    
    printf("s1 = %f %f %f\n", s1.w, s1.h, s1.d);
    printf("player = %f %f %f\n", player.w, player.h, player.d);

    

    return 0;
}
