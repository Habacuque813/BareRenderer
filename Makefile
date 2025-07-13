CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRC=src/main.cpp src/framebuffer.cpp
TARGET=tinyraster

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
