#include <stdio.h>

int buscaBinariaRec(int *v, int chave, int inicio, int fim) {

    int meio; 

    if (inicio<=fim) {
        meio  = (inicio+fim)/2; // meio é o elemento central do vetor

        // caso base, elemento procurado é da posição do meio
        if (chave == v[meio])
            return meio;
    
        else {

            /*  se o elemento procurado for menor que o elemento do meio,
                recursão nos elementos à direita do meio, 
                retrocedendo posições no vetor até o elemento do meio for o elemento desejado */
            if (chave < v[meio])
                return buscaBinariaRec(v, chave, inicio, meio-1);

            /*  se o elemento procurado for maior que o elemento do meio,
                recursão nos elementos à esquerda do meio, 
                começando pelo sucessor do elemento do meio atual até esse elemento for o desejado */
            else 
                return buscaBinariaRec(v, chave, meio+1, fim);
        }   
    }

    /* caso o elemento não seja encontrado em nenhumas das hipóteses acima, 
    ele não pertence ao vetor, então -1 é o resultado da função recursiva */
    return -1;
}


int main(void) {

    int chave;
    int v[] = {1, 3, 5, 6, 9, 12, 15, 20, 25};

    // instrução ao usuário
    printf("Qual valor deseja encontrar? ");
    scanf("%d", &chave);

    // saída caso elemento esteja no vetor
    if(buscaBinariaRec(v, chave, 0, 9) != -1) {
        printf("\nIsso!! Valor foi encontrado no vetor\n");
    }
    // saída caso elemento não esteja no vetor
    else 
        printf("\nSinto muito!! O valor nao foi encontrado no vetor\n");

    return 0;

}