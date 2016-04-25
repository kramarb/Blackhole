#include <iostream>
#include "GL/glew.h"
#include <SDL.h>
#include <SDL_opengl.h>
#include "scene.h"
int main() {
    if(SDL_Init(SDL_INIT_VIDEO) != 0) {
        exit(-1);
    }
    SDL_Window *win = SDL_CreateWindow("BLACKHOLE", 100, 100, 640, 480, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
    if (win == nullptr){
        std::cerr<< "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }
    SDL_Renderer* renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    glewExperimental = GL_TRUE;
    glewInit();
    GLuint vertexBuffer;
    glGenBuffers(1, &vertexBuffer);

    printf("%u\n", vertexBuffer);
    SDL_DestroyWindow(win);
    SDL_Quit();
}
