#include <stdio.h>

int main(){
    char nombre[100];
    unsigned int edad;
    printf("Hola Mundo");
    printf("NOMBRE:");
    fgets(nombre, sizeof(nombre),stdin);
    printf("Hola %s", nombre);
    printf("EDAD: ");
    scanf("%u", edad);
    printf("Vas a cumplir %u", edad + 1);


    return 0;
}
