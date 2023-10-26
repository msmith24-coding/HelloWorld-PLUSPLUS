CC = g++
CXXFLAGS = -g -O2 -Wall -Wextra -Wpedantic -Werror --std=c++20 -Wnon-virtual-dtor -Wold-style-cast -Wunused-parameter -Wuninitialized  -Winit-self  -Wshadow  -Wparentheses -Wdangling-else 

OBJS = main.o Logger.o
OUT = HelloWorld

SOURCE_DIR = src
SOURCE = ${SOURCE_DIR}/main.cpp ${SOURCE_DIR}/Logger.cpp

all: ${OBJS}
	${CC} ${CXXFLAGS} ${OBJS} -o ${OUT}

main.o:
	${CC} -c ${CXXFLAGS} ${SOURCE_DIR}/main.cpp

Logger.o:
	${CC} -c ${CXXFLAGS} ${SOURCE_DIR}/Logger.cpp

clean:
	rm -rf ${OBJS} ${OUT}
	
tar:
	tar -czvf ${OUT}.tar.gz ${OUT}
