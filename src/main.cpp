#include <iostream>

#include <SDL.h>
#include <SDL_image.h>

int main(int argc, const char **argv)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        std::cout << "SDL_Init failed: " << SDL_GetError() << std::endl;
        return 1;
    }
    
    if ((IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG) != IMG_INIT_PNG)
    {
        std::cout << "IMG_Init failed: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }
    
    std::cout << "Hello SDL2!" << std::endl;
    
    SDL_Quit();
    return 0;
}
