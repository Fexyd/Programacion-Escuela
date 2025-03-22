#include <iostream>
using namespace std;

int main(){

    int option;

    do
    {
        system("cls");
        cout << "1) - Minecraft" << endl;
        cout << "2) - Terraria" << endl;
        cout << "3) - Pokemon" << endl;
        cout << "4) - Super Mario 3D World" << endl;
        cout << "5) - Kirby" << endl;
        cout << "6) - Hollow Knight" << endl;
        cout << "7) - Undertale" << endl;
        cout << "8) - Super Mario 64" << endl;
        cout << "9) - Halo Infinity" << endl;
        cout << "10) - Call of Duty" << endl;
        cout << "11) - [Salir]" << endl;
        cout << "elige una opcion" << endl;
        cin >> option;
    }
    while(option <= 10);




    return 0;
}
