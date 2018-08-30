//============================================================================
// Name        : counting.cpp
// Author      : Alex Cavalcante
// Copyright   : 2018.1
// Description : Algoritmos de Ordenação
//============================================================================

#include "Funcoes.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>   //std::vector

using namespace std;

void countingSort(vector<int>& arr,int n,int RANGE){
    vector<int> count(RANGE,0);//contém range elementos do tipo inteiro inicializados com 0
    int i;
    vector<int> out(n);

    for(i=0;i<n;i++)
        ++count[arr[i]];

    for(i=1;i<RANGE;i++)
        count[i]+=count[i-1];

    for(i=n-1;i>=0;i--){
        out[count[arr[i]]-1]=arr[i];
        --count[arr[i]];
    }

    for(i=0;i<n;i++)
        arr[i]=out[i];
}
