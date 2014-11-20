/*
 */
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

#define SCREEN_W 640
#define SCREEN_H 480

int main(int argc, char* argv[]){
	SDL_Window* window = NULL;
	SDL_Surface* screenSurface = NULL;
	
	bool quit = false;
	SDL_Event event;

	while(!quit){
		while(SDL_PollEvent(&event) != 0){
			if(event.type == SDL_QUIT){
				quit = true;
			}
		}

			if(SDL_Init(SDL_INIT_VIDEO) < 0){
			printf("SDL could not initialize: %s\n", SDL_GetError());
			}	
			else{
				window = SDL_CreateWindow("tiny-RPG", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_W, SCREEN_H, SDL_WINDOW_SHOWN);

				if(window == NULL){
					printf("Window could not be created: %s\n", SDL_GetError());
				}
				else{
					screenSurface = SDL_GetWindowSurface(window);
					SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0, 0, 0));			   
				}
			}

	}

	return 0;
}
