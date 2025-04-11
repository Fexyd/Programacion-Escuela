#include <iostream>
using namespace std;

int main(){

    double mats[3];

    mats[0] = 10;
    mats[1] = 6;
    mats[2] = 6.2;
    mats[3] = 10;
    mats[4] = 9.1;
    mats[5] = 8.7;


    double promedio = (mats[0] + mats[1] + mats[2]) / 3;

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
