#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nombre;
    int edad;
} persona_t;

// METODO 1:
persona_t* crearPersona(char *nombre, int edad) {
    persona_t *p = malloc(sizeof *p); // reservo espacio para el struct
    p->nombre = malloc(sizeof nombre + 1); // reservo espacio para el nombre (ambos espacios estan en cualquier lado en memoria)
    strcpy(p->nombre, nombre);
    p->edad = edad;
    return p;
}
void destruirPersona(persona_t *p) {
    if (p) {
        free(p->nombre);
        free(p); // los libero por separados, ya que esta en distintos espacios de memoria
    }
}

// METODO 2:
persona_t* crearPersona2(char *nombre, int edad) {
    persona_t *p = malloc(sizeof *p + sizeof nombre + 1); // reservo espacio para el struct y el nombre (ambos espacios son consecutivos)
    p->nombre = (char*) (p+1); // apunto al espacio que asigne para el nombre (esta a continuacion del espacio para el struct)
    strcpy(p->nombre, nombre);
    p->edad = edad;
    return p;
}
void destruirPersona2(persona_t *p) {
    if (p) {
        free(p); // libero los espacios de struct y nombre, ya que los reservé juntos
    }
}

int main() {
    persona_t *carl = crearPersona("Carl Sagan", 62);
    printf("%s %d\n", carl->nombre, carl->edad);
    destruirPersona(carl);

    persona_t *banach = crearPersona2("Stefan Banach", 53);
    printf("%s %d\n", banach->nombre, banach->edad);
    destruirPersona2(banach);
    return 0;
}