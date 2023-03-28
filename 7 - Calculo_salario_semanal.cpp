/* Programa que calcula el salario semanal de una persona ingresando
la tarifa horaria y las horas laboradas diariamente*/
#include <iostream>

using namespace std;

int main(){
    float tarifa, horas_diarias, salario_semanal;

    //ingresar la tarifa horaria y el numero de horas laboradas

    cout << "Ingrese la tarifa horaria: ";
    cin>> tarifa;
    cout <<"---------";
    cout <<" Ingrese las horas laboradas por este usuario: ";
    cin>> horas_diarias;

    //calcular el salario semanal

    salario_semanal = tarifa * horas_diarias * 6; /*son 6 los dias trabajados*/

    //mostrar el resultado

    cout<<" El salario semananal es de Q"<<salario_semanal << endl;

    return 0;

}
