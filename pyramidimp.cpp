//
// Created by LENOVO 3 on 10/7/2020.
//
#include <iostream>
#include <cmath>
#include "pyramid.h"

using namespace std;

void pyramid::set(double a,double b,double c,double h){
    triangle::set(a,b,c);
    height=h;
    findSurfaceArea();
    findVolume();
}

void pyramid::findSurfaceArea(){
    double r, s, t;

    t= (sideA + sideB + sideC) / 2;
    r= sqrt((t-sideA)*(t-sideB)*(t-sideC)/t);
    s= sqrt((height*height) + (r*r));
    surfaceArea = getArea() + s * getPerimeter() / 2;
}

void pyramid::findVolume(){
    volume= (height * getArea())/3;
}

void pyramid::display() const{
    triangle::display();
    cout << "Pyramid height         = " << height<<endl;
    cout << "Pyramid surface area   = " << surfaceArea<<endl;
    cout << "Pyramid volume         = " << volume << endl<<endl;
}

pyramid::pyramid(double a, double b, double c, double h)
        :triangle(a,b,c)
{
    height = h;
    findSurfaceArea();
    findVolume();
}

