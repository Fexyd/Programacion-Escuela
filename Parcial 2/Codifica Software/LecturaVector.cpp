/*
Este programa almacena las calificaciones de 6 materias diferentes en un arreglo,
calcula el promedio de estas calificaciones y muestra todos los resultados.
Demuestra el uso de arreglos unidimensionales para almacenar y procesar datos.
*/

#include <iostream>  // Incluye la biblioteca para operaciones de entrada/salida estándar
using namespace std;  // Utiliza el espacio de nombres estándar

int main(){  // Función principal del programa

    double mats[6];  // Arreglo para almacenar las calificaciones de 6 materias

    cout << "Introduce cuanto sacaste en la materia 1" << endl;  // Solicita la calificación de la primera materia
    cin >> mats[0];  // Almacena la calificación en el primer elemento del arreglo (índice 0)
    cout << "Introduce cuanto sacaste en la materia 2" << endl;  // Solicita la calificación de la segunda materia
    cin >> mats[1];  // Almacena la calificación en el segundo elemento del arreglo (índice 1)
    cout << "Introduce cuanto sacaste en la materia 3" << endl;  // Solicita la calificación de la tercera materia
    cin >> mats[2];  // Almacena la calificación en el tercer elemento del arreglo (índice 2)
    cout << "Introduce cuanto sacaste en la materia 4" << endl;  // Solicita la calificación de la cuarta materia
    cin >> mats[3];  // Almacena la calificación en el cuarto elemento del arreglo (índice 3)
    cout << "Introduce cuanto sacaste en la materia 5" << endl;  // Solicita la calificación de la quinta materia
    cin >> mats[4];  // Almacena la calificación en el quinto elemento del arreglo (índice 4)
    cout << "Introduce cuanto sacaste en la materia 6" << endl;  // Solicita la calificación de la sexta materia
    cin >> mats[5];  // Almacena la calificación en el sexto elemento del arreglo (índice 5)
    cout << endl;  // Inserta una línea en blanco para mejorar la presentación

    // Calcula el promedio sumando todas las calificaciones y dividiendo entre el número de materias
    double promedio = (mats[0] + mats[1] + mats[2] + mats[3] + mats[4] + mats[5]) / 6;

    // Muestra todas las calificaciones almacenadas
    cout << "La materia 1 sacaste: " << mats[0] << endl;  // Muestra la calificación de la primera materia
    cout << "La materia 2 sacaste: " << mats[1] << endl;  // Muestra la calificación de la segunda materia
    cout << "La materia 3 sacaste: " << mats[2] << endl;  // Muestra la calificación de la tercera materia
    cout << "La materia 4 sacaste: " << mats[3] << endl;  // Muestra la calificación de la cuarta materia
    cout << "La materia 5 sacaste: " << mats[4] << endl;  // Muestra la calificación de la quinta materia
    cout << "La materia 6 sacaste: " << mats[5] << endl;  // Muestra la calificación de la sexta materia
    cout << endl;  // Inserta otra línea en blanco para mejorar la presentación
    cout << "Y tu promedio fue de: " << promedio << endl;  // Muestra el promedio calculado

    return 0;  // Finaliza el programa con código de retorno 0 (ejecución exitosa)
}  // Fin de la función main

/*
Este programa demuestra cómo utilizar arreglos unidimensionales para almacenar
datos relacionados (calificaciones) y realizar operaciones con ellos (calcular el promedio).
El promedio es una medida estadística que nos permite evaluar el rendimiento general
en todas las materias.
*/
