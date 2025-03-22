#include <iostream>
using namespace std;

int main(){

    int option;

    do
    {

        cout << "Introduce un numero del 1 al 7" << endl;
        cin >> option;
        if(option == 1){ cout << "Es lunes" << endl; }
        if(option == 2){cout << "Es martes" << endl; }
        if(option == 3){cout << "Es miercoles" << endl; }
        if(option == 4){cout << "Es jueves" << endl; }
        if(option == 5){cout << "Es viernes" << endl; }
        if(option == 6){cout << "Es sabado" << endl; }
        if(option == 7){cout << "Es domingo" << endl; }
        if(option > 7 || option < 0){ cout << "Opcion incorrecta" << endl; }
    }
    while(option <= 7);


    return 0;
}
