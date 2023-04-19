/*
 * Program 7
 * Jordan Deuley
 * Pledged
 */

#include<iostream>

#define SIZE 6

using namespace std;

int main() {
    int a[SIZE][SIZE], x[SIZE], temp;
    int i, j, k, n;


    cout << "Enter number of X values:";
    cin >> n;

    cout << "Enter Values of the Matrix:" << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1; j++) {
            cout << "[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= n - 1; i++) {
        for (j = i + 1; j <= n; j++) {
            temp = a[j][i] / a[i][i];
            for (k = 1; k <= n + 1; k++) {
                a[j][k] = a[j][k] - temp * a[i][k];
            }
        }
    }
    x[n] = a[n][n + 1] / a[n][n];

    for (i = n - 1; i >= 1; i--) {
        x[i] = a[i][n + 1];
        for (j = i + 1; j <= n; j++) {
            x[i] = x[i] - a[i][j] * x[j];
        }
        x[i] = x[i] / a[i][i];
    }

    cout << endl << "Result: " << endl;
    for (i = 1; i <= n; i++) {
        cout << "x" << i << " = " << x[i] << endl;
    }

}