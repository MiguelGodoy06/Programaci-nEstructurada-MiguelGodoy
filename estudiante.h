#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#define MAX_ESTUDIANTES 100 // Definimos el número máximo de estudiantes

// Definimos la estructura Estudiante
typedef struct {
    char nombre[50]; // Nombre del estudiante
    int edad;        // Edad del estudiante
    float promedio;  // Promedio del estudiante
} Estudiante;

// Declaración de funciones para manejar estudiantes
void agregarEstudiante(char *nombre, int edad, float promedio);
void verEstudiantes();
void eliminarEstudiante(int index);
Estudiante copiarEstudiante(Estudiante original);
void imprimirEstudiante(Estudiante est);
void imprimirEstudianteRef(const Estudiante *est);
void imprimirEstudiantePtr(Estudiante *est);

// Definición de la unión Datos
union Datos {
    int entero;
    float flotante;
    char cadena[50];
};

#endif // ESTUDIANTE_H