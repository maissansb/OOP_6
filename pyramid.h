//
// Created by LENOVO 3 on 10/7/2020.
//

#include "triangle.h"

class pyramid: public triangle
{
public:
    void set(double, double, double, double);
    void findSurfaceArea();
    void findVolume();
    void display() const;
    pyramid(double = 0, double = 0, double = 0, double = 0);

private:
    double height, surfaceArea, volume;
};

#ifndef LAB5_PYRAMID_H
#define LAB5_PYRAMID_H

#endif //LAB5_PYRAMID_H
