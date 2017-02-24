#include <iostream>
#include <SDL.h>

/*
 * Lesson 0: Test to make sure SDL is setup properly
 */
int main(int argc, char** argv){
    std::cout << "HELLO SDL 2";
    SDL_Init (SDL_INIT_VIDEO);

    SDL_Window *screen;
    SDL_Renderer *renderer;

    screen = SDL_CreateWindow("tuto", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_RESIZABLE);
    renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_ACCELERATED);

    SDL_RenderPresent(renderer);
    SDL_Delay(10000);

    SDL_Quit();
    return 0;
}
