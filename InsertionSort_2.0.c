#include <stdio.h>
#include <stdlib.h>

void Insertion_Sort(int vetor_01[], int qtd_elementos) {

    int i, j, aux;

    for(i = 1; i < qtd_elementos; i++) {

        aux = vetor_01[i];
        j = i - 1;

        while((aux < vetor_01[j]) && (j >= 0)) {

            vetor_01[j + 1] = vetor_01[j];
            j = j - 1;

        }

        vetor_01[j + 1] = aux;

    } 

}

int main(void) {

    int contador = 0;
    
    printf("Informe a quantidade de números do vetor: \n ");
    scanf("%d", &contador);

    int vetor_02[contador];

    for(int x = 0; x < contador; x++) {

        printf("Informe o %d do vetor: \n ", (x + 1));
        scanf("%d", &vetor_02[x]);

    }

    printf(" === VETOR DESORDENADO === \n ");

    for(int z = 0; z < contador; z++) {

        printf("[%d] ", vetor_02[z]);
        
    }

    printf("\n");
    printf("\n");

    Insertion_Sort(vetor_02, contador);

    printf(" === VETOR ORDENADO === \n ");

    for(int y = 0; y < contador; y++) {

        printf("[%d] ", vetor_02[y]);

    }

    printf("\n");


}

// DATA: 26/02/2021
// CRIADO POR: JORGE LUIS MOREIRA GOMES FILHO