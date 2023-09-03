#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void countingSort(int *vet, int tam) {
    if (tam <= 1) {
        return;
    }
    
    int maior = vet[0];
    for (int i = 1; i < tam; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    int vetAux[maior + 1];

    for (int i = 0; i < maior + 1; i++) { 
        vetAux[i] = 0;
    }

    for (int i = 0; i < tam; i++) {
        vetAux[vet[i]]++;
    }

    int j = 0;
    for (int i = 0; i <= maior; i++) { 
        while (vetAux[i] != 0) {
            vet[j] = i;
            j++;
            vetAux[i]--;
        }
    }
}


int main(){

    int vetCounting[MAX];
   
    printf("Normal vector: ");
    for(int i = 0; i < MAX; i++){
        vetCounting[i] = rand()% 10;
        printf("%i ", vetCounting[i]);
    }
    
    
    countingSort(vetCounting, MAX);
    
    printf("\n\nOrdered vector: ");
    for(int i = 0; i < MAX; i++){
        printf("%i ", vetCounting[i]);
    }

    
    return 0;
}

