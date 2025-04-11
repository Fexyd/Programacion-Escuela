#include <iostream>
using namespace std;

int main(){
    bool licencia = true;
    int edad = 18;

    if(licencia && edad >= 21){
        cout << "Puedes manejar" << endl;
    }
    else {
        cout << "No puedes manejar" << endl;
    }

    return 0;
}