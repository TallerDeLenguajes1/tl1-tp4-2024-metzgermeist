#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*---estructuras---*/
    char tareas[6][10] = {"limpiar", "ordenar", "repositar", "vender", "cobrar", "cuidado"};
    struct Tarea
    {
        int TareaID;       // Numérico autoincremental comenzando en 1000
        char *Descripcion; //
        int Duracion;      // entre 10 – 100
        
    } typedef Tarea;

    struct Nodo
    {
        Tarea T;
        Nodo *Siguiente;

    } typedef Nodo;

    Tarea crearTarea(int ID)
    {
        Tarea nuevaLabor;

        nuevaLabor.TareaID = ID;

        int indice = rand() % 5;
        int longitudNombre = strlen(tareas[indice]) + 1;

        nuevaLabor.Descripcion = malloc(sizeof(char) * longitudNombre);

        strcpy(nuevaLabor.Descripcion, tareas[indice]);

        nuevaLabor.Duracion = rand() % 91 + 10;

        return nuevaLabor;

    }

    Nodo* crearNodo(Tarea nuevaLabor)
    {

    }

void main()
{
}