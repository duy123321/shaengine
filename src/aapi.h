/* aapi.h: Structs, unions, function prototypes, etc.
    needed for aapi.c
*/

#ifndef AAPI_H_INCLUDED
#define AAPI_H_INCLUDED

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>

#include "shae.h"

/* Constants, defines, macros, etc. */
#define SCREEN_WIDTH 256
#define SCREEN_HEIGHT 256
#define SIZE_TEXTURE_ARRAY 32 // will probably want more textures

// Will have to move all these indices.. Duy should we just
// make this a linked list like the tutorial? I don't think
// the GBA would use a linked list here
#define INDEX_TEXTURE_SHAE_WALK0 0
#define INDEX_TEXTURE_SHAE_WALK1 1

#define MAX_KEYBOARD_KEYS 350

/* This struct holds stuff only relevant to SDL
*/
typedef struct
{
    SDL_Renderer *renderer;
    SDL_Window   *window;

    SDL_Texture *textures[SIZE_TEXTURE_ARRAY];
    SDL_Texture *background; // FIXME: make this an array of overworld maps

    unsigned char keyboard[MAX_KEYBOARD_KEYS];
} s_sdlApp;

/* This struct holds graphics, inputs, outputs
*/
typedef struct
{
    s_sdlApp sdlApp;

    s_Shae shae;
} s_app;

/* Generic App Helpers (Call these outside aapi.c!) */
void app_initialize(s_app* app);
void app_prepareScene(s_app* app);
void app_handleInput(s_app* app);
void app_keyDown(s_app* app, SDL_KeyboardEvent* event);
void app_keyUp(s_app* app, SDL_KeyboardEvent* event);
void app_presentScene(s_app* app);
void app_finishFrame(s_app* app);
void app_loadTexture(s_app* app, char *filename, int index);
void app_loadBackground(s_app* app, char* filename);
void app_drawBackground(s_app* app);
void app_drawShae(s_app* app);

/* SDL Only Helpers (Only call in aapi.c!) */
void sdl_setup(s_sdlApp* sdlApp);
void sdl_cleanup(s_sdlApp* sdlApp);

#endif // AAPI_H_INCLUDED
