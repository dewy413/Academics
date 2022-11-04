#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class List {
public:
    List() {length = 0; currentPos = 0;};

    void makeEmpty() {
        length = 0;
        currentPos = 0;
    }

    bool isFull() const {return (length == 100);}

    int getLength() const { return length; }

    char retrieveItem(char item) {
        int location = 0;
        bool found = false;
        while((location < 100) && (!found)) {
            if(item != info[location]) {
                location++;
            } else {
                found = true;
            }
        }
        if(!found) {
            return -1;
        } else {
            return item;
        }
    }

    void insertItem(char item) {
        info[length] = item;
        length++;
    }

    void deleteItem(char item) {
        int location = 0;

        while(item != info[location]) {
            location++;
        }
        info[location] = info[length - 1];

        length--;
    }


    void showList() {
        for(int i = 0; i < length; i++) {
            if(i != 0) {
                cout << info[i];
            }
        }
    }
    char getNext() {return info[getLength() + 1];}


private:
    int length;
    char info[100];
    int currentPos;
};

int main() {
    int x, i;
    char z;
    List C;
    ifstream in;
    in.open("C:\\Users\\jdeui\\Documents\\Programming\\Misc\\testingcode\\char.txt");
    for (i = 0; i < 100; i++) {
        in >> z;
        C.insertItem(z);
    }
    cout << "Here is...the list: " << endl;
    C.showList();
    C.deleteItem('P');
    C.deleteItem('V');
    C.deleteItem('O');
    cout << endl << "Now here is the list: " << endl;
    C.showList();
    C.makeEmpty();
    cout << endl << "Now the list is empty: " << endl;
    C.showList();
    in.close();

}
