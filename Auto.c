/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
struct Motor {
    int numeroCilindros;
    float capacidadLitros;
};
 
struct Llanta {
    int diametroPulgadas;
    char tipo[20];
};
 
struct Puerta {
    char tipoApertura[20];
    int electrica;
};
 
struct Auto {
    char marca[20];
    char modelo[20];
    struct Motor motor;
    struct Llanta llantaDelantera;
    struct Llanta llantaTrasera;
    struct Puerta puertaIzquierda;
    struct Puerta puertaDerecha;
};
 
int main() {
    printf("%d\n",((int)sizeof(struct Puerta))*8);
    printf("%d\n",((int)sizeof(struct Auto))*2); 
}
