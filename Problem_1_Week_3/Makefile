# Target to compile the object file
quad2equation: quad2equation.o
	g++ quad2equation.o -o quad2equation.exe

# Target to compile the C++ program
quad2equation.o: quad2equation.cpp
	g++ -c quad2equation.cpp -o quad2equation.o

# Target to run the program (interactively)
run: quad2equation
	./quad2equation.exe

# Target to compile the object Test file
quad2equationTest: quad2equationTest.o
	g++ quad2equationTest.o -o quad2equationTest.exe

# Target to compile the C++ Test program
quad2equationTest.o: quad2equationTest.cpp
	g++ -c quad2equationTest.cpp -o quad2equationTest.o

# Target to run the Test program
test: quad2equationTest
	./quad2equationTest.exe

# Target to clean up compiled files
clean:
	rm -f quad2equation.o quad2equationTest.o quad2equation.exe quad2equationTest.exe