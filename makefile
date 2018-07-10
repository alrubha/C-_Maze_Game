CXX = g++
SRCS = main.cpp game.cpp actor.cpp swan.cpp player.cpp
HEADERS = game.hpp actor.hpp swan.hpp player.hpp
maze : ${SRCS} ${HEADERS}
	${CXX} ${SRCS} -o maze
	${OBJS}: ${SRCS}
	${CXX} -c $(@:.o=.cpp)
clean:
	rm -f *.o maze
