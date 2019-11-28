CXX = g++
CXXFLAGS = -Wall
SRCS = Machine.cpp Calendar.cpp Clock.cpp ClockCalendar.cpp Nodo.cpp log.cpp 
OBJS = ${SRCS:.cpp=.o}

all: linux

linux: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main
	chmod +x main

Machine: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c
	
clock: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

calendar: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

clockCalendar: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

Nodo: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

log: $@.cpp $@.h
	$(CXX) $(CXXFLAGS) $@.cpp -c

clean:
	rm -rf *.o main
