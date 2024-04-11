#include <iostream>
#include <math.h>
#include <iomanip>
/*
[] Declarar 2 variable tipo float uno con el valor del peso y otra para la altura

[] declarar la variable del resultado de la masa corporal

[] realiar la operacion de peso sobre altura al cuadrado

[] informar el resultado al usuario


*/

using namespace std;


int main(){

float peso;
float altura;
float resultado;

cout << "ingrese su peso en kilogramos: ";
cin >>  peso;
cout << "ingrese su altura en metro: ";
cin >> altura;
resultado = peso / pow(altura,2);

cout << resultado;

return 0;
}

