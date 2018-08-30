/* Funçoes.h
 * Author: Alex Cavalcante
 */

#ifndef FUNCOES_H_
#define FUNCOES_H_

#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

void selectionSort(vector<int>& vec);
void insertionSort(vector<int>& vec);
void printArray(vector<int>& vec);
int intercala_quick(vector<int>& arr, int ini, int fim);
void quickSort(vector<int>& vetor, int vetIni, int vetFim);
void merge_vetor(vector<int>& vetor, int inicio, int mei, int fim);
void mergeSort(vector<int>& vetor, int ini, int fim);
/*HeapSort*/
void Build_MaxHeap(vector<int>& vetor, int tam);
void heapSort(vector<int>& vetor, int tam);
int pai_(int root);
int filhoEsquerda (int left);
int filhoDireita  (int right);

void countingSort(vector<int>& arr,int n,int RANGE);
#endif /* FUNCOES_H_ */
