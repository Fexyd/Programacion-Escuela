/*
Este programa muestra el día de la semana correspondiente a un número del 1 al 7.
Demuestra el uso de estructuras condicionales y bucles do-while.
*/

#include <iostream>  // Incluye la biblioteca para operaciones de entrada/salida estándar
using namespace std;  // Utiliza el espacio de nombres estándar

int main(){  // Función principal del programa

    int option;  // Variable para almacenar la opción seleccionada por el usuario

    do  // Inicia un bucle do-while que se ejecutará al menos una vez
    {
        // Solicita al usuario que ingrese un número del 1 al 7
        cout << "Introduce un numero del 1 al 7" << endl;  // Muestra mensaje solicitando un número
        cin >> option;  // Almacena el número ingresado en la variable option
        
        // Evalúa el número ingresado y muestra el día de la semana correspondiente
        if(option == 1){ cout << "Es lunes" << endl; }  // Si el valor es 1, muestra "Es lunes"
        if(option == 2){ cout << "Es martes" << endl; }  // Si el valor es 2, muestra "Es martes"
        if(option == 3){ cout << "Es miercoles" << endl; }  // Si el valor es 3, muestra "Es miércoles"
        if(option == 4){ cout << "Es jueves" << endl; }  // Si el valor es 4, muestra "Es jueves"
        if(option == 5){ cout << "Es viernes" << endl; }  // Si el valor es 5, muestra "Es viernes"
        if(option == 6){ cout << "Es sabado" << endl; }  // Si el valor es 6, muestra "Es sábado"
        if(option == 7){ cout << "Es domingo" << endl; }  // Si el valor es 7, muestra "Es domingo"
        if(option > 7 || option < 0){ cout << "Opcion incorrecta" << endl; }  
        // Si el valor está fuera del rango 1-7, muestra mensaje de error
    }
    while(option <= 7);  // Mantiene el bucle activo mientras la opción sea menor o igual a 7


    return 0;  // Finaliza el programa con código de retorno 0 (ejecución exitosa)
}  // Fin de la función main

/*
Felicidades! Ahora sabes cómo crear un programa que utiliza bucles do-while para interactuar con el usuario.
Esto solo es una descomposición del programa y si quieres saber más detalladamente cómo funciona
puedes entrar a la carpeta de curso de programación.
*/
