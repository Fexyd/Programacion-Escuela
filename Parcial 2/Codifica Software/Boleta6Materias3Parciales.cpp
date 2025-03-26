/*
Este programa calcula el promedio de 6 materias en 3 parciales diferentes.
Permite ingresar las calificaciones de cada materia en cada parcial y
calcula automáticamente el promedio final de cada materia.
*/

#include <iostream>  // Incluye la biblioteca para operaciones de entrada/salida estándar
using namespace std; // Utiliza el espacio de nombres estándar

int main(){  // Función principal del programa

    // Declaración de arreglos para almacenar calificaciones
    double mats[6];  // Arreglo para almacenar información de las 6 materias
    double p1[6];    // Arreglo para almacenar calificaciones del primer parcial
    double p2[6];    // Arreglo para almacenar calificaciones del segundo parcial
    double p3[6];    // Arreglo para almacenar calificaciones del tercer parcial

    cout << "Introduce las calificaciones del primer parcial" << endl;  // Solicita al usuario ingresar calificaciones

    // Bucle para recorrer las 6 materias
    for(int i = 0; i < 6; i++){  // Variable i como índice para cada materia

        cout << "Materia " << i+1 << endl;  // Muestra el número de materia (sumamos 1 para mostrar materias del 1 al 6)
        cin >> p1[i];  // Almacena la calificación en el arreglo del primer parcial

    system("cls");  // Limpia la pantalla para mejorar la experiencia del usuario
    cout << "Introduce las calificaciones del segundo parcial" << endl;  // Solicita calificaciones del segundo parcial

    // Bucle para recorrer las 6 materias del segundo parcial
    for(int i = 0; i < 6; i++){
        cout << "Materia " << i+1 << endl;  // Muestra el número de materia
        cin >> p2[i];  // Almacena la calificación en el arreglo del segundo parcial
    }

    system("cls");  // Limpia la pantalla nuevamente
    cout << "Introduce las calificaciones del tercer parcial" << endl;  // Solicita calificaciones del tercer parcial

    // Bucle para recorrer las 6 materias del tercer parcial
    for(int i = 0; i < 6; i++){
        cout << "Materia " << i+1 << endl;  // Muestra el número de materia
        cin >> p3[i];  // Almacena la calificación en el arreglo del tercer parcial
    }

    // Declaración de arreglo para almacenar los promedios
    double promedio[6];  // Arreglo para almacenar los promedios de las 6 materias

    // Cálculo del promedio para cada materia
    // Se suman las calificaciones de los tres parciales y se dividen entre 3

    promedio[0] = (p1[0] + p2[0] + p3[0]) / 3;  // Cálculo del promedio de la primera materia
    promedio[1] = (p1[1] + p2[1] + p3[1]) / 3;  // Cálculo del promedio de la segunda materia
    promedio[2] = (p1[2] + p2[2] + p3[2]) / 3;  // Cálculo del promedio de la tercera materia
    promedio[3] = (p1[3] + p2[3] + p3[3]) / 3;  // Cálculo del promedio de la cuarta materia
    promedio[4] = (p1[4] + p2[4] + p3[4]) / 3;  // Cálculo del promedio de la quinta materia
    promedio[5] = (p1[5] + p2[5] + p3[5]) / 3;  // Cálculo del promedio de la sexta materia

    // Muestra de los promedios calculados para cada materia
    // Se utiliza un bucle para mostrar los 6 promedios

    for(int i = 0; i < 6; i++){  // Variable i como índice para cada materia

        cout << "Tu promedio en la materia " << i+1 << " fue de: " << promedio[i] << endl;  // Muestra el promedio de cada materia

     }


    return 0;  // Finaliza el programa con código de retorno 0 (ejecución exitosa)
}  // Fin de la función main

/*
Felicidades! Ahora sabes cómo calcular promedios para múltiples materias y parciales.
Esto solo es una descomposición del programa y si quieres saber más detalladamente cómo funciona
un arreglo bidimensional puedes entrar a la carpeta de curso de programación.
*/
