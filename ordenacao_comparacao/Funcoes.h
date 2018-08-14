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
#endif /* FUNCOES_H_ */
