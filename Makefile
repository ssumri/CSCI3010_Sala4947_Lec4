CXX = g++ 
CXXFLAGS = -std=c++20 -Wall 

all: main

clean:
	rm main

main:  main.o
	$(CXX) $(CXXFLAGS) main.cpp -o main