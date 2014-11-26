
//Using SDL and standard IO
#include "include/SDL2/SDL.h"
#include <stdio.h>
#include <stdbool.h>

//Screen dimension constants

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

//The window we'll be rendering to
SDL_Window* window = NULL;

//The surface contained by the window
SDL_Surface* screenSurface = NULL;

void window_init();
void window_free();
bool running = true;

int main( int argc, char* args[] )
{

    window_init();

    window_free();
    
    return 0;
}


void window_init(){
    
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
    else
    {
        //Create window
        window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if( window == NULL )
        {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        }
        else
        {
            //Get window surface
            screenSurface = SDL_GetWindowSurface(window);
            
            //Fill the surface white
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 255, 255, 255));
            
            //Update the surface
            SDL_UpdateWindowSurface(window);
            
			SDL_Event event;
			while (running) {
				if (SDL_PollEvent(&event)) {
					switch (event.type) {
					case SDL_QUIT:
						running = false;
						break;
					default:
						//Do nothing
						break;
				
					}
				}
				
				
			}
        }
    }
}

void window_free(){
    
    //Destroy window
    SDL_DestroyWindow( window );
    
    //Quit SDL subsystems
    SDL_Quit();
}