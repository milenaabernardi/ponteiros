#include<iostream>
using namespace std;

int main(){  
    float* fP;
    float numero1 = 7.3;
    fP = &numero1;
    cout << "Valor apontado por fP: " << *fP <<endl;

    float numero2 = *fP;
    cout << "Valor de numero2: " << numero2 <<endl;
    cout << "Endereco de numero1: " << &numero1 <<endl;
    cout << "Endereco armazenado em fP: " << fP <<endl;

    return 0;
}