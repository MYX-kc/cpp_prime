main : main.o StrBlob.o
	g++ -std=c++11 -o main main.o StrBlob.o
main.o : main.cpp StrBlob.h
	g++ -std=c++11 -c -o main.o main.cpp
StrBlob.o : StrBlob.cpp StrBlob.h
	g++ -std=c++11 -c -o StrBlob.o StrBlob.cpp
clean:
	rm -rf o.*