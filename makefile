## Program name: lab7
## Author:       Rebekah Koon
## Date:         8/6/19
## Description:  This program allows the user to either create a buffer
##               simulation or a palindrome.

lab7: BufferSimulation.o palindrome.o Menu.o validInput.o main.o
	g++ -g BufferSimulation.o palindrome.o Menu.o validInput.o main.o -o lab7

BufferSimulation.o: BufferSimulation.cpp BufferSimulation.hpp
	g++ -c BufferSimulation.cpp

palindrome.o: palindrome.cpp palindrome.hpp
	g++ -c palindrome.cpp

Menu.o: Menu.cpp Menu.hpp
	g++ -c Menu.cpp

validInput.o: validInput.cpp validInput.hpp
	g++ -c validInput.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o lab7