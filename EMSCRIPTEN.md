# Emscripten

## Build

```
mkdir build && cd build
emcmake cmake ..
emmake make
```

## Link

```
em++ -flto -O3 -fno-rtti -fno-exceptions *.o libjsoncpp.a -o index.html -sUSE_SDL=2 -sUSE_SDL_IMAGE=2 -sSDL2_IMAGE_FORMATS=png -sUSE_SDL_TTF=2 -sUSE_SDL_MIXER=2 -sSDL2_MIXER_FORMATS=ogg -sENVIRONMENT=web --preload-file ../../../../media@media/ --closure 1
```
