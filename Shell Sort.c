#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



void shellSort(int *vetor, int tam){

    int cont = tam/2;
    int aux, aux2;
    
    
    do{
        for(int i = 0; i < tam; i++){
            if(vetor[i] > vetor[i+cont] && (i+cont) < tam){
                aux = vetor[i];
                vetor[i] = vetor[i+cont];
                vetor[i+cont] = aux;
            }
            
            for(int j = i; j > 0; j--){
                if(vetor[j] < vetor[j-1]){
                    aux2 = vetor[j];
                    vetor[j] = vetor[j-1];
                    vetor[j-1] = aux2;
                }
            }
        }
        
        if(cont % 2 == 0)
            cont = cont - 3;
        else
            cont = cont - 2;
            
    }while(cont > 0);
    
}

int main(){
    
    //////Shell Sort//////////
    int tam = 40;
    int vetor[tam];
    
    printf("normal vector: \n\n");
    for(int i = 0; i < tam; i++){
        vetor[i] = rand()% 100;
        printf("%i ", vetor[i]);
    }
    
    shellSort(vetor, tam);
    
    printf("\n\nOrdered vector:\n\n");
    for(int i = 0; i < tam; i++){
        printf("%i ", vetor[i]);
    }
    
    
    return 0;
}
