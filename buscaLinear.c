/* 
ALGORITMO DE BUSCA LINEAR
    
VANTAGEM: Simplicidade
DESVANTAGEM: Elementos duplicados
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaLinear(int *v, int tamanho, int x) {
    
    // percorre o vetor até encontrar valor desejado pela primeira vez
    for (int i=0; i<tamanho; i++) {
        if(x==v[i])
            return i;
    }

    // elemento não foi encontrado
    return -1;

}

int main(void) {

    int chave, tamanho=100, v[tamanho];

    srand(time(NULL));

    // preenchendo vetor com 100 elementos aleatórios
    for (int i=0; i<tamanho; i++) {
        v[i] = rand()%100;
    }

    // instrução ao usuário
    printf("Qual valor deseja encontrar? ");
    scanf("%d", &chave);

    // saída caso elemento esteja no vetor
    if(buscaLinear(v, tamanho, chave) != -1) {
        printf("\nIsso!! Valor foi encontrado no vetor\n");
    }
    // saída caso elemento não esteja no vetor
    else 
        printf("\nSinto muito!! O valor nao foi encontrado no vetor\n");

    return 0;

}