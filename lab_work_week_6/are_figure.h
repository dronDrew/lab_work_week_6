#pragma once
#include "dependies.h"
class Area_figure
{
protected:
    float lenght;
    float width;
    float hight;
    float radius;
public:
    Area_figure();
    void Set_hight(float hight);
    void Set_radius(float radius);
    void Set_width(float width);
    void Set_lenght(float lenght);
    float virtual Area();
    virtual~Area_figure();
};
class Circle_are :public Area_figure {
public:
    Circle_are(float radius);
    virtual float Area();
};
class Triangle_are :public Area_figure {
public:
    Triangle_are(float lenght, float hight);
    virtual float Area();
};
class rectangle_are :public Area_figure {
public:
    rectangle_are(float lenght, float hight);
    virtual float Area();
};
class trapeze_are :public Area_figure {
public:
    trapeze_are(float lenght, float width, float hight);
    virtual float Area();
};

