#include <iostream>
using namespace std;

int main(){

    int mats[3];
    cout << "Introduce lo que sacaste en la primera materia" << endl;
    cin >> mats[0];
    cout << "Introduce lo que sacaste en la segunda materia" << endl;
    cin >> mats[1];
    cout << "Introduce lo que sacaste en la tercera materia" << endl;
    cin >> mats[2];

    int promedio = (mats[0] + mats[1] + mats[2]) /3;
    cout << "Tu promedio fue de: " << promedio << endl;
    if (promedio>5) {
        cout << "Aprobaste!" << endl;
    }
    else {
        cout << "Reprobaste..." << endl;
    }
}