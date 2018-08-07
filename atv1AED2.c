#include <stdio.h>

int main (){
    int tam = 10;
    int vet [10]= {55,6,0,7,88,54,1,7,13,30};

    insercao(vet,tam);
    selecao(vet,tam);
    bubble(vet,tam);
    
    return 0;
}

void imprimeVetor(int vet[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("%d, ",vet[i]);}
}

void insercao (int vet[], int tam){
int i, j, x;
for (i=2; i<=tam; i++){
    x = vet[i];
    j=i-1;
    vet[0] = x; 
    while (x < vet[j]){
        vet[j+1] = vet[j];
        j--;
    }
    vet[j+1] = x;
    imprimeVetor(vet,tam);
}

void selecao (int vet[], int tam){
    int i, j, min, x;
    for (i=1; i<=n-1; i++){
        min = i;
    for (j=i+1; j<=n; j++){
            if (vet[j] < vet[min])
            min = j;
    }
    x = vet[min];
    vet[min] = vet[i];
    vet[i] = x;
    }
    imprimeVetor(vet,tam);
}

void bubble (int vet[], int tam) {
    int k, j, aux;

    for (k = 1; k < tam; k++) {
        printf("\n[%d] ", k);

        for (j=0; j<tam-1; j++) {
            printf("%d, ", j);

            if (vet[j] > vet[j + 1]) {
                aux = vetor[j];
                vet[j] = vet[j + 1];
                vet[j+1] = aux;
            }
        }
    }
    imprimeVetor(vet,tam);
}

