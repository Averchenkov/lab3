CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=Figure.cpp Circle.cpp raspologenie.cpp Triangle.cpp Quadrangle.cpp proverka.cpp main.cpp Polygon.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=lab3

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cpp function.h Circle.h Figure.h Polygon.h Quadrangle.h Triangle.h Polygon.h
	$(CC) $(CFLAGS) $< -o $@
