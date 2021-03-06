#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100000


void imprimeVetor(int vet[]){
    int i=0;
    for(i=0; i<TAM; i++)
        printf("%d ",vet[i]);
    printf("\n");
}

void insercao (int vet[]){
    int i, j, min,aux;
    for (i=1; i<TAM; i++){
        min = vet[i];
        j=i-1;
        while ((j>=0)&&(vet[j]>min)){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j+1] = min;
    }
    imprimeVetor(vet);
}

void selecao (int vet[]){
    int i, j, min, x;
    for (i=0; i<TAM; i++){
        min = i;
    for (j=i+1; j<TAM; j++){
            if (vet[j] < vet[min])
            min = j;
    }
    x = vet[min];
    vet[min] = vet[i];
    vet[i] = x;
    }
    imprimeVetor(vet);
}

void bubble (int vet[]) {
    int i, j, aux;

    for (i = 1; i < TAM; i++) {
        for (j=0; j<TAM-1; j++) {
            if (vet[j] > vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j+1] = aux;
            }
        }
    }
    imprimeVetor(vet);
}

int main (){
    clock_t tempo;
    int vet [TAM];
    int i;

    for (i=0; i<TAM; i++){
        //vet[i] = (rand()%TAM);
        vet[i] = i;
    }


    insercao(vet);
    //selecao(vet);
    //bubble(vet);
    
    
    printf("\n Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);
    
    return 0;
}

