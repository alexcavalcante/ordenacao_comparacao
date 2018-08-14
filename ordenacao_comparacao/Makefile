ifeq ($(OS), Windows_NT)
	TARGET = algoritmo_ordenacao.exe
else
	TARGET = algoritmo_ordenacao
endif

all: $(TARGET)

$(TARGET): selection.o ordenacao.o insertion.o
	 g++ -o $(TARGET) selection.o ordenacao.o insertion.o mergesort.o quicksort.o

mergesort.o: mergesort.cpp
	 g++ -std=c++14 -c mergesort.cpp

quicksort.o: quicksort.cpp
	 g++ -std=c++14 -c quicksort.cpp

insertion.o: insertion.cpp
	 g++ -std=c++14 -c insertion.cpp

selection.o: selection.cpp
	 g++ -std=c++14 -c selection.cpp
 
ordenacao.o: ordenacao.cpp
	 g++ -std=c++14 -c ordenacao.cpp
     
clean:
	 rm selection.o mergesort.o quicksort.o ordenacao.o insertion.o $(TARGET)