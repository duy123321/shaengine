#include <stdio.h>
#include "main.h"

int main(int argc, char* argv[]){
    printf("Hello weed!");

    s_app app;
    app_initialize(&app);

    while(1)
    {
        app_prepareScene(&app);
        app_handleInput(&app);

        stage_draw(&app);

        app_presentScene(&app);
        app_finishFrame(&app); // handles delay to lock app to 60fps
    }

    return 0;
}