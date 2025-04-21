#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// uint16_t *secuencia(uint16_t n){
//     uint16_t arr[n];
//     for(uint16_t i = 0; i < n; i++)
//         arr[i] = i;
//     return arr;
// }

// int main(){
    // uint16_t *arr = secuencia(10);
    // printf("%d\n", arr[0]);
    // return 0;
// }

uint16_t *secuencia(uint16_t n){
    uint16_t *arr = malloc(n * sizeof(uint16_t));
    if (arr == NULL) {
        // Manejar el error de asignaci´on de memoria
        return NULL;
    }
    for(uint16_t i = 0; i < n; i++)
       arr[i] = i;
    return arr;
}

int main(){
    uint8_t n = 10;
    uint16_t *arr = secuencia(n);
    if (arr == NULL) {
        // Manejar el error de asignaci´on de memoria
        return 1;
    }
    for(uint16_t i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    free(arr); // Liberar la memoria reservada
    return 0;
}

