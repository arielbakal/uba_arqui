#include <stdio.h>

typedef struct {
    char* nombre;
    int vida;
    double ataque;
    double defensa;
} monstruo_t;

int main() {
    monstruo_t evolution(monstruo_t monstruo) {
        monstruo.ataque += 10;
        monstruo.defensa += 10;
        return monstruo;
    };

    monstruo_t cthulhu = {"Cthulhu", 1000, 300, 10};
    printf("%s (Ataque: %f, Defensa: %f)\n", cthulhu.nombre, cthulhu.ataque, cthulhu.defensa);

    monstruo_t cthulhu_evoluted = evolution(cthulhu);
    printf("%s (Ataque: %f, Defensa: %f)\n", cthulhu_evoluted.nombre, cthulhu_evoluted.ataque, cthulhu_evoluted.defensa);


    return 0;
}