/*
Este programa almacena calificaciones en un arreglo unidimensional.
Demuestra el uso básico de vectores para guardar y mostrar datos.
*/

#include <iostream>  // Incluye la biblioteca para operaciones de entrada/salida estándar
using namespace std; // Utiliza el espacio de nombres estándar

int main(){  // Función principal del programa

    // Declaración de un arreglo para almacenar 3 calificaciones
    // Se utiliza el tipo int para almacenar números enteros
    int mats[3];  // Arreglo llamado "mats" que puede almacenar 3 calificaciones

    // Asignación de valores a cada posición del arreglo
    mats[0] = 10;  // Asigna el valor 10 al primer elemento del arreglo (índice 0)
    mats[1] = 8;   // Asigna el valor 8 al segundo elemento del arreglo (índice 1)
    mats[2] = 6;   // Asigna el valor 6 al tercer elemento del arreglo (índice 2)

    // Nota: Los índices de los arreglos en C++ comienzan en 0, no en 1
    // Por lo tanto, el primer elemento tiene índice 0, el segundo tiene índice 1, etc.

    // Muestra los valores almacenados en el arreglo
    cout << "En la materia 1 sacaste: " << mats[0] << endl;  // Muestra el valor del primer elemento
    cout << "En la materia 2 sacaste: " << mats[1] << endl;  // Muestra el valor del segundo elemento
    cout << "En la materia 3 sacaste: " << mats[2] << endl;  // Muestra el valor del tercer elemento

    // El programa ha mostrado exitosamente las tres calificaciones almacenadas

    return 0;  // Finaliza el programa con código de retorno 0 (ejecución exitosa)
}  // Fin de la función main

/*
Felicidades! Ahora sabes cómo utilizar arreglos para almacenar múltiples valores.
Esto solo es una descomposición del programa y si quieres saber más detalladamente cómo funciona
un arreglo puedes entrar a la carpeta de curso de programación.
*/
