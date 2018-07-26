//============================================================================
// Name        : insertion.cpp
// Author      : Alex Cavalcante
// Copyright   : 2018.1
// Description : Algoritmos de Ordena��o
//============================================================================

#include "Funcoes.h"
#include <stdio.h>
#include <string.h>
#include <vector>   //std::vector

using namespace std;

/*Fun��o Insertion Sort*/
void insertionSort(vector<int>& array) {

	for (int i = 1; i < static_cast<int>(array.size()); i++) {
		int num_atual = array[i]; //Armazena o valor do primeiro elemento a ser testado

		int j = i - 1;//Posi��o anterior ao do primeiro elemento ou do num_atual

		while ((j >= 0) && (array[j] > num_atual)) {//Testa se num_atual, � menor que o numero de indice maior
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = num_atual; //Recebe o menor valor e coloca na posi��o correta.
	}
}
