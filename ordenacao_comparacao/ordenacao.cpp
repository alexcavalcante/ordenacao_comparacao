//============================================================================
// Name        : Ordenação.cpp
// Author      : Alex Cavalcante
// Copyright   : 2018.1
// Description : Algoritmos de Ordenação
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

#include "Funcoes.h"

/* Teste das funções*/
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

// Função pra exibir o array ordenado
void printArray(vector<int>& arr) {
	for (int i = 0; i < static_cast<int>(arr.size()); i++)
		cout << " " << arr[i];

	cout << "\n";
}
