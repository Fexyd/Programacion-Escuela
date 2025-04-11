#include<iostream>
#include<string>
using namespace std;

int main(){
    
    char palabra[21] = "-AmolapacificapalomA";
    string palindromo = "";
    int count = 21;
    for(int i=0; i < 21; i++){
        
        count -= 1;
        palindromo += palabra[count];
        
    }
    
    cout << palindromo << endl;
    
    return 0;
}
