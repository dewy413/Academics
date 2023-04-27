/*
 * Jordan Deuley
 * Pledged
 * 4/24/23
 */

#include <iostream>

using namespace std;


int main() {
    int a[3][3];

    long determinant;
    printf("Enter the 9 elements of matrix: ");
    for(int i = 0 ;i < 3;i++)
        for(int j = 0;j < 3;j++)
            scanf("%d", &a[i][j]);

    determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
                                                                                * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

    printf("\nDeterminant of 3X3 matrix: %ld", determinant);




    return 0;
}