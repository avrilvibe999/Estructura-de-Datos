/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

const int MAX_ESTUDIANTES=3;
const int MAX_LONG_NOMBRE = 50; 

struct Estudiante{
    int registro;
    char *nombre;
    char *carrera;
    int edad;
};

int main()
{
    struct Estudiante estudiantes[MAX_ESTUDIANTES];
    /*for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        printf("Estudiante #%d\n", i + 1);
        printf("Número de registro: ");
        scanf("%d", &(estudiantes[i].registro));
        printf("Nombre (con espacios entre nombre y apellido): ");
        scanf(" %[^\n]s", estudiantes[i].nombre);
        printf("Carrera: ");
        scanf(" %[^\n]s", estudiantes[i].carrera);
 
        printf("Edad: ");
        scanf("%d", &(estudiantes[i].edad));
        printf("\n");
    }
    */
    for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        printf("Estudiante #%d\n", i + 1);
        printf("Número de registro: ");
        scanf("%d", &(estudiantes[i].registro));
        printf("Nombre (con espacios entre nombre y apellido): ");
        scanf(" %[^\n]s", estudiantes[i].nombre);
        printf("Carrera: ");
        scanf(" %[^\n]s", estudiantes[i].carrera);
 
        printf("Edad: ");
        scanf("%d", &(estudiantes[i].edad));
        printf("\n");
    }
    
    return 0;
}

