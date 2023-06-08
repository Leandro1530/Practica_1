#include <stdio.h>

struct pelicula {
    char titulo[50];
    char genero[20];
    int duracion;
    int anio;
    char director[50];
};

void cargarPelicula(struct pelicula* p, int indice);
void modificarPelicula(struct pelicula* p);
void listarPeliculas(struct pelicula* peliculas, int numPeliculas);
void ordenamientoBurbujaPorAnio(struct pelicula* peliculas, int numPeliculas);
void menu();

int main(){
    struct pelicula peliculas[10];
    int numPeliculas = 0;
    int indice;
    int opcion;

    do {
        menu();
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                cargarPelicula(&peliculas[numPeliculas], numPeliculas);
                numPeliculas++;
                break;
            case 2:
                printf("Ingrese el numero de pelicula a modificar: ");
                scanf("%d", &indice);
                modificarPelicula(&peliculas[indice]);
                break;
            case 3:
                listarPeliculas(peliculas, numPeliculas);
                break;
            
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion incorrecta.\n");
                break;
        }
        printf("\n");
    } while (opcion != 4);

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

void cargarPelicula(struct pelicula* p, int indice) {
    printf("\n\n");
    printf("   *** Carga de pelicula ***");
    printf("\n");

    printf(" - Indice: %d \n", indice);
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

void listarPeliculas(struct pelicula* peliculas, int numPeliculas) {
    printf("\n\n");
    printf("   *** Lista de peliculas ***");
    printf("\n\n");

    for (int i = 0; i < numPeliculas; i++) {
        printf(" - Pelicula %d:\n", i);
        printf(" - Titulo: %s\n", peliculas[i].titulo);
        printf(" - Genero: %s\n", peliculas[i].genero);
        printf(" - Duracion: %d minutos\n", peliculas[i].duracion);
        printf(" - Anio: %d\n", peliculas[i].anio);
        printf(" - Director: %s\n", peliculas[i].director);
        printf("\n");
    }
}

void ordenamientoBurbujaPorAnio(struct pelicula* peliculas, int numPeliculas){
    for (i=0; i<numPeliculas - 1; i++){
        for (j=0 ; j<numPeliculas - 1; j++){
            if (peliculas[j].anio > peliculas[j+1].anio){
                aux = peliculas[j];
                peliculas[j] = peliculas[j+1];
                peliculas[j+1] = aux;
            }
        }
    }
}