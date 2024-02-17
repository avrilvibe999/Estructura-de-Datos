/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero = 42;
    int *ptrNum = &numero;
    
    printf("Contenido variable 'numero': %d\n",numero);
    printf("Dirección de la variable 'numero': %p\n",&numero);
    printf("Contenido del puntero 'ptrNum': %p\n",ptrNum);
    printf("Valor al que apunta 'ptrNum': %d\n",*ptrNum);
    printf("Direción del puntero 'ptrNum': %p\n",&ptrNum);
    printf("Wat is dis: %p",*&ptrNum);
    
    return 0;
}

