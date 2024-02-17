/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num=42;
    int *ptr = &num;
    printf("Valor: %d \n",*ptr);
    printf("Valor: %p \n",ptr);
    
    *ptr=99;
    printf("Valor: %d \n",num);
    printf("Valor: %d \n",*ptr);
}

