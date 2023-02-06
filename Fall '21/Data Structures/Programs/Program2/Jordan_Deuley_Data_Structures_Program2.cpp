#include <iostream>
#include <string>

using namespace std;
class personType {

public:
    personType(){}
    personType(string n, int a, string h, int w) {name = n; age = a; height = h, weight = w;}
    string getName() {
        return name;
    }
    void setName(string n) {
        name = n;
    }
    int getAge() {
        return age;
    }
    void setAge(int a) {
        age = a;
    }
    string getHeight() {
        return height;
    }
    void setHeight(string h) {
        height = h;
    }
    int getWeight() {
        return weight;
    }
    void setWeight(int w) {
        weight = w;
    }
    ~personType(){}

private:
    string name;
    int age;
    string height;
    int weight;
};


int main(){
    personType myperson;
    personType myfriend("Jojo", 19, "5ft10", 150);
    myperson.setName("Jordan");
    myperson.setHeight("6ft2");
    myperson.setAge(19);
    myperson.setWeight(130);

    cout << myperson.getAge() << endl;
    cout << myperson.getHeight() << endl;
    cout << myperson.getName() << endl;
    cout << myperson.getWeight() << endl;

    cout << myfriend.getAge() << endl;
    cout << myfriend.getHeight() << endl;
    cout << myfriend.getName() << endl;
    cout << myfriend.getWeight() << endl;

}

