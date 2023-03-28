/*Programa que calcula la velocidad de un vehiculo que recorre una distancia M */
#include <iostream>

using namespace std;

int main(){

    double velocidad, tiempo, distancia;

    cout<< "Ingrese la velocidad del vehiculo en m/s: ";
    cin>> velocidad;

    cout<< "Ingrese el tiempo que recorrio en segundo: ";
    cin>> tiempo;

    //calcular la distancia recorrida del vehiculo

    distancia = velocidad * tiempo;

    cout <<"La distancia recorrida es de: "<<distancia<< "metros";

    return 0;

}
