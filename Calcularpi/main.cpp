//Versión 1.0 del TP1, Hallar el valor de pi utilizando la serie de Liebniz

#include <iostream>
using namespace std;

int main(){
    double seriedeL = 0.0;
    double pi = 0.0;
    int iteraciones = 0;

    while (true) {
        seriedeL = 1.0 / (2 * iteraciones + 1);

        if (iteraciones % 2 == 0) {
            pi += seriedeL;
        } 
        else {
            pi -= seriedeL;
        }

        if (seriedeL <0.0000001) {
            break;
        }
        
        iteraciones++;
    }

    pi *= 4;

    cout.precision(7);
    cout << "El valor de pi es " << fixed << pi <<endl;
    cout << "Se necesitaron " << iteraciones << " de iteraciones." << endl;

    return 0;
}