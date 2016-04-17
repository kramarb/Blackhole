#include <iostream>
#include <SDL.h>

int main() {
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "SDL init failed" << std::endl;
    }

    SDL_Quit();
}
