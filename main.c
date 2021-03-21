#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char nombre[50];
int edad;
char sexo[50];
char club[50];
}Corredor;


int main()
{
    printf("Hola bienvenido a mi programa!");
    Corredor jugador1;
    printf("Ingrese el nombre del corredor: ");
    scanf("%s", jugador1.nombre);
    printf("\n Ingrese la edad del corredor: ");
    scanf("%d", &jugador1.edad);
    printf("\n Ingrese el sexo del corredor: ");
    scanf("%s", jugador1.sexo);
    printf("\n Ingrese el club del corredor: ");
    scanf("%s", jugador1.club);
    if(jugador1.edad <= 18){
        printf("Los datos del jugador son: \n");
    printf(" %s \n", jugador1.nombre);
    printf(" %d \n", jugador1.edad);
    printf(" %s \n", jugador1.sexo);
    printf(" %s \n", jugador1.club);
    printf(" y su clase es Juvenil");

    }
    if(jugador1.edad > 18 && jugador1.edad <= 40){
        printf("Los datos del jugador son: \n");
    printf(" %s \n", jugador1.nombre);
    printf(" %d \n", jugador1.edad);
    printf(" %s \n", jugador1.sexo);
    printf(" %s \n", jugador1.club);
    printf(" y su clase es Senior");

    }
    if(jugador1.edad >40){
            printf("Los datos del jugador son: \n");
    printf(" %s \n", jugador1.nombre);
    printf(" %d \n", jugador1.edad);
    printf(" %s \n", jugador1.sexo);
    printf(" %s \n", jugador1.club);
    printf(" y su clase es Veterano");
    }



    return 0;
}
