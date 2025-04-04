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

    Persona persona1;
    Persona persona2;
    Persona persona3;
    Persona persona4;
    Persona persona5;

    cout << "Dame el nombre de la persona1" << endl;
    cin >> persona1.nombre;
    cout << "Dame la edad de la persona1" << endl;
    cin >> persona1.edad;
    cout << "Dame la estatura de la persona1" << endl;
    cin >> persona1.estatura;
    cout << "Dame el tipo de Sangre de la persona1" << endl;
    cin >> persona1.tipoSangre;

    cout << "Dame el nombre de la persona2" << endl;
    cin >> persona2.nombre;
    cout << "Dame la edad de la persona2" << endl;
    cin >> persona2.edad;
    cout << "Dame la estatura de la persona2" << endl;
    cin >> persona2.estatura;
    cout << "Dame el tipo de Sangre de la persona2" << endl;
    cin >> persona2.tipoSangre;

    cout << "Dame el nombre de la persona3" << endl;
    cin >> persona3.nombre;
    cout << "Dame la edad de la persona3" << endl;
    cin >> persona3.edad;
    cout << "Dame la estatura de la persona3" << endl;
    cin >> persona3.estatura;
    cout << "Dame el tipo de Sangre de la persona3" << endl;
    cin >> persona3.tipoSangre;

    cout << "Dame el nombre de la persona4" << endl;
    cin >> persona4.nombre;
    cout << "Dame la edad de la persona4" << endl;
    cin >> persona4.edad;
    cout << "Dame la estatura de la persona4" << endl;
    cin >> persona4.estatura;
    cout << "Dame el tipo de Sangre de la persona4" << endl;
    cin >> persona4.tipoSangre;

    cout << "Dame el nombre de la persona5" << endl;
    cin >> persona5.nombre;
    cout << "Dame la edad de la persona5" << endl;
    cin >> persona5.edad;
    cout << "Dame la estatura de la persona5" << endl;
    cin >> persona5.estatura;
    cout << "Dame el tipo de Sangre de la persona5" << endl;
    cin >> persona5.tipoSangre;

    cout << "Persona 1:" << endl;
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << "Estatura: " << persona1.estatura << endl;
    cout << "Tipo de Sangre: " << persona1.tipoSangre << endl;

    cout << "Persona 2:" << endl;
    cout << "Nombre: " << persona2.nombre << endl;
    cout << "Edad: " << persona2.edad << endl;
    cout << "Estatura: " << persona2.estatura << endl;
    cout << "Tipo de Sangre: " << persona2.tipoSangre << endl;

    cout << "Persona 3:" << endl;
    cout << "Nombre: " << persona3.nombre << endl;
    cout << "Edad: " << persona3.edad << endl;
    cout << "Estatura: " << persona3.estatura << endl;
    cout << "Tipo de Sangre: " << persona3.tipoSangre << endl;

    cout << "Persona 4:" << endl;
    cout << "Nombre: " << persona4.nombre << endl;
    cout << "Edad: " << persona4.edad << endl;
    cout << "Estatura: " << persona4.estatura << endl;
    cout << "Tipo de Sangre: " << persona4.tipoSangre << endl;

    cout << "Persona 5:" << endl;
    cout << "Nombre: " << persona5.nombre << endl;
    cout << "Edad: " << persona5.edad << endl;
    cout << "Estatura: " << persona5.estatura << endl;
    cout << "Tipo de Sangre: " << persona5.tipoSangre << endl;

    return 0;
}