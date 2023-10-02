optimize: 
	g++ -O2 -c ass2q1.cpp 	
	g++ -Wall ass2q1.o -o ass1q1

debug: 
	g++ -g -c ass2q1.cpp 	
	g++ -Wall ass2q1.o -o ass1q1

clean :
	rm *.o ass2q1