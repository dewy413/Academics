/*
 * Jordan Deuley
 * Program 3
 * Pledged
 * 2/6/22
 *
 *
 * 6a. p5 = 1.8294
 * 6c. p3 = 2.3707 and p4 = 3.7221
 * 6e. p17 = 5.6663 and p12 = 5.6663
 * 6f. NA and p5 = 3.0964 and p4 = 6.285
 *
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



double f(double x) {
    //return exp(x) + pow(2, -x) + 2 * cos(x) - 6; //6a.
    //return 2 * x * cos(2 * x) - pow((x - 2), 2); //6c.
    //return exp(x) - pow(3 * x, 2); //6e.
    return sin(x) - exp(-x); //6f.


}

double fprime(double x) {
    //return -2 * sin(x) + exp(x) - (log(2)/pow(2, x)); //6a.
    //return -2 * (2 * x * sin(2 * x) - cos(2 * x) + x - 2); //6c.
    //return exp(x) - (6 * x); //6e.
    return cos(x) - exp(-x); //6f.
}


void newton() {
    double TOL, p0, p;
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
        p = p0 - ((f(p0))/(fprime(p0)));
        cout << "p" << i << " = " << p << endl;

        if(abs(p - p0) < TOL) {
           // cout << "p" << i << " = " << p << endl;
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
    newton();
}
