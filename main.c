#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudiante.h"

// Función principal del programa
int main() {
    // Agregamos dos estudiantes a la lista
    agregarEstudiante("Miguel Godoy", 18, 9.3);
    agregarEstudiante("Pablo Moreno", 18, 3.3);

    // Mostramos la lista de estudiantes
    verEstudiantes();

    // Eliminamos el primer estudiante de la lista
    eliminarEstudiante(0);

    // Mostramos la lista de estudiantes nuevamente
    verEstudiantes();

    // Ejemplo de uso de malloc para crear una instancia de Estudiante
    Estudiante *estudiante2 = (Estudiante *)malloc(sizeof(Estudiante));
    strcpy(estudiante2->nombre, "Pablo Moreno");
    estudiante2->edad = 18;
    estudiante2->promedio = 3.3;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante2->nombre, estudiante2->edad, estudiante2->promedio);
    free(estudiante2); // Liberamos la memoria asignada

    // Ejemplo de puntero a estructura
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Miguel Godoy");
    estudiante1.edad = 18;
    estudiante1.promedio = 9.3;
    Estudiante *estudiante3 = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante3->nombre, estudiante3->edad, estudiante3->promedio);

    // Ejemplo de uso de la unión
    union Datos dato;
    dato.entero = 10;
    printf("Entero: %d\n", dato.entero);
    dato.flotante = 3.14;
    printf("Flotante: %.2f\n", dato.flotante);
    strcpy(dato.cadena, "Hola Mundo");
    printf("Cadena: %s\n", dato.cadena);

    // Ejemplo de copia de estructura
    Estudiante copia = copiarEstudiante(estudiante1);
    printf("Copia - Nombre: %s, Edad: %d, Promedio: %.2f\n", copia.nombre, copia.edad, copia.promedio);

    // Ejemplo de pasar estructura por valor
    imprimirEstudiante(estudiante1);

    // Ejemplo de pasar estructura por referencia
    imprimirEstudianteRef(&estudiante1);

    // Ejemplo de pasar estructura por dirección
    imprimirEstudiantePtr(&estudiante1);

    return 0;
}