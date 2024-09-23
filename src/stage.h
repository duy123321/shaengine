#ifndef STAGE_H_INCLUDED
#define STAGE_H_INCLUDED

#include "aapi.h"

// Handle updating game state (Shae state, backgrounds, enemies, etc.)
void stage_updateLogic(s_app* app);

// Handle actually drawing each item on stage (make sure it's in order!)
void stage_draw(s_app* app);

#endif // STAGE_H_INCLUDED