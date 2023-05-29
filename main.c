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

int main(){struct pelicula peliculas[100];
    int numPeliculas = 0;
    int indice;
    int opcion;
    do {
        menu();
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                cargarPelicula(&peliculas[numPeliculas]);
                numPeliculas++;
                break;
            case 2:
                printf("Ingrese el número de película a modificar: ");
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
                printf("Opción incorrecta.\n");
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

void listarPeliculas(struct pelicula* peliculas, int numPeliculas) {
    printf("Lista de películas:\n");
    for (int i = 0; i < numPeliculas; i++) {
        printf("Película %d:\n", i + 1);
        printf("Título: %s\n", peliculas[i].titulo);
        printf("Género: %s\n", peliculas[i].genero);
        printf("Duración: %d minutos\n", peliculas[i].duracion);
        printf("Año: %d\n", peliculas[i].anio);
        printf("Director: %s\n", peliculas[i].director);
        printf("\n");
    }
}
