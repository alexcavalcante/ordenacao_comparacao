//============================================================================
// Name        : mergesort.cpp
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

void mergeSort(vector<int>& vetor, int ini, int fim){

   if (ini < fim-1) {
      int meio = (ini + fim)/2;
      mergeSort(vetor, ini, meio);
      mergeSort(vetor, meio, fim);
      merge_vetor(vetor, ini, meio, fim);
   }
}

void merge_vetor(vector<int>& vetor, int inicio, int mei, int fim){
    /* Variaveis auxiliares*/
    int i, j, k;
    vector<int> aux(vetor.size());

    i = inicio; j= mei; k = 0;

    /* Verifica se chegou do inicio ao meio, ou do meio ao fim*/
    while(i < mei && j < fim){
        if(vetor[i] <= vetor[j])//Verifica se o vetor do inicio é menor que o do fim
            aux[k++] = vetor[i++];//Se for armazena o valor menor no array auxiliar
        else
            aux[k++] = vetor[j++];//Caso contrario, o valor será o outro
    }

    while(i < mei)//Junta o array até a metade
        aux[k++] = vetor[i++];

    while(j < fim)//Junta o array do meio ao fim
        aux[k++] = vetor[j++];

    for(i = inicio; i < fim; i++)//Ordena o vetor recebido
        vetor[i] = aux[i-inicio];//Pega o vetor de cada posição de aux

    aux.clear();

}
