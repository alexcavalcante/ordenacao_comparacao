//============================================================================
// Name        : Ordena��o.cpp
// Author      : Alex Cavalcante
// Copyright   : 2018.1
// Description : Algoritmos de Ordena��o
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

#include "Funcoes.h"

/* Teste das fun��es*/
int main(int argc, char* argv[])
{
	char repetir = 'y';

	while(repetir == 'y') {

    vector<int> vetor;

    for(int i = 0; i < 20; i++){
        int r = rand()%20;
        vetor.push_back(r);
    }
    //vetor = {1, 4, 1, 2, 7, 5, 2, 8, 3, 5, 9, 6, 0, 3, 6, 5, 0, 9};

    int option;
    cout << "\nMetodos de ordenacao Comparacao" << endl;
    cout << "(1) Selection Sort" << endl;
    cout << "(2) Insertion Sort" << endl;
    cout << "(3) Quick Sort" << endl;
    cout << "(4) Merge Sort" << endl;
    cout << "(5) Heap Sort" << endl;
    cout << "Metodo de ordenacao linear" <<endl;
    cout << "(6) Countig Sort" << endl;
    cout << "(0) Sair." << endl;
    cout << "Escolha um metodo de ordenacao: ";
    cin >> option;

    switch(option) {

    case 1:
        cout << "\n Vetor original: " << endl;
        printArray(vetor);  //Mostra na tela
        selectionSort(vetor);
        cout << "\n Selection sort:" << endl;
        printArray(vetor);
        break;
    case 2:
        cout << "\n Vetor original: " << endl;
        printArray(vetor);  //Mostra na tela
        insertionSort(vetor);
        cout << "\n Insertion sort:" << endl;
        printArray(vetor);
        break;
    case 3:
        cout << "\n Vetor original: " << endl;
        printArray(vetor);  //Mostra na tela
        quickSort(vetor,0,vetor.size());
        cout << "\n Quick sort:" << endl;
        printArray(vetor);
        break;
    case 4:
        cout << "\n Vetor original: " << endl;
        printArray(vetor);  //Mostra na tela
        mergeSort(vetor,0,vetor.size());
        cout << "\n Merge sort:" << endl;
        printArray(vetor);
        break;
    case 5:
        cout << "\n Vetor original: " << endl;
        printArray(vetor);  //Mostra na tela
        Build_MaxHeap(vetor, vetor.size());
        heapSort(vetor,vetor.size());
        cout << "\n Heap sort:" << endl;
        printArray(vetor);
        break;
    case 6:
        cout << "\n Vetor original: " << endl;
        printArray(vetor);
        countingSort(vetor,vetor.size(),20);
        cout << "\nCounting Sort:" << endl;
        printArray(vetor);
        break;
    case 0:
        return 0;
        break;
    default:
        cout << "\n Opcao invalida, nao houve ordenacao:" << endl;
        break;
    }

    std::cout << "\n Repetir processo novamente (y/n)?: ";
    cin >> repetir;

}

return 0;

}

// Fun��o pra exibir o array ordenado
void printArray(vector<int>& arr) {
	for (int i = 0; i < static_cast<int>(arr.size()); i++)
		cout << " " << arr[i];

	cout << "\n";
}
