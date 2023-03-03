#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return 1 / (x + 4);
}
`   Q

double trapezoidal(double a, double b, int n) {

    double h = (b - a) / 2;
    double sum = 0.5 * (f(a) + f(b));

    for(int i = 1; i < n; i++) {

        double x = a + i * h;
        sum += f(x);
    }

    return h * sum;


}


double richardson_extrapolation(double a, double b, double tol) {
    int n = 1;
    double I1 = trapezoidal(a, b, n);
    double I2 = trapezoidal(a, b, 2*n);
    double err = abs(I2 - I1) / 3.0;
    while (err > tol) {
        n *= 2;
        I1 = I2;
        I2 = trapezoidal(a, b, 2*n);
        err = abs(I2 - I1) / 3.0;
    }
    return I2;
}

int main() {
    double a, b, TOL;
    cout << "Enter the Upper bound:";
    cin >> b;
    cout << "Enter the Lower bound:";
    cin >> a;
    TOL = pow(10, -(5));

    double result = richardson_extrapolation(a, b, TOL);

    cout << "The result is: " << result << endl;


}
