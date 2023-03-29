/*
 * Jordan Deuley
 * 3/28/23
 * Program #7
 *
 * 3a.
 * t = 1 y = 1
 * t = 1.1 y = 1
 * t = 1.2 y = 1.00826
 * t = 1.3 y = 1.02169
 * t = 1.4 y = 1.03851
 * t = 1.5 y = 1.05767
 * t = 1.6 y = 1.07846
 * t = 1.7 y = 1.10043
 * t = 1.8 y = 1.12326
 * t = 1.9 y = 1.14672
 * t = 2 y = 1.17065
 *
 *
 * 3b.
 * t = 1 y = 0
 * t = 1.2 y = 0.2
 * t = 1.4 y = 0.438889
 * t = 1.6 y = 0.721243
 * t = 1.8 y = 1.05204
 * t = 2 y = 1.43725
 * t = 2.2 y = 1.88426
 * t = 2.4 y = 2.40227
 * t = 2.6 y = 3.00284
 * t = 2.8 y = 3.7006
 * t = 3 y = 4.51428
 *
 */

#include <iostream>
#include <cmath>

using namespace std;




//double yprime(double t, double y) {
//    return (y / t) - pow(y / t, 2);
//}

double yprime(double t, double y) {
    return 1 + (y / t) + pow(y / t, 2);
}

void euler(int a, int b, double alpha, double h) {
    int N = (b - a) / h;
    double t, w;
    t = a;
    w = alpha;
    cout << "t = " << t << " y = " << w << endl;
    for(int i = 1; i < N + 1; i++) {
        w = w + (h * yprime(t, w));
        t = a + (i * h);
        cout << "t = " << t << " y = " << w << endl;
    }
}




int main() {
    euler(1, 3, 0, 0.2);
}