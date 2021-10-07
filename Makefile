CC= g++

CXXFLAGS= -std=c++11 -g -Wall

OBJECTS = main.o

main: main.o $(OBJECTS)
			$(CC) $(CFLAGS) -o $@ $^
			./main

$(OBJECTS):

clean:
			$(RM) *.o main
