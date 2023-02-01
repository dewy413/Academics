#include <iostream>

using namespace std;


bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    } else {
        return false;
    }
}
int main()
{
    string userstring;
    int vowelCounter = 0;

    cout << "Enter your string:";
    getline(cin,userstring);
    for(char i : userstring) {
        if (isVowel(tolower(i))) {
            vowelCounter++;
        }
    }

    cout << "Your sentence had " << vowelCounter << " vowels!";
}
