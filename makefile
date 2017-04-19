#HEADERS := Triangle.h
oFiles := Triangle.o Circle.o Rectangle.o 
#sourses := Triangle.cpp Circle.cpp Rectangle.cpp Point.cpp

output: main.cpp $(oFiles) Point.o
	g++ -std=c++11 main.cpp Triangle.o Circle.o Rectangle.o Point.o -o output
Triangle.o : Triangle.cpp Triangle.h Point.o Point.h
	g++ -c  -std=c++11 Triangle.cpp -o Triangle.o 
Circle.o : Circle.cpp Circle.h Point.o Point.h
	g++ -c  -std=c++11 Circle.cpp -o Circle.o
Rectangle.o : Rectangle.cpp Rectangle.h Point.o Point.h
	g++ -c  -std=c++11 Rectangle.cpp -o Rectangle.o 
Point.o: Point.cpp Point.h
	g++ -c -std=c++11 Point.cpp -o Point.o

