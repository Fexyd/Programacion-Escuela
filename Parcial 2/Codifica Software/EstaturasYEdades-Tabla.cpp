#include<iostream>
using namespace std;

int main()
{
    
    int personas[5][2];
    
    for(int i=0; i < 5; i++){
        
        cout << "Introduce la estatura de la persona " << i << endl;
        cin >> personas[i][0];
        
        cout << "Introduce la edad de la persona " << i << endl;
        cin >> personas[i][1]; 
    }
    
    cout << "[Estatura]----------[Edad]" << endl;
    
    for(int i=0; i < 5; i++){
    
        cout << "     " << personas[i][0] << "          " << personas[i][1] << endl;
    }
    
    return 0;
}