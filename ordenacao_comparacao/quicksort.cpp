//============================================================================
// Name        : quicksort.cpp
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

/* Função de intercalação do QuickSort */
int intercala_quick(vector<int>& arr, int ini, int fim) {

	int esq, dir, pivo, aux;
    esq = ini;
    dir = fim;
    pivo = arr[ini];

	while( esq < dir){
        while(arr[esq] <= pivo)//Verifica se o valor da esquerda é menor que o pivo, caso verdadeiro, acrescenta esquerda
            esq++;
        while(arr[dir] > pivo)//Verifica se o valor da direita é maior que o pivo, caso verdadeiro, decrementa direita
            dir--;
        if(esq < dir){//Se encontrou os valores anteriores verifica se o da esquerda é menor que o da direita, se sim, faz a troca entre eles.
            aux = arr[esq];
            arr[esq] = arr[dir];
            arr[dir] = aux;
        }
    }
    arr[ini] = arr[dir];//Valor trocado vai pra posição inicial
    arr[dir] = pivo;//Posição da direita será o novo pivo.
    return dir;
}

void quickSort(vector<int>& vetor, int vetIni, int vetFim){
    int pivoVet;
    if(vetFim > vetIni){
        pivoVet = (int) intercala_quick(vetor,vetIni,vetFim); //Separa o vetor em duas partes
        quickSort(vetor,vetIni,pivoVet-1); //Ordenar o vetor do inicio até o valor antes do pivo.
        quickSort(vetor, pivoVet+1,vetFim);//Ordenar o vetor depois do pivo até o fim.
    }
}
