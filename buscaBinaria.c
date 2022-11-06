/* 
ALGORITMO DE BUSCA SEQUENCIAL ORDENADA

VANTAGEM: Eficiência
DESVANTAGEM: O vetor tem de estar ordenado
*/

#include <stdio.h>

int buscaBinaria(int *v, int tamanho, int x) {
    
    int inicio=0, meio, fim=tamanho-1;

    while (inicio<=fim) {

        meio = (inicio+fim)/2; // meio é o elemento central do vetor

        /* se a chave for menor que o elemento do meio, a busca é filtrada
        para somente os elementos da esquerda (menores que do meio) */ 
        if (x<v[meio])
            fim = meio-1;
        
        /* CASO CONTRÁRIO:
        - chave é maior que o elemento central, então a busca passa a ser somente nesses elementos;
        - chave é o próprio elemento central, então o retorno é o próprio elemento */
        else {
            if (x>v[meio])
                inicio = meio+1;
            else 
                return meio; // elemento desejado já é o do meio (melhor caso)
        }
    }

    return -1; // elemento não encontrado 


}

int main(void) {

    int chave, tamanho=9;
    int v[] = {1, 3, 5, 6, 9, 12, 15, 20, 25};

    // instrução ao usuário
    printf("Qual valor deseja encontrar? ");
    scanf("%d", &chave);

    // saída caso elemento esteja no vetor
    if(buscaBinaria(v, tamanho, chave) != -1) {
        printf("\nIsso!! Valor foi encontrado no vetor\n");
    }
    // saída caso elemento não esteja no vetor
    else 
        printf("\nSinto muito!! O valor nao foi encontrado no vetor\n");

    return 0;
    
}