#ifndef ITEM_H
#define ITEM_H
#include <SDL/SDL.h>
/*
 *Defines an item structure and corresponding functions
 */

typedef struct{
	char* name;
	int value;
	SDL_Surface *texture;
}Item;

#endif
