#include <iostream>
using namespace std;

int main(){



    double mats[6];
    double p1[6];
    double p2[6];
    double p3[6];

    cout << "Introduce las calificaciones del primer parcial" << endl;

    for(int i = 0; i < 6; i++){

        cout << "Materia " << i+1 << endl;
        cin >> p1[i];
    }

    system("cls");
    cout << "Introduce las calificaciones del segundo parcial" << endl;

    for(int i = 0; i < 6; i++){
        cout << "Materia " << i+1 << endl;
        cin >> p2[i];
    }

    system("cls");
    cout << "Introduce las calificaciones del tercer parcial" << endl;

    for(int i = 0; i < 6; i++){
        cout << "Materia " << i+1 << endl;
        cin >> p3[i];
    }

    double promedio[6];

    //---------------------------------------------

    promedio[0] = (p1[0] + p2[0] + p3[0]) / 3;
    promedio[1] = (p1[1] + p2[1] + p3[1]) / 3;
    promedio[2] = (p1[2] + p2[2] + p3[2]) / 3;
    promedio[3] = (p1[3] + p2[3] + p3[3]) / 3;
    promedio[4] = (p1[4] + p2[4] + p3[4]) / 3;
    promedio[5] = (p1[5] + p2[5] + p3[5]) / 3;


    //---------------------------------------------

    for(int i = 0; i < 6; i++){

        cout << "Tu promedio en la materia " << i+1 << " fue de: " << promedio[i] << endl;

     }


    return 0;
}
