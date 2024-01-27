CC		= gcc
CFLAGS	= -Wall -Wextra -Wshadow -pedantic -O2 -std=c99
SRCS	= main.c game.c score.c level_editor.c checker.c language.c
EXEC	= hangman.exe

all: $(EXEC)

$(EXEC): hangman.h $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(EXEC)