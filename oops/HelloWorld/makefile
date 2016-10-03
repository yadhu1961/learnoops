CXX=gcc
CPPFLAGS=-lstdc++
OBJ=HelloWorld.o

%.o:%.c
	$(CXX) -c -o $< $(CPPFLAGS)

compile:$(OBJ)
	$(CXX) $^ $(CPPFLAGS)

clean:
	rm -f *.out *.o
