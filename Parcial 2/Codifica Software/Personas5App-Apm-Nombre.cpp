#include <iostream>
using namespace std;

int main(){

    struct  Persona
    {
        string nombre;
        string APP;
        string APM;
    };

    Persona personas[5];

    personas[0].nombre = "Juan";
    personas[1].nombre = "Elias";
    personas[2].nombre = "Santiago";
    personas[3].nombre = "Emilio";
    personas[4].nombre = "Rodrigo";

    personas[0].APP = "Sanchez";
    personas[1].APP = "Jimenez";
    personas[2].APP = "Morales";
    personas[3].APP = "Torres";
    personas[4].APP = "Garcia";

    personas[0].APM = "Silva";
    personas[1].APM = "Garcia";
    personas[2].APM = "Martinez";
    personas[3].APM = "Jimenez";
    personas[4].APM = "Monta�ez";

    for(int i = 0; i < 5; i++){
        cout << "El nombre de la persona " << i+1 << " es: " << personas[i].nombre << endl;
        cout << "El apellido paterno de la persona " << i+1 << " es: " << personas[i].APP << endl;
        cout << "El apellido materno de la persona " << i+1 << " es: " << personas[i].APM << endl;
        cout << endl;
    }


    return 0;
}
