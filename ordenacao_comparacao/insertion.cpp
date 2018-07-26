//============================================================================
// Name        : insertion.cpp
// Author      : Alex Cavalcante
// Copyright   : 2018.1
// Description : Algoritmos de Ordenação
//============================================================================

#include "Funcoes.h"
#include <stdio.h>
#include <string.h>
#include <vector>   //std::vector

using namespace std;

/*Função Insertion Sort*/
void insertionSort(vector<int>& array) {

	for (int i = 1; i < static_cast<int>(array.size()); i++) {
		int num_atual = array[i]; //Armazena o valor do primeiro elemento a ser testado

		int j = i - 1;//Posição anterior ao do primeiro elemento ou do num_atual

		while ((j >= 0) && (array[j] > num_atual)) {//Testa se num_atual, é menor que o numero de indice maior
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = num_atual; //Recebe o menor valor e coloca na posição correta.
	}
}
