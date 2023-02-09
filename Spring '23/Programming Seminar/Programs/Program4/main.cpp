/*
Jordan Deuley
Nikola Sasaroga
Program #4
*/


#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main() {
    ifstream file("input1.txt");
    string word;
    bool even, odd;
    int letter[26] = {0}; // Our A-Z counters
    while(getline(file, word)) {
        for(int i = 0; i < word.length(); i++) {
            switch(tolower(word[i])) {
            case('a'):
                letter[0]++;
                break;
            case('b'):
                letter[1]++;
                break;
            case('c'):
                letter[2]++;
                break;
            case('d'):
                letter[3]++;
                break;
            case('e'):
                letter[4]++;
                break;
            case('f'):
                letter[5]++;
                break;
            case('g'):
                letter[6]++;
                break;
            case('h'):
                letter[7]++;
                break;
            case('i'):
                letter[8]++;
                break;
            case('j'):
                letter[9]++;
                break;
            case('k'):
                letter[10]++;
                break;
            case('l'):
                letter[11]++;
                break;
            case('m'):
                letter[12]++;
                break;
            case('n'):
                letter[13]++;
                break;
            case('o'):
                letter[14]++;
                break;
            case('p'):
                letter[15]++;
                break;
            case('q'):
                letter[16]++;
                break;
            case('r'):
                letter[17]++;
                break;
            case('s'):
                letter[18]++;
                break;
            case('t'):
                letter[19]++;
                break;
            case('u'):
                letter[20]++;
                break;
            case('v'):
                letter[21]++;
                break;
            case('w'):
                letter[22]++;
                break;
            case('x'):
                letter[23]++;
                break;
            case('y'):
                letter[24]++;
                break;
            case('z'):
                letter[25]++;
                break;
            }
        }
        even = false; // Resets conditions
        odd = false; // ^^^
        for(int j = 0; j < 26; j++) {
            if(letter[j] % 2 == 0 && letter[j] != 0) {
                even = true;
                letter[j] = 0; // Resets condition
            } else if(letter[j] % 2 != 0 && letter[j] != 0) {
                odd = true;
                letter[j] = 0; // Resets condition
            }
        }
        if((even == true) && (odd == true)) {
            cout << "2" << endl;
        } else if ((even == false) && (odd == true)) {
            cout << "1" << endl;
        } else if ((even == true) && (odd == false)) {
            cout << "0" << endl;
        }
    }

    file.close();
}
