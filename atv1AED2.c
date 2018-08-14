#include <stdio.h>
<<<<<<< HEAD

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
=======
#define TAM 10


void imprimeVetor(int vet[]){
    int i=0;
    for(i=0; i<TAM; i++)
        printf("%d, ",vet[i]);
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
>>>>>>> fixes
            if (vet[j] < vet[min])
            min = j;
    }
    x = vet[min];
    vet[min] = vet[i];
    vet[i] = x;
    }
<<<<<<< HEAD
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
=======
    imprimeVetor(vet);
}

void bubble (int vet[]) {
    int i, j, aux;

    for (i = 1; i < TAM; i++) {
        for (j=0; j<TAM-1; j++) {
            if (vet[j] > vet[j + 1]) {
                aux = vet[j];
>>>>>>> fixes
                vet[j] = vet[j + 1];
                vet[j+1] = aux;
            }
        }
    }
<<<<<<< HEAD
    imprimeVetor(vet,tam);
=======
    imprimeVetor(vet);
}

int main (){
    int vet [TAM];
    int i;

    for (i=0; i<TAM; i)


    insercao(vet);
    selecao(vet);
    bubble(vet);
    
    return 0;
>>>>>>> fixes
}

