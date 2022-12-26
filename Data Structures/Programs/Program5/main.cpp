#include <iostream>
#include <string>
using namespace std;


void recursiveFunctionOne(int num) {

    if(num == 0) {return;}
    else {
        for(int i = 1; i <= num; i++) {cout << "*";}
        cout << endl;
        recursiveFunctionOne(num - 1);
        for(int i = 1; i <= num; i++) {cout << "*";}
        cout << endl;
    }
}

void recursiveFunctionTwo(int num, int limit) {
    if (num > limit) {return;}
    else {
        for (int i = 1; i <= num; i++) {cout << "*";}
        cout << endl;
        recursiveFunctionTwo(num + 1, limit);
        for (int i = 1; i <= num; i++) {cout << "*";}
        cout << endl;
    }
}

void recursiveFunctionThree(int num, int limit) {
    if (num > limit) {return;}
    else {
        for (int i = num; i < limit; i++) {
            cout << " ";
        }
        for(int i = 1; i<= num; i++) {
            cout << "* ";
        }
        cout << endl;
        recursiveFunctionThree(num + 1, limit);
        for (int i = num; i <= limit; i++) {
            cout << " ";
        }
        for(int i = 1; i < num; i++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main () {
    recursiveFunctionOne(4);
    cout << endl;
    recursiveFunctionTwo(1, 4);
    cout << endl;
    recursiveFunctionThree(1, 6);
    cout << endl;
}