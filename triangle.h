//
// Created by LENOVO 3 on 10/7/2020.
//

#ifndef LAB5_TRIANGLE_H
#define LAB5_TRIANGLE_H
class triangle
{
public:
    void set(double, double, double);
    void get(double&, double&, double&)const;
    void findArea();
    void findPerimeter();
    void display() const;
    double getPerimeter() const;
    double getArea() const;
    triangle(double=0, double=0, double=0);

protected:
    double sideA, sideB, sideC, area, perimeter;
};


#endif //LAB5_TRIANGLE_H
