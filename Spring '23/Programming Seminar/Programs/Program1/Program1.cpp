/*
 * Jordan Deuley
 * Logan Richerson
 * 1/12/23
 * Program 1
 * Programming Seminar
 */

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main() {
    ifstream inFile(""); //Input File Location Here
    ofstream outFile(""); //Output File Location Here
    vector<int> match;
    int arraySize, x, y;
    string listOfNumbers;


    inFile >> arraySize;
    int listOne[arraySize];
    for(int i = 0; i < arraySize; i++) {
        inFile >> listOne[i];
    }
    inFile >> arraySize;
    int listTwo[arraySize];
    for(int i = 0; i < arraySize; i++) {
        inFile >> listTwo[i];
    }

    x = 0;
    y = 0;
    while( x< sizeof(listOne) / sizeof(listOne[0]) && y < sizeof(listTwo) / sizeof(listTwo[0])) {

        if(listOne[x] > listTwo[y])
        {
            y++;
        }
        else if(listOne[x] < listTwo[y])
        {
            x++;
        }
        else
        {
            match.push_back(listOne[x]);
            x++;
            y++;
        }
    }


    for(int i : match) {
        cout << i << " ";
        outFile << i << " ";
    }

    outFile.close();


    inFile.close();
}