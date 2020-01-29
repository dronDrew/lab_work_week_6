#pragma once
#include "dependies.h"
class Point {
protected:
    int x;
    int y;
public:
    Point(int, int);//done
    Point();//done
    void Get_point_cordinat();//done
    void Set_point(int x, int y);
};
class Line :protected Point {
protected:
    int Length;
    char side_location;
public:
    Line();//done
    Line(int x_of_begin, int y_of_begin, int length, char side_location);//h-horizontal,v-vertical;
    void Get_line_info();//done
    void Set_line(int x_of_begin, int y_of_begin, int length, char side_location);//done

};
class Squer: protected Line, protected Point {
    int side;
public:
    Squer();//done
    Squer(int x_of_begin, int y_of_begin, int length);//done
    void Set_squer(int x_of_begin, int y_of_begin, int length);//done
    void Get_Squer_line();//done
};
class Circle : protected Line, protected Point {
    int radius;
    float Lenght_of_line;
public:
    Circle();//done
    void SetCircle(int radius, int x_center, int y_center);//done
    Circle(int radius, int x_center, int y_center);//done
    void Get_Circle_info();//done
};
class circle_in_squer : protected Circle, protected Squer
{
public:
    circle_in_squer(int radius, int x_center_of_circle, int y_center_of_circle);//done
    void Get_info();
};
