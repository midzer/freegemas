# Emscripten

## Build

```
mkdir build && cd build
emcmake cmake ..
emmake make
```

## Link

```
em++ -flto -O3 -fno-rtti -fno-exceptions *.o libjsoncpp.a -o index.html -sUSE_SDL=2 -sUSE_SDL_IMAGE=2 -sSDL2_IMAGE_FORMATS='["png"]' -sUSE_SDL_TTF=2 -sUSE_SDL_MIXER=2 -sSDL2_MIXER_FORMATS='["ogg"]' -sASYNCIFY -sASYNCIFY_ONLY=["main","main_loop()","GLES2_RenderPresent","Emscripten_GLES_SwapWindow","SDL_Delay","SDL_RenderPresent","dynCall_v"] -sASYNCIFY_IGNORE_INDIRECT -sENVIRONMENT=web --preload-file media -Wl,-u,fileno --closure 1 -sEXPORTED_RUNTIME_METHODS=['allocate']
```
