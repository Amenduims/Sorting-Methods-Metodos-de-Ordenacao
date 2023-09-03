#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void buildHeap(int *vet, int tam, int raiz){
     int ramificacao, valor;
     valor = vet[raiz];
    
     while(raiz <= tam/2){
        ramificacao = 2 * raiz;
        
        if(ramificacao < tam && vet[ramificacao] < vet[ramificacao + 1]){
           ramificacao++;
        }
        
        if(valor >= vet[ramificacao]){
           break;
        }
         
        vet[raiz] = vet[ramificacao];
        raiz = ramificacao;
     }
     vet[raiz] = valor;
}

void HeapSort(int *vet, int tam) {
    int troca;
    
    for(int i=tam/2; i >= 0; i-- ){
       buildHeap(vet, tam, i);
    }
    
    while(tam > 0){
        troca = vet[0];
        vet[0] = vet[tam];
        vet[tam] = troca;
        buildHeap(vet, --tam, 0);
    }
}



int main(){
    
    int vetHeap[MAX];
 
    printf("Normal vector: ");
    for(int i = 0; i < MAX; i++){
        vetHeap[i] = rand()% 100;
        printf("%i ", vetHeap[i]);
    }
    
    HeapSort(vetHeap, MAX - 1);
    
    printf("\n\nOrdered vector: ");
    for(int i = 0; i < MAX; i++){
        printf("%i ", vetHeap[i]);
    }

    
    return 0;
}

