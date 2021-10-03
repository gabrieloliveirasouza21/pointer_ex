#include <stdio.h>
#include <stdlib.h>

int main (){

    int a = 10, *b, **c; // declaração da variável a recebendo o valor 10
    // declaração de um ponteiro *b e um ponteiro para ponteiro **c
    b = &a; // instanciando o endereço da variável a para o ponteiro *b
    c = &b; // instanciando o endereço do ponteiro *b para o ponteiro **c

    printf("a=%d *b=%d **c=%d\n", a, *b, **c); // imprimir seus respectivos valores na tela
    //sendo eles os valores armazenados em cada um, não sua posição na memória, sendo = 10 para todos
    printf("pos 'a'=%p pos 'b'=%p pos '**c' = %p pos '*c'= %p pos 'c'=%p\n", &a, b,**c, *c, c); // aqui é mostrado o valor na memória
    //por isso a utilização do placeholder %p, para imprimir esses valores
    // o endereço de **c não é igual ao endereço de a, e sim igual ao endereço do ponteiro que aponta para a, isto é *b
    return 0;

}