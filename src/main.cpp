#include <iostream>
#include <SDL.h>

int main() {
    if(SDL_Init(SDL_INIT_VIDEO) != 0) {
        exit(-1);
    }
    SDL_Window *win = SDL_CreateWindow("BLACKHOLE", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
    if (win == nullptr){
        std::cerr<< "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }
    for(;;) {

    }
    SDL_DestroyWindow(win);
    SDL_Quit();
}
