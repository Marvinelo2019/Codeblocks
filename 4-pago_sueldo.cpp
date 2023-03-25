/*Programa que calcula el sueldo neto de una persona */
#include <iostream>

using namespace std;

int main(){
//Descuento del iva
double porcentajedescuentoiva =12;
string nombre,apellido;
double horastrabajadas;
double pagoporhora;

cout<<"Calculo de salario"<<endl;
cout<<"BIENVENIDO"<<endl;
cout <<"\nNombre del empleado: ";
cin>>nombre;
cout <<"\nHoras Trabajadas: ";
cin>>horastrabajadas;
cout <<"\nPago por hora: ";
cin>>pagoporhora;

//Realiza caluclo de las horas y el pago
double salarioneto = pagoporhora * horastrabajadas;
//descuentos
double descuentodelimpuesto = (porcentajedescuentoiva * salarioneto)/100;
//Restamos al salario el descuento
double totalpago = salarioneto - descuentodelimpuesto;
// Imprimir los valores
    cout << "Empleado: " << nombre << endl;
    cout << "Horas trabajadas: " << horastrabajadas << endl;
    cout << "Pago por hora: " << pagoporhora << endl;
    cout << "Salario bruto: " << salarioneto << endl;
    cout << "Descuento por impuesto sobre la renta: " << descuentodelimpuesto << endl;
    cout << "Total deducciones: " << descuentodelimpuesto << endl;
    cout << "Sueldo neto: " << totalpago << endl;

    return 0;
}
