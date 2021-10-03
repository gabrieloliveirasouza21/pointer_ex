#include <stdio.h> // inclusão da biblioteca stdio.h para funções de input e output

    #include <stdlib.h> // para uso de funçoes padrao, usa-se stdlib.h

        /*na criação de um vetor, na memória do computador é criado um espaço de tamanho N*K, onde
        N é o a dimensão do vetor, isto é, seu tamanho, e K representa o espaço para armazenar determinado
        tipo de dado */
        int main(void) {


        // o que seria alocação de memória estática e dinâmica ?

        // o que seria memória estática ?
        /* mamória estática seria aquela jádecidida pelo programador
        ou seja, aquela que é escritta no código*/


        // o que seria memoria dinâmica ?
        /* a alocação dinaminca, voce reserva espaços da memória*
        sob demanda, por exemplo quando não se sabe a quantidade
        de informações manipuladas */

        // o que é alocar ?



        int vet[10] = {
        0,
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9
        }

        ; // declaração de um vetor
        int * pvet; // declaração de um ponteiro
        pvet = vet; // ponteiro apontando para o vetor vet
        *(pvet + 3) = 13;
        /* aqui o ponteiro *pvet aponta para o vetor na posição pvet + 3,
        o que acontece é que quando um ponteiro aponta para o vetor, ele recebe o valor de vet[0], isto é, o pvet recebe
        o valor de vet[0], por isso o pvet, para colocar em alguma posição do vetor, necessita colocar o ponteiro do
        vetor
        adicionado a posição que deseja colocar, já que o vetor começa a contar na posição 0*/
        // essa função quer dizer que o vetor na posição 3 irá receber o valor 13
        vet[5] = 15; // essa função quer dizer que o vetor na posição 5 irá receber o valor 15

        for (int i = 0; i < 10; i++) { printf("vet[%d]=%d\t*(pvet+%d)=%d\n", i, vet[i], i, *(pvet + i)); } /* nesse loop
            repetindo de 0 até 9, irá aprensentar o vetor na posição i, o valor do ponteiro pvet(cujo aponta para o
            vetor) na posição i, como o ponteiro já inicia apontando para o vet[0], necessita de que para imprimir o
            ponteiro adiciona +1 ao ponteiro*/ printf("Tamanho do vetor : %ld\n", sizeof(vet[10])); /* função sizeof
            retorna um valor inteiro em bytes utilizada pelo tipo tipo da variável*/ //Incrementação de ponteiros for
            (i=0; i < 10; i++); { printf("vet[%d]=%d\t *(pvet+%d)=%d\n", i, vet[i], i, *(pvet++)); } }