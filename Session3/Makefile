#Makefile from https://github.com/samdsk/cern-root-compile/blob/master/Makefile

#object_files (main.o)
OBJECTS := $(wildcard *.o)

#root lib & options
ROOTLIBS := $(shell root-config --glibs)
# CFLAGS=-c -g -Wall `root-config --cflags`
ROOTFLAGS := $(shell root-config --cflags)

#exe_files
EXECUTABLES := main.exe

#compiling options
DEBUGFLAGS := -O0 -pg -Wall
CXXFLAGS := $(DEBUGFLAGS) 

#header files
LIBS := #class.h

all: $(EXECUTABLES)

main.exe: Csv2Plot.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS) $(ROOTLIBS) $(ROOTFLAGS) 

#cleaning options
.PHONY: clean cleanall
clean:
	rm -f $(OBJECTS)
cleanall:
	rm -f $(OBJECTS) && rm -f $(EXECUTABLES)
