/*Programa que calcula el area y perimetro de un circulo*/
#include <iostream>;
#include <cmath>;

using namespace std;
int main(){
    double radio, area, perimetro;
    const double PI = 3.1416; //valor de PI
    cout<< "Ingrese el radio del circulo: ";
    cin>> radio;

    area = PI * pow(radio, 2); // calcula el area del circulo
    perimetro = 2 * PI * radio; //calcula el perimetro del circulo

    cout<< "El area del circulo es: " <<area<<endl;
    cout<< "El perimetro del ciculo es: " <<perimetro <<endl;

    return 0;

}
