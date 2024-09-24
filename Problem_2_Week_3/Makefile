# Target to compile the object file
biggestnumber: biggestnumber.o
	g++ biggestnumber.o -o biggestnumber.exe

# Target to compile the C++ program
biggestnumber.o: biggestnumber.cpp
	g++ -c biggestnumber.cpp -o biggestnumber.o

# Target to run the program (interactively)
run: biggestnumber
	./biggestnumber.exe

# Target to compile the object Test file
biggestnumberTest: biggestnumberTest.o
	g++ biggestnumberTest.o -o biggestnumberTest.exe

# Target to compile the C++ Test program
biggestnumberTest.o: biggestnumberTest.cpp
	g++ -c biggestnumberTest.cpp -o biggestnumberTest.o

# Target to run the Test program
test: biggestnumberTest
	./biggestnumberTest.exe

# Target to clean up compiled files
clean:
	rm -f biggestnumber.o biggestnumberTest.o biggestnumber.exe biggestnumberTest.exe
