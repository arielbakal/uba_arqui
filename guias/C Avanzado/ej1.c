#include <stdio.h>

typedef struct {
    char* nombre;
    int vida;
    double ataque;
    double defensa;
} monstruo_t;

int main() {
    monstruo_t monstruo[2] = {
        {"Monster 1", 100, 23.4, 10.2},
        {"Monster 2", 200, 66.6, 3.14}
    };

    for (int i=0; i<2; i++) {
        printf("%s (Vida: %d)\n", monstruo[i].nombre, monstruo[i].vida);
    }

    return 0;
}