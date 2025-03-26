/*
Ejemplos prácticos de variables en C++
Este archivo muestra cómo se utilizan las variables en C++
y cómo funcionan en la práctica.
*/

#include <iostream>
using namespace std;

int main() {
    // Ejemplo 1: Variables son como cajas donde guardamos cosas
    // Declaración de variables de diferentes tipos
    string nombre = "Juan";     // Variable tipo string (texto)
    int edad = 20;             // Variable tipo int (número entero)
    double altura = 1.75;      // Variable tipo double (número decimal)
    bool le_gusta_programar = true;  // Variable tipo bool (verdadero/falso)
    
    // Mostramos el contenido de las variables
    cout << "Nombre: " << nombre << endl;           // Imprime: Juan
    cout << "Edad: " << edad << " años" << endl;    // Imprime: 20 años
    cout << "Altura: " << altura << " m" << endl;   // Imprime: 1.75 m
    cout << "¿Le gusta programar? " << (le_gusta_programar ? "Sí" : "No") << endl; // Imprime: Sí
    cout << endl;
    
    // Ejemplo 2: Podemos cambiar lo que guardan las variables
    cout << "Nombre original: " << nombre << endl;  // Imprime: Juan
    nombre = "María";  // Ahora guardamos otro nombre
    cout << "Nombre modificado: " << nombre << endl; // Imprime: María
    cout << endl;
    
    // Ejemplo 3: Podemos hacer operaciones con las variables
    int dinero = 100;
    int gastos = 30;
    int dinero_restante = dinero - gastos; 
    /*
    dinero_restante es otra variable que almacena el 
    resultado de dinero - gastos
    */
    
    cout << "Dinero inicial: $" << dinero << endl;        // Imprime: $100
    cout << "Gastos: $" << gastos << endl;                // Imprime: $30
    cout << "Dinero restante: $" << dinero_restante << endl; // Imprime: $70
    
    return 0;
}

/*
Espero que esta mini explicación te haya servido!
Te recomiendo compilar y ejecutar este código para ver
cómo funcionan las variables en C++ en la práctica.

Para compilar este código en Windows puedes usar:
- g++ Variables.cpp -o Variables.exe
- Y luego ejecutarlo con: Variables.exe
*/