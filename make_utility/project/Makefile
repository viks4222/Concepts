# Variables to control makefile operations/defining what compiler to use and the flags
# *****************************************************************
CXX = g++
CXXFLAGS = -Wall -g
# *****************************************************************
# Targets needed to bring the executable up to date

# format for running makefile rules
# target: dependecies
# 	action	
main: main.o Point.o Rectangle.o
		$(CXX) $(CXXFLAGS) -o main.o Point.o Rectangle.o

# The main.o target can be written more simply
main.o: main.cpp Point.h Rectangle.h
		$(CXX) $(CXXFLAGS) -c main.cpp

Point.o: Point.h

Rectangle.o: Rectangle.h Point.h

#general rule to make all o. files
#%.o: %.cpp
#	$(CXX) -c $(CXXFLAGS) $<

