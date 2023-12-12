#include "Game.h"
#include <emscripten.h>

// &main_loop has the signature void (*)()
void main_loop()
{
  Game w;
  w.show();
}

int main(int argc, char *argv[])
{
    (void) argc;
    (void) argv;

    emscripten_set_main_loop(&main_loop, 0, 1);

    return 0;
}
