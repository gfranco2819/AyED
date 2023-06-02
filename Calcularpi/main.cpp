#include <iostream>
using namespace std;

int main(){
    int iteraciones = 0;
    double pi = 0.000000;

    while (true) {
        double seriedeL = 1.0 / (2 * iteraciones + 1);
        if (iteraciones % 2 == 0) {
            pi += seriedeL;
        } 
        else {
            pi -= seriedeL;
        }

        if (iteraciones >=5000000) {
            break;
        }
        
        iteraciones++;
    }

    pi *= 4;

    cout.precision(7);
    cout << "El valor de pi es: " << fixed << pi <<endl;

    return 0;
}