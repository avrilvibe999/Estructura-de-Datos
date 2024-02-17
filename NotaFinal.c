/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float calif[7]={7,4,9,0,8,9.2,7.7};
    float decimas[7]={4,5,5,2,1,3,1};
    float *ptr_calif = calif;
    float *ptr_decimas = decimas;
    float califinal[7];
    
    for (int i = 0; i <7; i++){
        califinal[i]= *ptr_calif + (*ptr_decimas *0.10);
        *ptr_calif++;
        *ptr_decimas++;
        printf("Calificacion final: %f en la dirección: %p\nDirección del puntero calif: %p\nDirección del puntero decimas: %p\nValor al que apunta la dirección que guarda el puntero calif:%d\nValor al que apunta la dirección que guarda el puntero decimas:%d\n",califinal[i],&califinal[i],&*ptr_calif,&*ptr_decimas);
    }
}

