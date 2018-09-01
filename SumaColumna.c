

#include <stdio.h>
#include <stdlib.h>

int main() {
    int sumadiagonal1;
    int sumadiagonal2;
    int fil=0,col=0,filas,columnas;
    printf("Ingrese el numero de filas\n");
    scanf("%d",&filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d",&columnas);
    int a[filas][columnas];
    int b[filas][columnas];
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
    
    
}

