tiny-RPG
========

tiny-RPG is going to be exactly what it sounds like, a very small Role Playing Game. We aim to for a procedurally generated map and radiant quest system, along with artwork and sound, in a very compact (>6MB) package.

Prerequisites
--------------
	SDL2
	SDL2_image

Building
--------

### Linux:

1. Make sure you have gcc/clang and make installed and up-to-date.
2. Install the SDL2 and SDL_image 2.0 libraries from your distribution repo, or build them from source: [SDL2](https://www.libsdl.org/hg.php), [SDL2_image](https://www.libsdl.org/projects/SDL_image/) development libraries
3. Run make inside of the tiny_RPG root directory

### OSX:

1. Make sure you have gcc/clang and make installed and up-to-date
2. Install the  [SDL2](https://www.libsdl.org/download-2.0.php) and [SDL2_image 2.0](https://www.libsdl.org/projects/SDL_image/) development libraries
3. Run make inside of the tiny-RPG root directory

### Windows

1. Install [MinGW-w64](http://go.kblog.us/2012/11/installing-mingw-w64-on-windows.html)
2. Install [MSYS](http://go.kblog.us/2012/11/manual-installation-of-msys.html)
3. (Optional) Set up PATH environmental variable to "C:MinGW/bin" and "C:MinGW/bin/msys/1.0/bin"
4. Install the  [SDL2](https://www.libsdl.org/download-2.0.php) and [SDL2_image 2.0](https://www.libsdl.org/projects/SDL_image/) development libraries
5. Run make inside of the tiny-RPG root directory
