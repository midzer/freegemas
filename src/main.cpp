#include "Game.h"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>

void mainLoop(void* arg)
{
    static_cast<GoSDL::Window*>(arg)->show();
}

#endif

int main(int argc, char *argv[])
{
    (void) argc;
    (void) argv;

    Game game;

#ifdef __EMSCRIPTEN__
    emscripten_set_main_loop_arg(
        &mainLoop,
        &game,
        0,
        1
    );
#else
    while (game->mShouldRun)
    {
        game->run();
    }
#endif

    return 0;
}
