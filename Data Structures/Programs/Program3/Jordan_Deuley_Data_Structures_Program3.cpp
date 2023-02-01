#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

class circle
{
public:
    void print() {cout << "Radius: " << radius << endl << "Area: " << area();}
    void setRadius(double r) {radius = r;}
    double getRadius() {return radius;}
    double area() {return 3.14159 * pow(radius, 2);}
    circle(double r) {radius = r;}
    circle() {radius = 0.0;}
private:
    double radius;
};

class cylinder: public circle
{
public:
    void print() {cout << "Radius: " << circle::getRadius() << endl << "Area: " << area() << endl << "Volume: " << volume() << endl << "Height" << height;}
    void setHeight(double h) {height = h;}
    double getHeight() {return height;}
    double volume() {return circle::area() * height;}
    double area() {return 2 * (3.14159 * circle::getRadius() * height) * 2 * circle::area();}
    cylinder(double r, double h) {cylinder::setRadius(r); height = h;}
    cylinder() {cylinder::setRadius(0.0); height = 0;}

private:
    double height;
};


int main(){
    circle newCircle;
    cylinder newCylinder;
    newCircle.setRadius(5);
    newCylinder.setHeight(3);
    newCylinder.setRadius(2);
    cout << newCircle.area() << endl;
    cout << newCylinder.volume() << endl;
}
