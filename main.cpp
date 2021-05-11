#include<iostream>

using namespace std;

int main(){
    int miEdad = 0;
    string miNombre = "";

    cout << "Ingresa tu nombre y apellidos:\n";
    getline(cin, miNombre);
    cout << "Ingresa tu edad:\n";
    cin >> miEdad;

    cout << "Tu nombre es " << miNombre << " y tienes " << miEdad << " años\n";
}