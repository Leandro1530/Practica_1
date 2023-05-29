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

    printf("////////////////////////////////////////////////////////////////////////////////////////////////");
    printf("\n\n\n");
    printf("--------------------------------------------------\n");
    printf("|   ~~ ADMINSTRADOR DE CARTELERA CINEMA BUG ~~   |\n");
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("   *** MENU ***");
    printf("\n\n");
    printf("1. Cargar pelicula\n");
    printf("2. Modificar pelicula\n");
    printf("3. Listar peliculas\n");
    printf("4. Salir\n\n");
}

void cargarPelicula(struct pelicula* p) {

    printf("\n\n");
    printf("   *** Carga de pelicula ***");
    printf("\n");

    printf("Ingrese el titulo: ");
    scanf(" %[^\n]s", p->titulo);

    printf("Ingrese el genero: ");
    scanf(" %[^\n]s", p->genero);

    printf("Ingrese la duracion (en minutos): ");
    scanf("%d", &p->duracion);

    printf("Ingrese el anio de la pelicula: ");
    scanf("%d", &p->anio);

    printf("Ingrese el nombre del director: ");
    scanf(" %[^\n]s", p->director);

}




void modificarPelicula(struct pelicula* p) {
    printf("\n\n");
    printf("   *** Modificar de pelicula ***");
    printf("\n\n");

    printf(" - Ingrese el titulo: ");
    scanf(" %[^\n]s", p->titulo);

    printf(" - Ingrese el genero: ");
    scanf(" %[^\n]s", p->genero);

    printf(" - Ingrese la duracion (en minutos): ");
    scanf("%d", &p->duracion);

    printf(" - Ingrese el anio de la pelicula: ");
    scanf("%d", &p->anio);

    printf(" - Ingrese el nombre del director: ");
    scanf(" %[^\n]s", p->director);
}
