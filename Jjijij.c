/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arreglo[5]={0,2,4,6,8};
    int *ptr = arreglo;
    
    for (int i = 0; i <5; i++){
        printf("Elemento %d: %d %p\n",i,*ptr,&*ptr);
        ptr++;
    }
}


