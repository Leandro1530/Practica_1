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
int main(){

}
