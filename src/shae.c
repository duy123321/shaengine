#include "shae.h"

void shae_initialize(s_Shae* shaePtr){
    shaePtr->x = 14;
    shaePtr->y = 89;
    shaePtr->dx = 2;
    shaePtr->dy = 2;

    shaePtr->white = 50;
    shaePtr->pinoy = 50; // "Perfectly balanced, as all things should be" - Shae
}

void shae_moveUp(s_Shae* shaePtr){
    shaePtr->y -= shaePtr->dy;
}
void shae_moveDown(s_Shae* shaePtr){
    shaePtr->y += shaePtr->dy;
}
void shae_moveLeft(s_Shae* shaePtr){
    shaePtr->x -= shaePtr->dx;
}
void shae_moveRight(s_Shae* shaePtr){
    shaePtr->x += shaePtr->dx;
}
