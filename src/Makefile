CC = gcc
CCLANG = clang
SRC = main.c
CFLAGS = -Wall -std=c99 -lSDL2

all: $(SRC)
	$(CC) $(SRC) $(CFLAGS)

OSX: $(SRC)
	$(CCLANG) $(SRC) $(CFLAGS)
