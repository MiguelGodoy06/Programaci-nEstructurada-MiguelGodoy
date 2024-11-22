#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudiante.h"

// Array para almacenar los estudiantes
Estudiante estudiantes[MAX_ESTUDIANTES];
int num_estudiantes = 0; // Contador de estudiantes

// Función para agregar un estudiante a la lista
void agregarEstudiante(char *nombre, int edad, float promedio) {
    if (num_estudiantes < MAX_ESTUDIANTES) { // Verificamos si hay espacio en la lista
        // Copiamos los datos del estudiante en la lista
        strcpy(estudiantes[num_estudiantes].nombre, nombre);
        estudiantes[num_estudiantes].edad = edad;
        estudiantes[num_estudiantes].promedio = promedio;
        num_estudiantes++; // Incrementamos el contador de estudiantes
    } else {
        printf("No se pueden agregar más estudiantes.\n"); // Mensaje de error si la lista está llena
    }
}

// Función para mostrar la lista de estudiantes
void verEstudiantes() {
    for (int i = 0; i < num_estudiantes; i++) { // Recorremos la lista de estudiantes
        // Imprimimos los datos de cada estudiante
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiantes[i].nombre, estudiantes[i].edad, estudiantes[i].promedio);
    }
}

// Función para eliminar un estudiante de la lista
void eliminarEstudiante(int index) {
    if (index >= 0 && index < num_estudiantes) { // Verificamos si el índice es válido
        // Desplazamos los estudiantes para llenar el hueco
        for (int i = index; i < num_estudiantes - 1; i++) {
            estudiantes[i] = estudiantes[i + 1];
        }
        num_estudiantes--; // Decrementamos el contador de estudiantes
    } else {
        printf("Índice no válido.\n"); // Mensaje de error si el índice no es válido
    }
}

// Función para copiar una estructura Estudiante
Estudiante copiarEstudiante(Estudiante original) {
    Estudiante copia;
    strcpy(copia.nombre, original.nombre);
    copia.edad = original.edad;
    copia.promedio = original.promedio;
    return copia;
}

// Función para imprimir un estudiante (por valor)
void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

// Función para imprimir un estudiante (por referencia)
void imprimirEstudianteRef(const Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

// Función para imprimir un estudiante (por dirección)
void imprimirEstudiantePtr(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}