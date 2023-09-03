#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void insertionSort(int *vetor, int tam){
    
    int aux;
    
    for(int i = 0; i < tam; i++){
        
        vetor[i] = rand()% 100;
        
        if(i > 0){
            for(int k = i; k > 0; k--){
                if(vetor[k] < vetor[k-1]){
                    aux = vetor[k-1];
                    vetor[k-1] = vetor[k];
                    vetor[k] = aux;
                }
            }
        }
    }
    
}

int main(){
    
    ////insertionSort////////////
    int vetorI[5];
    
    insertionSort(vetorI, 5);
    
    
    printf("\n\n\nInsertion Sort: \n\n");
    for(int i = 0; i < 5; i++){
        printf("%i\n", vetorI[i]);
    }
    
    return 0;
}
