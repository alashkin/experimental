INCDIR=../lib/boost_1_57_0/
CFLAGS=-std=c++11
all:
	g++ -I${INCDIR} ${CFLAGS} example.cpp -o example
