#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hola";
    char str2[5];
    char str3[] = "Chau";

    strcpy(str2, str1); // copia el string en la memoria de otro string
    strcpy(str3, str1);
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    char str4[] = "Aji";
    strcat(str4, " picante"); // copia el string y lo concatena al final de otro string
    printf("%s\n", str4);

    char str5[20] = "Hello World";
    printf("%zu\n", strlen(str5)); // retorna la cantidad de chars hasta el null terminating char
    printf("%zu\n", sizeof(str5)); // retorna el total de memoria reservada para el string 

    char str6[] = "ABCF";
    char str7[] = "ABCE";
    printf("%d \n",  strcmp(str6, str7)); // compara los valores ASCII de los chars y retorna la diferencia entre el primer y el segundo string

    return 0;
}