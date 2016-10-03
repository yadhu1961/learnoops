CXX=gcc
OBJ=Distance.o main.o
CPPFLAGS=-lstdc++ -I.
DEPS=Distance.h

%.o: %.c $(DEPS)
	$(CXX) -c -0 $@ $< $(CPPFLAGS)

compile: $(OBJ)
	$(CXX) $^ $(CPPFLAGS)

clean:
	rm -f *.o *.out
