//============================================================================
// Name        : selection.cpp
// Author      : Alex Cavalcante
// Copyright   : 2018.1
// Description : Algoritmos de Ordenação
//============================================================================

#include "Funcoes.h"
#include <stdio.h>
#include <string.h>
#include <vector>   //std::vector
using namespace std;

/* Função SelectionSort */
void selectionSort(vector<int>& arr) {
	int indiceMenor, aux, indiceMaior;

	for (indiceMenor = 0; indiceMenor < static_cast<int>(arr.size()); indiceMenor++) {

		for (indiceMaior = indiceMenor + 1; indiceMaior < static_cast<int>(arr.size()); indiceMaior++) {
			if (arr[indiceMaior] < arr[indiceMenor]){//Verificia se o valor da posição da frente é menor que o da posicao anterior
                                                    //Caso afirmativo
				aux = arr[indiceMenor];//Armazena o valor anterior
				arr[indiceMenor] = arr[indiceMaior];//Copia o valor menor para a posicao certa
                arr[indiceMaior] = aux; //Coloca o valor salvo na posicao do indice maior
            }
        }
	}
}
