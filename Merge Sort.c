#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int merge(int *vetor, int esq, int dir, int mid, int tamMax){
    
    int help[tamMax];
    
    for(int i = esq; i <= dir; i++){
        help[i] = vetor[i];
    }
    
    int i = esq;
    int j = (mid + 1);
    int k = esq;
    
    while(i <= mid && j <= dir){
        if(help[i] <= help[j]){
            vetor[k] = help[i];
            i++;
        }else{
            vetor[k] = help[j];
            j++;
        }
        
        k++;
    }
    
    
    while(i <= mid){
        vetor[k] = help[i];
        i++;
        k++;
    }
    
    while(j <= dir){
        vetor[k] = help[j];
        j++;
        k++;
    }
    
}



void mergeSort(int *vetor, int esq, int dir, int tamMax){
    
    if(esq >= dir){
        return;
        
    }else{
        int mid = ((esq+dir)/2);
        mergeSort(vetor, esq, mid, tamMax);
        mergeSort(vetor, (mid + 1), dir, tamMax);
        
        merge(vetor, esq, dir, mid, tamMax);
    }
   
}


int main(){
    
    int tam = 20;
    
    int vetor[tam];
    
    for(int i = 0; i < tam; i++){
        vetor[i] = rand()%100;
    }
    
    printf("Normal vector: ");
    for(int i = 0; i < tam; i++){
        printf("%i ", vetor[i]);
    }
    
    mergeSort(vetor, 0, (tam-1), tam);
    
    printf("\n\n\n");
    
    printf("Ordered vector: ");
    for(int i = 0; i < tam; i++){
        printf("%i ", vetor[i]);
    }

    return 0;
}
