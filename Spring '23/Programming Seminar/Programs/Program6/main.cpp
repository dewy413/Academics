#include <iostream>
#include <fstream>
#include <algorithm>

/*
 * Jordan Deuley
 * 3/8/23
 * Pledged
 * Program 6
 */

using namespace std;

bool twoDigitChecker(int number) {
    int numberCounter[10] = {0};
    int k;
    bool outcome = true;
    string digitsAsNumbers = to_string(number);

    for(char digitsAsNumber : digitsAsNumbers) {
        k = int(digitsAsNumber) - '0';
        numberCounter[k]++;
    }
    k = 0;
    for(int i : numberCounter) {
        if(i > 0) {
            k++;
        }
        if(k > 2) {
           break;
        }
    }
    if(k != 2) {outcome = false;}
    return outcome;
}


int main() {
    int size, number, multiple;
    ifstream in;
    in.open(R"(C:\Users\jordan.deuley\CLionProjects\Program6\input1.txt)");
    in >> size;
    for(int i = 0; i < size; i++) {
        in >> number;
        multiple = number;
        if(!twoDigitChecker(number)) {
            do {
                multiple += number;
            } while (!twoDigitChecker(multiple));
        }
        cout << number << endl << multiple << endl << endl;
    }



}
