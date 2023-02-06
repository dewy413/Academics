/*
 * Jordan Deuley
 * Program 3
 * Pledged
 * 2/6/22
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



double f(double x) {
    //return pow(x, 2) - 6;
    return pow(x, 3) - (2 * pow(x, 2)) - 5;

}

double fprime(double x) {
   //return (2 * x);
   return (3 * pow(x, 2)) - (4 * x);
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
            cout << "p" << i << " = " << p << endl;
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