//Maissan u19101625
// Created by LENOVO 3 on 10/7/2020.
//

#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;

void triangle::set(double a, double b, double c){
    sideA =a;
    sideB =b;
    sideC =c;
    findPerimeter();
    findArea();
}

void triangle::get(double& a, double& b, double& c) const{
    a=sideA;
    b=sideB;
    c=sideC;
}

void triangle::findPerimeter(){
    perimeter = sideA + sideB + sideC;
}
void triangle::findArea(){
    double t;
    t = (sideA + sideB + sideC) / 2;
    area = sqrt(t*(t-sideA)*(t-sideB)*(t-sideC));
}
double triangle::getArea() const{
    return area;
}
double triangle::getPerimeter() const{
    return perimeter;
}
void triangle::display() const{
    cout << "The three sides of the triangle are: " << sideA << ", " << sideB << ", " << sideC << endl<<endl;
    cout << "Perimeter     = " << getPerimeter()<<endl;
    cout << "Area          = " << getArea() << endl<<endl;
}

triangle::triangle(double a, double b, double c){
    set(a, b, c);
}