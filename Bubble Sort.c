#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void bubbleSort(int *vetor, int tam){
    
    int aux, cont = 1;
    
    for(int i = 0; i < tam; i++){
        vetor[i] = rand()% 100;
    }

    for(int i = 0; cont != 0; i++){
        cont = 0;
        for(int j = 0; j < 4; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                cont = 1;
            }
        }
    }
}


int main(){
    
    //////bubbleSort//////////
    int vetorB[5];
    
    vetorB[0] = 5;
    vetorB[1] = 4;
    vetorB[2] = 3;
    vetorB[3] = 2;
    vetorB[4] = 1;
    
    bubbleSort(vetorB, 5);
    
    printf("Bubble Sort: \n\n");
    for(int i = 0; i < 5; i++){
        printf("%i\n", vetorB[i]);
    }
    
    return 0;
}
