/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>

void llenarArreglo(int arreglo[],int tamano){
    int valor;
    for (int i=0;i<tamano;i++) {
        printf("Ingresa un valor %d: ", i + 1);
        scanf("%d", &valor);
        arreglo[i]=valor;
    }
}

void imprimirArreglo(int arreglo[],int tamano){
    for (int i=0;i<tamano;i++) {
        printf("%d",arreglo[i]);
    }
    printf("\n");
}

void ordenarBurbuja(int arreglo[], int tamano) {
  int i, j;
  for (i=0;i<tamano-1; i++) {
    for (j=0;j<tamano-i-1;j++) {
      if (arreglo[j] > arreglo[j+1]) {
        int temp=arreglo[j];
        arreglo[j] = arreglo[j+1];
        arreglo[j+1]=temp;
      }
  }
  }
}
int main() {
    clock_t start, end;
    start = clock();
    int tamano;
    // Pedir al usuario que ingrese el tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);
    int arreglo[tamano];
    // Llenar el arreglo con valores ingresados por el usuario
    llenarArreglo(arreglo, tamano);
    printf("Arreglo original: ");
    imprimirArreglo(arreglo, tamano);
    ordenarBurbuja(arreglo, tamano);
    printf("Arreglo ordenado: ");
    imprimirArreglo(arreglo, tamano);
    end = clock();
    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Se tardo %f segundos\n", elapsed_time);
    return 0;
}
