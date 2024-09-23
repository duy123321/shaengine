#include "stage.h"

#include "aapi.h" 

void stage_updateLogic(s_app* app){
    s_sdlApp* sdlApp = &app->sdlApp;

// FIXME: replace with AAPI function calls (isDownPressed, isRightPressed, etc)
    if(sdlApp->keyboard[SDL_SCANCODE_W]){
        shae_moveUp(&app->shae);
    }
    if(sdlApp->keyboard[SDL_SCANCODE_A]){
        shae_moveLeft(&app->shae);
    }
    if(sdlApp->keyboard[SDL_SCANCODE_S]){
        shae_moveDown(&app->shae);
    }
    if(sdlApp->keyboard[SDL_SCANCODE_D]){
        shae_moveRight(&app->shae);
    }

}

void stage_draw(s_app* app)
{
    app_drawBackground(app);

    app_drawShae(app);
}
