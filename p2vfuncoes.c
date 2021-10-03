#include <stdio.h>
#include <stdlib.h>

int main (){
    int *vetor;
    char *str;
    int numCelulas = 5, tamanhoStr = 10;
    /* aqui há a declaração de variaveis ponteiros : *vetor
    e *str. Também há a declaração das variáveis inteiras
    numCelulas a qual dirá a quantidade de celulas que irá alocar
    na memória, e outra a qual irá, também, armazenar o valor que cor-
    responderá ao tamanho do vetor que irá ser alocado na memória. */

    vetor = (int*)malloc(numCelulas * sizeof(int)); /* aqui é alocado na memória um espaço para onde o ponteiro *vetor estará apontando de valor
    numCelulas * sizeof(int), em que sizeof é o valor correspondente a quanto o tipo da variável ocupa na memória. O (int*)no 
    inicio indica que o valor retornado será inteiro, por padrão a função malloc retornará um tipo void, que é bem genérico, por
    isso se usa casting para int*/
    str = (char*)calloc(tamanhoStr, sizeof(char)); /* aqui o que acontece é bem parecido com malloc, a única diferença é que no 
    malloc os espaços de memória alocado guardam lixo de memória em seus valores, ja com calloc os valores dos espaços de memória
    alocada já estão zerados. E nesse caso a função calloc retorna o tipo char, isto é, o ponteiro str apontará para o espaço de
    memória alocado com calloc. */ 


    vetor = realloc(vetor,(numCelulas+5)*sizeof(int));//

    free(vetor);// aqui com o free os espaços passam a ser não alocados, porém continuam guardando o seu valor.
    free(str);
    return 0;
}
