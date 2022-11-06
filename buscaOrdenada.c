/* 
ALGORITMO DE BUSCA SEQUENCIAL ORDENADA

VANTAGEM: Elementos duplicados
DESVANTAGEM: Custo da ordenação
*/

#include <stdio.h>

int buscaOrdenada(int *v, int tamanho, int x) {

    int i=0;

    /* percorre ovetor sob a condição de 
    x ser um valor maior que o da posição atual */
    while (i<tamanho && v[i]<x) {
        i++;
    }

    if (x==v[i]) // caso x seja encontrado, output é o próprio x
        return i;
    else   // caso x não seja encontrado, o output é -1
        return -1;

}

int main(void) {

    int chave, tamanho=9;
    int v[] = {1, 3, 5, 6, 9, 20, 33, 56, 70, 100};

    // instrução ao usuário
    printf("Qual valor deseja encontrar? ");
    scanf("%d", &chave);

    // saída caso elemento esteja no vetor
    if(buscaOrdenada(v, tamanho, chave) != -1) {
        printf("\nIsso!! Valor foi encontrado no vetor\n");
    }
    // saída caso elemento não esteja no vetor
    else 
        printf("\nSinto muito!! O valor nao foi encontrado no vetor\n");

    return 0;
}