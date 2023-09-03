#include <stdio.h>
#include <stdlib.h>

#define MAX 5
 
void quick_sort(int *vet, int esq, int dir){
    
    int aux;
     
    int i = esq;
    int j = dir;
    int pivo = vet[(esq + dir)/2];
     
    while(i <= j) {
        
        while(vet[i] < pivo && i < dir) {
            i++;
        }
        
        while(vet[j] > pivo && j > esq) {
            j--;
        }
        
        if(i <= j) {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++;
            j--;
            
        }
    }
     
     
    if(j > esq) {
        quick_sort(vet, esq, j);
        
    }
    
    if(i < dir) {
        quick_sort(vet, i, dir);
        
    }
}



int main(){
    
    int vet[MAX];
    
    printf("normal vector ");
    for(int i = 0; i < MAX; i++){
        vet[i] = rand()% 100;
        printf("%i ", vet[i]);
    }
    
    quick_sort(vet, 0, MAX - 1);
    
    printf("\n\nOrdered vector:  ");
    
    for(int i = 0; i < MAX; i++){
    printf("%d ", vet[i]);
    }
    
    return 0;
}

