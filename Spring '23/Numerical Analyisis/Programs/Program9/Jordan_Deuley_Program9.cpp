/*
 * Jordan Deuley
 * Pledged
 * Program 9
 * 4/11/23
 */




#include <iostream>
#include <fstream>
using namespace std;

class Matrix {
public:

    int size;
    float A[4][4];
    float B[4][4];
    float C[4][4];

    void MatrixReadIn(const string& fileA, const string& fileB) {
        ifstream in(R"(C:\Users\14794\Documents\Programming\Academics\Spring '23\Numerical Analyisis\Programs\Program9\)" + fileA);
        in >> size;
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                in >> A[i][j];
            }
        }
        in.close();
        in.open(R"(C:\Users\14794\Documents\Programming\Academics\Spring '23\Numerical Analyisis\Programs\Program9\)" + fileB);
        in >> size;
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                in >> B[i][j];
            }
        }
    }
    void MatrixOutput() {
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    void MatrixSum() {
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++ ) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
    }
    void MatrixDifference() {
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++ ) {
                C[i][j] = A[i][j] - B[i][j];
            }
        }
    }
    void MatrixProduct() {
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++ ) {
                C[i][j] = 0.0;
                for(int k = 0; k < size; k++) {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }
    }

};




int main() {
    Matrix Math{};
    Math.MatrixReadIn("matrixA.txt", "matrixB.txt");
    Math.MatrixSum();
    Math.MatrixOutput();
    Math.MatrixDifference();
    Math.MatrixOutput();
    Math.MatrixProduct();
    Math.MatrixOutput();

}
