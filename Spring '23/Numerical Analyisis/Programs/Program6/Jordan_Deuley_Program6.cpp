#include <iostream>
#include <cmath>

using namespace std;

double APP;

double f(double x) {
    return x * sin(pow(x, 2));
}

double S(double a, double b) {
    double h = (b - a) / 2;
    return (h / 3) * (f(a) + (4 * f(a + h)) + f(b));
}

void AdapQuad(double a, double b, double s0, double tol) {
    double m = (a + b) / 2;
    double s1 = S(a, m);
    double s2 = S(m, b);
    if(abs(s0 - s1 - s2) < 10 * tol) {
        APP = APP + s1 + s2;
    } else {
        AdapQuad(a, m, s1, tol / 2);
        AdapQuad(m, b, s2, tol / 2);
    }
}


int main() {
    double tol, a, b, s0;
    APP = 0;
    a = 0;
    b = M_PI;
    tol = 0.00001;
    s0 = S(a, b);
    AdapQuad(a, b, s0, tol);
    cout << "Result: " << APP;
}


