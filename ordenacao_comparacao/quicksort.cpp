//============================================================================
// Name        : quicksort.cpp
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

/* Fun��o de intercala��o do QuickSort */
int intercala_quick(vector<int>& arr, int ini, int fim) {

	int esq, dir, pivo, aux;
    esq = ini;
    dir = fim;
    pivo = arr[ini];

	while( esq < dir){
        while(arr[esq] <= pivo)//Verifica se o valor da esquerda � menor que o pivo, caso verdadeiro, acrescenta esquerda
            esq++;
        while(arr[dir] > pivo)//Verifica se o valor da direita � maior que o pivo, caso verdadeiro, decrementa direita
            dir--;
        if(esq < dir){//Se encontrou os valores anteriores verifica se o da esquerda � menor que o da direita, se sim, faz a troca entre eles.
            aux = arr[esq];
            arr[esq] = arr[dir];
            arr[dir] = aux;
        }
    }
    arr[ini] = arr[dir];//Valor trocado vai pra posi��o inicial
    arr[dir] = pivo;//Posi��o da direita ser� o novo pivo.
    return dir;
}

void quickSort(vector<int>& vetor, int vetIni, int vetFim){
    int pivoVet;
    if(vetFim > vetIni){
        pivoVet = (int) intercala_quick(vetor,vetIni,vetFim); //Separa o vetor em duas partes
        quickSort(vetor,vetIni,pivoVet-1); //Ordenar o vetor do inicio at� o valor antes do pivo.
        quickSort(vetor, pivoVet+1,vetFim);//Ordenar o vetor depois do pivo at� o fim.
    }
}
