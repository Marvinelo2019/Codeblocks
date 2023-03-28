/*Programa que invierte los valores de las variables declaradas*/
#include <iostream>
using namespace std;

int main() {
    int variable1, variable2, temp;

    // Pedir al usuario los valores de las dos variables
    cout << "Ingrese el valor de la variable 1: ";
    cin >> variable1;
    cout << "Ingrese el valor de la variable 2: ";
    cin >> variable2;

    // Intercambiar los valores de las variables usando una variable temporal
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;

    // Mostrar los nuevos valores de las variables
    cout << "El nuevo valor de la variable 1 es: " << variable1 << endl;
    cout << "El nuevo valor de la variable 2 es: " << variable2 << endl;

    return 0;
}
