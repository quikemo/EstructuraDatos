#include <stdio.h>
#include <stdlib.h>

int main() {
    int fil=0,col=0,filas,columnas;
    printf("Ingrese el numero de filas\n");
    scanf("%d",&filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d",&columnas);
    int a[filas][columnas];
    int b[filas][columnas];
    int c[filas][columnas];
    //LLENAR MATTRIZ A
 
    printf("Ingrese la matriz A\n");
    for (fil = 0; fil < filas; fil++) {
        for (col = 0; col < columnas; col++) {
            printf("Numero (%d,%d): ",fil,col);
            scanf("%d",&a[fil][col]);
        }
    }
    printf("Ingrese la matriz B\n");
    for (fil = 0; fil < filas; fil++) {
        for (col = 0; col < columnas; col++) {
            printf("Numero (%d,%d): ",fil,col);
            scanf("%d",&b[fil][col]);
        }
    }
   
    for (fil = 0; fil < filas; fil++) {
        printf("\n");
        for (col = 0; col < columnas; col++) {
            c[fil][col] = b[col][fil]*a[fil][col];
        }
    }
       printf("MATRIZ C");
    for (fil = 0; fil < filas; fil++) {
        printf("\n");
        for (col = 0; col < columnas; col++) {
            printf("%d  ",c[fil][col]);
        }
    }
    printf("\n");
    return 0;
}