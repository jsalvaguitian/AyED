#include <iostream>
#include <iomanip>

using namespace std;

/*          Serie de Liebniz

   1/1 - 1/3 + 1/5 - 1/7 + 1/9 - ... = pi/4

   (1/1 - 1/3 + 1/5 - 1/7 + 1/9 - ...) * 4 = pi

   Represento esto: 4/1 - 4/3 + 4/5 - 4/7 + 4/9 -  ... = pi 
*/

double calcularValorDePi(int cantidadDeIteracion){
    double pi = 0.0;
    const double numerador{4.0};
    int denominador = 1, signo = 1;

    for(int i=0; i<cantidadDeIteracion; i++){
        if(denominador%2 != 0){ // es impar?
            pi += signo * numerador/denominador;
            signo *= -1;  
        }
        ++denominador;
    }

    return pi;
}

int main(){
    const int cantidadDeIteracion {1800000};

    cout << "El número pi vale " << setprecision(7) << calcularValorDePi(cantidadDeIteracion) << endl;
    return 0;
}


