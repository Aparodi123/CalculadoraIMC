#include <iostream>
#include <math.h>
#include <iomanip>

/*

-declarar 1 variable tipo float para el ingreso del peso en kilogramos
-declrar 1 variable tipo flot para el ingreso de la ltura en metros
-inicializar ambas variables
-realir el calculo matemaatico
-mostrar respuesta por paantalla

*/

using namespace std;

float peso;
float altura;
float resultado;


int main (){
cout << "Peso en kilos: ";
cin >> peso;
cout << "Altura en metros: ";
cin >> altura;

resultado = peso/(altura*altura);

    cout << "Su IMC es de: " << resultado << endl;
if(resultado<16.5){

    cout << "Bajo peso severo";

} else if(resultado>=16.5 && resultado <18.5){

    cout << "Bajo peso ";

} else if(resultado>=18.5 && resultado<25){

    cout << "Su indice es normal";

} else if(resultado>=25 && resultado<30){

    cout << "Sobrepeso ";

} else if(resultado>=30 && resultado<35){

    cout << "Obesidad tipo 1 (moderada)";

} else if(resultado>=35 && resultado<40){

    cout << "Obesidad tipo 2 (severa)";

} else {

    cout << "Obesidad tipo 3 (Moórbida)";

}



    return 0;


}
