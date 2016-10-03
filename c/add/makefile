# Sample make file for the add program.
CC=gcc
CFLAGS=-I.
DEPS=add.h
OBJ=add.o main.o

# Actually this is just a compilation doesn't look for main function
# and dependent libraries, Just compiles the code.
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $<

# This is where the actual linking of the program happens.
add: $(OBJ)
	$(CC) -o $@ $^


