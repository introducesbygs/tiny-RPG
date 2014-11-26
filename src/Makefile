CC = gcc
CCLANG = clang
SRC = main.c
CFLAGS = -Wall -o tiny-RPG -std=c99 -lSDL2main -lSDL2 -lSDL2_image

all: $(SRC)
	$(CC) $(SRC) $(CFLAGS)
osx: $(SRC)
	$(CCLANG) $(SRC) $(CFLAGS)
windows: $(SRC)
	$(CC) $(SRC) -lmingw32 $(CFLAGS) 
