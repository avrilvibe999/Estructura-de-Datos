/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=10;
    int b=30;
    
    int *ptr_a = &a;
    int *ptr_b = &b;
    
    int resultado = *ptr_a + *ptr_b;
    printf("Resultado: %d \n",resultado);
    *ptr_a = 30;
    printf("Valor a: %d \nValor b: %d",*ptr_a,*ptr_b);
}

