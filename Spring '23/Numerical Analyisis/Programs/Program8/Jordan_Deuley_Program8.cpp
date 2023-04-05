/*
 * Jordan Deuley
 * 4/04/23
 * Program #8
 */
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


float f(float t, float y) {
    return sin(y) + exp(-t);
}



void RungeKutta(int a, int b, double alpha, double h) {
    int N = (b - a) / h;
    double t, w, k1, k2, k3, k4;
    t = a;
    w = alpha;
    cout << "t = " << t << " w = " << w << endl;
    for(int i = 1; i < N + 1; i++) {
        k1 = h * f(t, w);
        k2 = h * f(t + (h/2), w + (k1 / 2));
        k3 = h * f(t + (h/2), w + (k2 / 2));
        k4 = h * f(t + h, w + k3);

        w = w + (k1 + (2 * k2) + (2 * k3) + k4) / 6;
        t = a + (i * h);
        cout << "t = " << t << " w = " << w << endl;


    }

}



int main() {
    cout << std::setprecision(9);
    RungeKutta(0, 1, 0, .1);

}