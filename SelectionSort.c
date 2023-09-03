#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void selectionSort(int *vetor, int tam){
    
    int menor, aux, pos;
    
    for(int i = 0; i != tam; i++){
        menor = vetor[i];
        pos = i;
        for(int k = i + 1; k < tam; k++){
            if(menor > vetor[k]){
                menor = vetor[k];
                pos = k;
            }
        }
        
        aux = vetor[i];
        vetor[i] = menor;
        vetor[pos] = aux;
    }
}

int main(){
    
    //////selectionSort///////////
    int vetorS[5];
    
    vetorS[0] = 100;
    vetorS[1] = 500;
    vetorS[2] = 300;
    vetorS[3] = 232;
    vetorS[4] = 11;
    
    selectionSort(vetorS, 5);
    
    printf("\n\n\nSelection Sort: \n\n");
    for(int i = 0; i < 5; i++){
        printf("%i\n", vetorS[i]);
    }
  
    return 0;
}
