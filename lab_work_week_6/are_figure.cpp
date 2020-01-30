#include "are_figure.h"
Area_figure::Area_figure() {
    this->hight = 0;
    this->width = 0;
    this->lenght = 0;
    this->radius = 0;
}
float Area_figure::Area() {
    return 0;
}
void Area_figure::Set_hight(float hight) {
    this->hight = hight;
}
void Area_figure::Set_radius(float radius) {
    this->radius = radius;
}
void Area_figure::Set_width(float width) {
    this->width = width;
}
void Area_figure::Set_lenght(float lenght) {
    this->lenght = lenght;
}
Area_figure::~Area_figure() {
}
Circle_are::Circle_are(float radius) :Area_figure() {
      Set_radius(radius);
}
float Circle_are::Area() {
    return PI * (radius * radius);
}
Triangle_are::Triangle_are(float lenght, float hight) :Area_figure() {
    Set_lenght(lenght);
    Set_hight(hight);
}
float Triangle_are::Area() {
    return ((0.5) * (lenght * hight));
}
rectangle_are::rectangle_are(float lenght, float width) :Area_figure() {
    Set_lenght(lenght);
    Set_width(width);
}
float rectangle_are::Area() {
    return (lenght * width);
}
trapeze_are::trapeze_are(float lenght, float width, float hight) :Area_figure() {
    Set_lenght(lenght);
    Set_width(width);
    Set_hight(hight);
}
float trapeze_are::Area() {
    return ((0.5) * ((lenght + hight) * hight));
}
