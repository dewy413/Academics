/*
Jordan Deuley
Nikola Sasaroga
Program #2
*/


#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    ifstream in;
    int size;
    string pal;
    string word;
    string compare;
    in.open("input.txt");
    in >> size;

    for(int i = 0; i < size; i++) {
        in >> word;
        for(int j = 0; j < word.length(); j++) {
            switch(tolower(word[j])) {
                case 97 ... 99:
                    pal += "2";
                    break;
                case 100 ... 102:
                    pal += "3";
                    break;
                case 103 ... 105:
                    pal += "4";
                    break;
                case 106 ... 108:
                    pal += "5";
                    break;
                case 109 ... 111:
                    pal += "6";
                    break;
                case 112 ... 115:
                    pal += "7";
                    break;
                case 116 ... 118:
                    pal += "8";
                    break;
                case 119 ... 122:
                    pal += "9";
                    break;
                default:
                    break;

            }
        }

        for(int k = pal.length() - 1; k >= 0; k--) {
            compare += pal[k];
        }

        //cout << pal << " " << compare << endl;
        if(pal == compare) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        pal = "";
        compare = "";
    }
    in.close();
}
