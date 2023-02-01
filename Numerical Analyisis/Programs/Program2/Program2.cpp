/*
 * Jordan Deuley
 * Program 2
 * Pledged
 * 1/30/22
 *
 *
 * [-1, 0] After 16 iterations, p = -0.4147
 * [2, 3] After 16 iterations, p = 2.2198
 *
 *
 *
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;




double f(double x) {
    return -2.75 * pow(x, 3.0) + 18 * pow(x, 2.0) -21 * x - 12;
    //return (x * pow(exp(1), -x/2)) - .5;
    //return sqrt(x) - cos(x);
    //return (pow(x, 3) - 7 * pow(x,2) + (14 * x) - 6);
}


void bisection() {
    double TOL, p, FP, FA, a, b;
    int max, i;
    cout << "Enter endpoints:";
    cin >> a >> b;
    cout << "Digit Accuracy:";
    cin >> TOL;
    cout << setprecision(TOL);
    TOL = pow(10, -(TOL));
    cout << "Enter max iterations:";
    cin >> max;

    if(f(a) * f(b) >= 0) {
        cout << "Incorrect Upper and Lower Bound";
        return;
    }
    i = 0;
    FA = f(a);

    while(i < max) {
        p = a + (b-a) / 2;
        FP = f(p);

        if(FP == 0 || (b-a) / 2 < TOL) {
            cout << "After " << i << " iterations, p = " << p;
            return;
        }
        i++;

        if(FA * FP > 0) {
            a = p;
            FA = FP;
        } else {
            b = p;
        }
    }

    cout << "Max iterations achieved, p = " << p << " at " << max << " iterations.";




}



int main() {

    bisection();



}