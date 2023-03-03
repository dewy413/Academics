#include <iostream>
#include <cmath>
#include <iomanip>

/*
 * Jordan Deuley
 * Program 5
 * Pledged
 * 3/3/22
 * Composite Trapezoidal
*/


using namespace std;

double f(double x) {
    return 1 / (x + 4);
}

double trapezoidal(double a, double b, int n) {

    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for(int i = 1; i < n; i++) {
        double xi = a + (i * h);
        sum += 2 * f(xi);
    }
    return (h / 2) * sum;

}


int main() {
    cout << setprecision(6);
    double a, b;
    int n = 1;
    double result = 0.0;
    double prev_result = 0.0;
    double tol = pow(10, -(5));
    cout << "Enter the Upper bound:";
    cin >> b;
    cout << "Enter the Lower bound:";
    cin >> a;

    do {
        prev_result = result;
        result = trapezoidal(a, b, n);
        n *= 2;

    } while (abs(result - prev_result) > tol);

    cout << "Result: " << result << endl;




}
