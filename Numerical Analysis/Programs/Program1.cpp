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



long double valueOfE(int end) {
    long double sum = 0;
    for(int i = 0; i <= end; ++i) {
        sum += 1 / factorial(i);
    }

    return sum;
}



long double valueOfPi(int end) {
    long double sum;
    long double u, v;

    u = 2;
    v = 1 / sqrt(2);



    for(int i = 0; i <= end; ++i) {
        u = u / v;
        v = sqrt((1 + v) / 2);
        sum = u;
    }

    return sum;
}


int main() {

    /* Option #1 */
    cout << valueOfE(8);
    //8 iterations are necessary. To get to the value of e to the fifth decimal point.
    /* Option #1 */



    cout << endl;

    /* Option #2 */
    cout << valueOfPi(8);
    //8 iterations are necessary. To get to the value of pi to the fifth decimal point.
    /* Option #2 */

}
