#include <stdio.h>
#include <stdlib.h>

#define MAX 10

/////////////////////////////////////////////////////////////

void radixSort(int vet[], int TAM){
    
    int maior = vet[0];
    int val = 1; 
    int aux[TAM];
    int base[TAM];
    
    for(int i = 1; i < TAM; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    
    while((maior/val) > 0){
        
        for(int i = 0; i < TAM; i++){
            aux[i] = 10;
        }
        
        for(int i = 0; i < TAM; i++){
            base[i] = (vet[i]/val) % 10;
        }
        
        int cont = 0, pos = 0;
        
        while(cont != 11){
            for(int i = 0; i < TAM; i++){
                if(base[i] == cont){
                    aux[pos] = vet[i];
                    pos++;
                }
            }
            
            cont++;
        }
        
        for(int i = 0; i < TAM; i++){
            vet[i] = aux[i];
        }
        
        val*= 10;
    }
}



int main(){
    
    int vetRadix[MAX];

    
    printf("Normal vector: ");
    for(int i = 0; i < MAX; i++){
        vetRadix[i] = rand()% 100;
        printf("%i ", vetRadix[i]);
    }
    
    radixSort(vetRadix, MAX);
    
    printf("\n\nOrdered vector: ");
    for(int i = 0; i < MAX; i++){
        printf("%i ", vetRadix[i]);
    }

    return 0;
}

