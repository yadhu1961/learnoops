CXX=gcc
CPPFLAGS=-lstdc++
DEPS=Animal.h 
OBJ=Animal.o main.o

%.o: %.c $(DEPS)
	$(CXX) -c -o $@ $<

main: $(OBJ)
	$(CXX) $^ $(CPPFLAGS)

clean:
	rm *.o a.out 
