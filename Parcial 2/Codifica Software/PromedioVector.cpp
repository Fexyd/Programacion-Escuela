/*
Este programa calcula tu promedio de calificaciones.
*/

#include <iostream> 
using namespace std; 

int main(){ 

    // Aquí creamos una Lista con 3 espacios para guardar números con decimales
    // Usamos "double" porque queremos guardar números decimales, como 9.5
    double mats[3];  // Esta cajita se llama "mats" y puede guardar 3 calificaciones

    // Ahora vamos a poner calificaciones en cada espacio de la lista
    mats[0] = 10;   // En el primer espacio ponemos un 10 
    mats[1] = 9.1;  // En el segundo espacio ponemos un 9.1 
    mats[2] = 6.7;  // En el tercer espacio ponemos un 6.7 

    // Ahora vamos a calcular el promedio
    double promedio = (mats[0] + mats[1] + mats[2]) / 3;
    // Primero sumamos todas las calificaciones: 10 + 9.1 + 6.7 = 25.8
    // Luego dividimos entre 3 (porque son 3 materias): 25.8 ÷ 3 = 8.6

    // Ahora vamos a mostrar las calificaciones y el promedio
    cout << "En la materia 1 sacaste: " << mats[0] << endl;  // Mostramos la primera calificación
    cout << "En la materia 2 sacaste: " << mats[1] << endl;  // Mostramos la segunda calificación
    cout << "En la materia 3 sacaste: " << mats[2] << endl;  // Mostramos la tercera calificación
    cout << endl;  // Dejamos una línea en blanco para que se vea más bonito
    cout << "Y tu promedio fue de: " << promedio << endl;  // Mostramos el promedio

    return 0;
}

/*
Felicidades! Ahora sabes cómo calcular un promedio usando listas. Esto
solo es una descomposicion del programa y si quieres saber mas detalladamente como funciona
una lista puedes entrar a la carpeta de curso de programacion. 
*/
