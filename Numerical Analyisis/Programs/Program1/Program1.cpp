/*
 * Jordan Deuley
 * Pledged
 * 1/19/2023
 * Program #1
 */


#include <iostream>
#include <cmath>

using namespace std;


long double factorial (long double n) {
    long double i, fact = 1;

    for(i = 1; i <= n; ++i) {
        fact *=i;
    }

    return fact;
}



void valueOfE(int end) {
    long double sum = 0;
    for(int i = 0; i < end; ++i) {
        sum += 1 / factorial(i);
    }

    cout << "Value of e: " << sum << endl<< "Iterations: " << end;
}



void valueOfPi(int end) {
    long double sum;
    long double u, v;

    u = 2;
    v = 1 / sqrt(2);


    float epsilon = 0.00001;

    for(int i = 0; i < end; i++){
        u = u / v;
        v = sqrt((1 + v) / 2);
        sum = u;
    }

    cout << "Value of pi: " << sum << endl << "Iterations: " << end << endl;
}


int main() {

    /* Option #1 */
    valueOfE(9);
    //9 iterations are necessary. To get to the value of e to the fifth decimal point.
    /* Option #1 */



    cout << endl << endl;

    /* Option #2 */
    valueOfPi(9);
    //9 iterations are necessary. To get to the value of pi to the fifth decimal point.
    /* Option #2 */

}