#include <iostream>
#include <fstream>
using namespace std;

/*

Jordan Deuley
Nikola Sasaroga

*/

int main() {
    string a, b, c;
    int n;
    int size;
    ifstream in;
    in.open("input.txt");
    in >> size;

    for(int o = 0; o < size; o++) {
        in >> n;
        in >> c;
        in >> a;
        a.pop_back();
        in >> b;

        for(int i = 0; i < n; i++) {
            if(i == 0) {
                cout << a << endl;
            } else if (i == 1) {
                cout << b << endl;
            } else {
            c = a + b;
            a = b;
            b = c;
            cout << c << endl;
            }
        }
        cout << endl;
    }

}
