#include <iostream>
#include <string.h>

using namespace std;

int main(){

    struct Persona{
        string nombre;
        int edad;
        float estatura;
        char tipoSangre;
    };

    Persona personas[5];

    for (int i = 0; i < 5; i++) {
        cout << "Dame el nombre de la persona " << i + 1 << endl;
        cin >> personas[i].nombre;
        cout << "Dame la edad de la persona " << i + 1 << endl;
        cin >> personas[i].edad;
        cout << "Dame la estatura de la persona " << i + 1 << endl;
        cin >> personas[i].estatura;
        cout << "Dame el tipo de Sangre de la persona " << i + 1 << endl;
        cin >> personas[i].tipoSangre;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: " << personas[i].nombre << endl;
        cout << "Edad: " << personas[i].edad << endl;
        cout << "Estatura: " << personas[i].estatura << endl;
        cout << "Tipo de Sangre: " << personas[i].tipoSangre << endl;
        cout << endl;
    }

    return 0;
}