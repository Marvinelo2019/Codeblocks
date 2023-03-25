#include <iostream>;
using namespace std;

float suma,resta,multiplicacion,division;
int primero,segundo,residuo;

int main(){
cout<<"Ingrese los dos numeros que le solicitan"<< endl;

cout<<"Ingrese el primer numero: ";
cin>>primero;
cout<<"Ingrese el segundo numero: ";
cin>>segundo;

cout<<"Resultado de la SUMA es:"; suma = primero+segundo; cout<< suma <<endl;

cout<<"Resultado de la RESTA es:";resta = primero-segundo; cout<< resta <<endl;

cout<<"Resultado de la MULTIPLICACION es:";multiplicacion = primero*segundo; cout<< multiplicacion <<endl;

cout<<"Resultado de la DIVISION es:";division = primero/segundo; cout<< division <<endl;

cout<<"Resultado del RESIDUO es:";residuo = primero%segundo; cout<< residuo <<endl;

return 0;


}

