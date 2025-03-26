/*
Este programa almacena la estatura y la edad de 5 personas en un arreglo bidimensional.
Demuestra el uso de arreglos bidimensionales para almacenar múltiples atributos
de varios elementos.
*/

#include<iostream>  // Incluye la biblioteca para operaciones de entrada/salida estándar
using namespace std; // Utiliza el espacio de nombres estándar

int main()  // Función principal del programa
{
    // Declaración de un arreglo bidimensional de 5 filas y 2 columnas
    // Cada fila representa una persona y cada columna un atributo (estatura y edad)
    int personas[5][2];  // Almacenará la estatura y edad de 5 personas
    
    // Bucle para recorrer las 5 personas (índices 0-4)
    for(int i=0; i < 5; i++){  // Variable i como índice para cada persona
        
        cout << "Introduce la estatura de la persona " << i << endl;  // Solicita la estatura
        cin >> personas[i][0];  // Almacena la estatura en la primera columna (índice 0)
        
        cout << "Introduce la edad de la persona " << i << endl;  // Solicita la edad
        cin >> personas[i][1];  // Almacena la edad en la segunda columna (índice 1)
    }
    
    return 0;  // Finaliza el programa con código de retorno 0 (ejecución exitosa)
}  // Fin de la función main

/*
Este programa demuestra cómo utilizar arreglos bidimensionales para almacenar
múltiples atributos de varios elementos. En este caso, solo se recopila la información
sin mostrarla, lo que representa la primera parte de un proceso de gestión de datos.
*/