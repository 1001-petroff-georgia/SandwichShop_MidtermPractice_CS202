sandwichShop: driver.o meat.o sandwich.o hamburger.o
	g++ -o sandwichShop driver.o meat.o sandwich.o hamburger.o
driver.o: driver.cpp hamburger.h
	g++ -c driver.cpp
meat.o: meat.cpp meat.h
	g++ -c meat.cpp
sandwich.o: sandwich.cpp sandwich.h meat.h
	g++ -c sandwich.cpp
hamburger.o: hamburger.cpp hamburger.h sandwich.h
	g++ -c hamburger.cpp
clean:
	rm *.o sandwichShop