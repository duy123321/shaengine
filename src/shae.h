#ifndef SHAE_H_INCLUDED
#define SHAE_H_INCLUDED

typedef struct{
    unsigned char x;
    unsigned char y;
    unsigned char dx;
    unsigned char dy;

    unsigned char white;
    unsigned char pinoy;
} s_Shae;

void shae_initialize(s_Shae* shaePtr);

void shae_moveUp(s_Shae* shaePtr);
void shae_moveDown(s_Shae* shaePtr);
void shae_moveLeft(s_Shae* shaePtr);
void shae_moveRight(s_Shae* shaePtr);

#endif // SHAE_H_INCLUDED