/*
 * Jordan Deuley
 * Program 4
 * Pledged
 * 2/13/22
 *
 * Newton @ p0 = 0
 * 4 steps to achieve 0.56714
 * Steffen @ p0 = 0
 * 4 steps to achieve 0.56714
 *
 * Newton @ p0 = .5
 * 3 steps to achieve 0.56714
 * Steffen @ p0 = .5
 * 3 steps to achieve 0.56714
 *
 * Newton @ p0 = 1
 * 4 steps to achieve 0.56714
 * Steffen @ p0 = 1
 * 4 steps to achieve 0.56714
 *
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double g(double x) {
    return exp(-x);
}


void steffen() {
    double TOL, p0, p1, p2, p;
    int max, i;
    cout << "Enter p0:" << endl;
    cin >> p0;
    cout << "Digit Accuracy:" << endl;
    cin >> TOL;
    cout << setprecision(TOL);
    TOL = pow(10, -(TOL));
    cout << "Enter max iterations:" << endl;
    cin >> max;

    i = 1;

    while(i <= max) {
        p1 = g(p0);
        p2 = g(p1);
        p = p0 - (pow((p1 - p0), 2) / (p2 - (2 * p1) + p0));
        cout << "p" << i << " = " << p << endl;

        if(abs(p - p0) < TOL) {
            cout << "Accurate to " << setprecision(0) << scientific << TOL;
            return;
        }
        i++;
        p0 = p;
    }
    cout << "Max iterations achieved, p = " << p << " at " << max << " iterations." << endl;
    cout << "Accurate to " << setprecision(0) << scientific << TOL;


}



int main() {
    steffen();
}
