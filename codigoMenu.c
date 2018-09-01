#include <stdio.h>
#define Tamano 5

int main() {
    int valor=1;
    char letra;
    int posicion;
    int Vector[Tamano] = {1, 2, 3, 4, 5};
    int opcion;

    do {
        printf("Eliga una opcion escribiendo el numero de la opcion\n");
        printf("1-Insertar valor\n");
        printf("2-Buscar valor\n");
        printf("3-Editar\n");
        printf("4-Borrar\n");
        printf("5-Salir\n");
        scanf("%d", & opcion);
        switch (opcion) {
            case 1:
                printf("En que posicion desea ingresar el valor de 1 a %d\n", (Tamano));
                
                scanf("%d", & posicion);


                if (posicion > 0 && posicion < (Tamano)) {
                    
                    if (Vector[posicion - 1] != 0) {
                        printf("La posicion en la que desea ingresar un valor ya esta ocupada\ndesea remplazar el valor(S/n)\n");
                        scanf("%s", & letra);
                        if (letra == 'S' || letra == 's') {
                            printf("Que valor desea ingresar\n");
                    scanf("%d", & valor);
                            Vector[posicion - 1] = valor;
                            printf("Se realizo el cambio con exito\n");
                            printf("%d ", Vector[0]);
                            printf("%d ", Vector[1]);
                            printf("%d ", Vector[2]);
                            printf("%d ", Vector[3]);
                            printf("%d ", Vector[4]);
                            printf("\n");
                        } else {
                            printf("%d ", Vector[0]);
                            printf("%d ", Vector[1]);
                            printf("%d ", Vector[2]);
                            printf("%d ", Vector[3]);
                            printf("%d ", Vector[4]);
                            printf("\n");
                            break;
                        }
                    } else {
                        Vector[posicion] = valor;
                        printf("Se inserto el valor correcamente\n");
                        printf("%d ", Vector[0]);
                        printf("%d ", Vector[1]);
                        printf("%d ", Vector[2]);
                        printf("%d ", Vector[3]);
                        printf("%d ", Vector[4]);
                        printf("\n");
                    }
                } else {
                    printf("La posicion que ingreso NO existe\n");
                }
                break;
            case 2:
                posicion = 0;
                valor = 0;
                printf("Ingrese el valor que desea buscar?\n");
                scanf("%d", & valor);
                printf("Buscando espere\n");
                for (int i = 0; i < Tamano; i++) {
                    if (valor == Vector[i]) {
                        posicion = i + 1;
                    }
                }
                if (posicion > 0) {
                    printf("El valor %d se encontro en la posicion: %d\n", valor, posicion);
                } else {
                    printf("No se econtro el valor\n");
                }
                break;
            case 3:
                printf("En que posicion desea editar\n");
                printf("%d ", Vector[0]);
                printf("%d ", Vector[1]);
                printf("%d ", Vector[2]);
                printf("%d ", Vector[3]);
                printf("%d ", Vector[4]);
                printf("\n");
                scanf("%d",&posicion);
                printf("Ingrese el valor\n");
                scanf("%d",&valor);
                Vector[posicion-1]= valor;
                printf("Se cambio con exito\n");
                printf("%d ", Vector[0]);
                printf("%d ", Vector[1]);
                printf("%d ", Vector[2]);
                printf("%d ", Vector[3]);
                printf("%d ", Vector[4]);
                printf("\n");
                break;
            case 4:
                printf("Que valor desea borrar?\n");
                scanf("%d",&valor);
                printf("%d ", Vector[0]);
                printf("%d ", Vector[1]);
                printf("%d ", Vector[2]);
                printf("%d ", Vector[3]);
                printf("%d ", Vector[4]);
                printf("\n");
                for(int i = 0; i<Tamano;i++){
                    if(Vector[i]==valor){
                        Vector[i]=0;
                    }
                }
                printf("Se borro con exito\n");
                printf("%d ", Vector[0]);
                printf("%d ", Vector[1]);
                printf("%d ", Vector[2]);
                printf("%d ", Vector[3]);
                printf("%d ", Vector[4]);
                printf("\n");
                break;
        }


    } while (opcion > 0 && opcion < 5);
    return 0;
}

