/*
Este programa muestra un menú de opciones de videojuegos.
Demuestra el uso de estructuras de control do-while para crear menús interactivos.
*/

#include <iostream>  // Incluye la biblioteca para operaciones de entrada/salida estándar
using namespace std; // Utiliza el espacio de nombres estándar

int main(){  // Función principal del programa

    int option;  // Variable para almacenar la opción seleccionada por el usuario

    do  // Inicia un bucle do-while que se ejecutará al menos una vez
    {
        system("cls");  // Limpia la pantalla para mejorar la experiencia del usuario
        // Muestra el menú de opciones disponibles
        cout << "1) - Minecraft" << endl;  // endl inserta un salto de línea después del texto
        cout << "2) - Terraria" << endl;
        cout << "3) - Pokemon" << endl;
        cout << "4) - Super Mario 3D World" << endl;
        cout << "5) - Kirby" << endl;
        cout << "6) - Hollow Knight" << endl;
        cout << "7) - Undertale" << endl;
        cout << "8) - Super Mario 64" << endl;
        cout << "9) - Halo Infinity" << endl;
        cout << "10) - Call of Duty" << endl;
        cout << "11) - [Salir]" << endl;
        cout << "Elige una opción (escribe un número): " << endl;  // Solicita al usuario que ingrese una opción
        cin >> option;  // Almacena la opción ingresada en la variable option
    }
    // Condición del bucle do-while: mientras la opción sea menor o igual a 10, el bucle continuará
    // Si la opción es mayor a 10 (por ejemplo, la opción 11 de salir), el bucle terminará
    while(option <= 10);  // Mantiene el bucle activo mientras se seleccionen opciones válidas del menú

    // Este código se ejecuta cuando el usuario elige salir del menú
    cout << "¡Gracias por jugar con nuestro menú de juegos!" << endl;

    return 0;  // Finaliza el programa con código de retorno 0 (ejecución exitosa)
}  // Fin de la función main

/*
Felicidades! Ahora sabes cómo crear un menú interactivo usando bucles do-while.
Esto solo es una descomposición del programa y si quieres saber más detalladamente cómo funciona
puedes entrar a la carpeta de curso de programación.
*/
