/*
 * Jordan Deuley
 * Program 10
 * 4/19/23
 * Pledged
 */

#include <iostream>
#include <fstream>
#include <vector>

#define SIZE 6
double a[SIZE][SIZE];


using namespace std;

class GaussianElimination {
    public:
        vector<vector<double>> A;
        vector<double> result;
        int size;
        void swapRows(int row1, int row2) {
            vector<double> temp = A[row1];
            A[row1] = A[row2];
            A[row2] = temp;
        }
        void input(const string &file) {
            ifstream reader;
            reader.open(
                    R"(C:\Users\14794\Documents\Programming\Academics\Spring '23\Numerical Analyisis\Programs\Program10\)" +
                    file);
            reader >> size;
            A.resize(size, vector<double>(size + 1));

            for (int i = 0; i < A.size(); i++) {
                for (int j = 0; j < A[i].size(); j++) {
                    reader >> A[i][j];
                }
            } // Converts file to matrix.
            reader.close(); // Close the reader as there is no longer use for it.
        }
        void output(){
            cout << "Solution:" << endl;
            for (int i = 0; i < result.size(); i++) {
                cout << "x" << i << " = " << result[i] << endl;
            }
        }
        void calculate() {
            int n = A.size();
            result.resize(size, 0);

            for(int i = 0; i < n; i++) {
                double maxElement = abs(A[i][i]);
                int maxRow = i;
                for(int k = i + 1; k < n; k++) {
                    if (abs(A[k][i]) > maxElement) {
                        maxElement = abs(A[k][i]);
                        maxRow = k;
                    }
                }

                if(maxRow != i) {
                    swapRows(i, maxRow);
                }

                for(int j = i + 1; j < n; j++) {
                    double factor = A[j][i] / A[i][i];
                    for(int k = 1; k < n + 1; k++) {
                        A[j][k] -= factor * A[i][k];
                    }
                }
            }
            for(int i = n - 1; i >= 0; i--) {
                result[i] = A[i][n] / A[i][i];
                for(int j = i - 1; j >= 0; j--) {
                    A[j][n] -= A[j][i] * result[i];
                }
            }

        }
};



int main() {
    GaussianElimination problem1{};
    problem1.input("input3a.txt");
    problem1.calculate();
    problem1.output();
}