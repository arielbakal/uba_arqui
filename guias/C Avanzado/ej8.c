#include <stdio.h>

int main(){
    char *str1 = "Hola";
    char str2[] = "Hola";
    printf("%s\n", str1);
    printf("%ld\n", sizeof(str1));
    printf("%s\n", str2);
    printf("%ld\n", sizeof(str2));

    // Podemos observar que *str1 es solo un puntero con un tamaño de 8bytes que apunta a un string "Hola" en otro espacio de memoria. 
    // Como solo apunta al primer char del string, no podemos editar "Hola" con un str1[0]. 
    // Lo unico que se puede hacer es reasignar, o bien apuntar, a otro string: str1 = "Adios".
    // str2[] es efectivamente un array de chars y si se puede editar. Observamos que su tamaño es de 5bytes (5 elementos)
    return 0;
}