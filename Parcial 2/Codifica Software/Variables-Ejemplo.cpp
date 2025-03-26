/*
Este programa demuestra el uso básico de variables en C++.
Muestra cómo declarar, inicializar y modificar diferentes tipos de variables.
*/

#include <iostream>  // Incluye la biblioteca para operaciones de entrada/salida estándar
using namespace std;  // Utiliza el espacio de nombres estándar

int main() {  // Función principal del programa
    // Declaración e inicialización de variables de diferentes tipos
    string nombre = "Pepito";     // Variable de tipo string para almacenar texto
    int edad = 5;                // Variable de tipo int para almacenar números enteros
    double altura = 1.10;        // Variable de tipo double para almacenar números con decimales
    bool le_gusta_helado = true; // Variable de tipo bool para almacenar valores lógicos (verdadero/falso)
    
    // Muestra los valores de las variables
    cout << "Hola, me llamo " << nombre << endl;           
    cout << "Tengo " << edad << " años" << endl;    
    cout << "Mido " << altura << " metros" << endl;   
    cout << "¿Me gusta el helado? " << le_gusta_helado << endl;  // Los valores booleanos se muestran como 1 (true) o 0 (false)
    cout << endl;  // Inserta una línea en blanco para mejorar la presentación
    
    // Modificación del valor de una variable existente
    cout << "Antes me llamaba " << nombre << endl;
    nombre = "Juanito";  // Asigna un nuevo valor a la variable nombre
    cout << "Ahora me llamo " << nombre << endl;
    cout << endl;  // Inserta otra línea en blanco
    
    // Operaciones aritméticas con variables
    int caramelos = 10;  // Declara e inicializa una variable para el total de caramelos
    int caramelos_comidos = 3;  // Declara e inicializa una variable para los caramelos consumidos
    int caramelos_restantes = caramelos - caramelos_comidos;  // Calcula la diferencia y almacena el resultado
    
    // Muestra los resultados de las operaciones
    cout << "Tenía " << caramelos << " caramelos" << endl;
    cout << "Me comí " << caramelos_comidos << " caramelos" << endl;
    cout << "Me quedan " << caramelos_restantes << " caramelos" << endl;
    
    return 0;  // Finaliza el programa con código de retorno 0 (ejecución exitosa)
}  // Fin de la función main

/*
Felicidades! Ahora sabes cómo utilizar variables para almacenar y manipular datos.
Esto solo es una descomposición del programa y si quieres saber más detalladamente cómo funcionan
las variables puedes entrar a la carpeta de curso de programación.
*/