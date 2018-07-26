ifeq ($(OS), Windows_NT)
	TARGET = algoritmo_ordenacao.exe
else
	TARGET = algoritmo_ordenacao
endif

all: $(TARGET)

$(TARGET): selection.o ordenacao.o insertion.o
	 g++ -o $(TARGET) selection.o ordenacao.o insertion.o

insertion.o: insertion.cpp
	 g++ -std=c++14 -c insertion.cpp

selection.o: selection.cpp
	 g++ -std=c++14 -c selection.cpp
 
ordenacao.o: ordenacao.cpp
	 g++ -std=c++14 -c ordenacao.cpp
     
clean:
	 rm selection.o ordenacao.o insertion.o$(TARGET)