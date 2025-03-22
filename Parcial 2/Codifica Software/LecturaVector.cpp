#include <iostream>
using namespace std;

int main(){

    double mats[6];

    cout << "Introduce cuanto sacaste en la materia 1" << endl;
    cin >> mats[0];
    cout << "Introduce cuanto sacaste en la materia 2" << endl;
    cin >> mats[1];
    cout << "Introduce cuanto sacaste en la materia 3" << endl;
    cin >> mats[2];
    cout << "Introduce cuanto sacaste en la materia 4" << endl;
    cin >> mats[3];
    cout << "Introduce cuanto sacaste en la materia 5" << endl;
    cin >> mats[4];
    cout << "Introduce cuanto sacaste en la materia 6" << endl;
    cin >> mats[5];
    cout << endl;

    double promedio = (mats[0] + mats[1] + mats[2] + mats[3] + mats[4] + mats[5]) / 6;

    cout << "La materia 1 sacaste: " << mats[0] << endl;
    cout << "La materia 2 sacaste: " << mats[1] << endl;
    cout << "La materia 3 sacaste: " << mats[2] << endl;
    cout << "La materia 4 sacaste: " << mats[3] << endl;
    cout << "La materia 5 sacaste: " << mats[4] << endl;
    cout << "La materia 6 sacaste: " << mats[5] << endl;
    cout << endl;
    cout << "Y tu promedio fue de: " << promedio << endl;

    return 0;
}
