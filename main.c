#include <stdio.h>

struct pelicula {
    char titulo[50];
    char genero[20];
    int duracion;
    int anio;
    char director[50];
};

void cargarPelicula(struct pelicula* p);
void modificarPelicula(struct pelicula* p);
void listarPeliculas(struct pelicula* peliculas, int numPeliculas);
void menu();

int main(){
return 0;
}

void menu() {
    printf("1. Cargar película\n");
    printf("2. Modificar película\n");
    printf("3. Listar películas\n");
    printf("4. Salir\n");
}