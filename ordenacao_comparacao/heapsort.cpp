//============================================================================
// Name        : heapsort.cpp
// Author      : Alex Cavalcante
// Copyright   : 2018.1
// Description : Algoritmos de Ordenação
//============================================================================

#include "Funcoes.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>       /* floor */

using namespace std;

/*Returna o pai*/
int pai_(int root){
    return (root-1)/2;
}
/*Returna o filho da esquerda*/
int filhoEsquerda (int left){
    return (2*left + 1);
}
/*Returna o filho da direita*/
int filhoDireita (int rigth){
    return (2*rigth + 2);
}

void maxHeapfy(vector<int>& vetor, int inicio, int fim){

    int maior = inicio;
    int filhoE = filhoEsquerda(inicio);
    int filhoD = filhoDireita(inicio);

    /* Verifica se o filho da esquerda é maior que o pai,
        se for o maior será o filho da esquerda.
    */
    if(filhoE < fim && vetor[filhoE] > vetor[maior]){
        maior = filhoE;
    }
    /* Verifica se o filho da direita é maior que o pai,
        se for o maior será o filho da direita.
    */
    if(filhoD < fim && vetor[filhoD] > vetor[maior]){
        maior = filhoD;
    }
    /* Verifica se o pai não é o valor inicial e faz a troca*/
    if(maior != inicio){
        swap(vetor[inicio],vetor[maior]);
        maxHeapfy(vetor,maior,fim);
    }
}

void Build_MaxHeap(vector<int>& vetor, int n){
	int i;
	for(i = n/2-1; i >= 0; i--)
        maxHeapfy(vetor, i, n);
}

void heapSort(vector<int>& vetor, int tam){

    int i, aux;
    /*Cria o heapMax*/
    for(i=tam/2-1; i >= 0; i--){
        maxHeapfy(vetor, i, tam);
    }

    /* Ordena após a criação do HeapMax*/
    for(i = tam-1; i >= 0; i--){
        swap(vetor[0],vetor[i]);
        maxHeapfy(vetor, 0, i);
    }
}
