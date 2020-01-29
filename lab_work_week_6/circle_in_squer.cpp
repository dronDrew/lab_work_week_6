#include "circle_in_squer.h"
Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}
Point::Point() {
    this->x = 0;
    this->y = 0;
}
void Point::Set_point(int x, int y) {
    this->x = x;
    this->y = y;
}
void Point::Get_point_cordinat() {
    std::cout << "x: " << this->x << " y: " << this->y << std::endl;
}
Line::Line() {
    this->Length = 0;
    this->side_location = '\0';
}
Line::Line(int x_of_begin, int y_of_begin, int length, char side_location):Point(x_of_begin, y_of_begin) {
    this->Length = length;
    this->side_location = side_location;
}
void Line::Set_line(int x_of_begin, int y_of_begin, int length, char side_location) {
    this->Length = length;
    this->side_location = side_location;
    this->Set_point(x_of_begin, y_of_begin);
}

void Line::Get_line_info() {
    std::cout << "Line info\n";
   // std::cout << "x : " << this->x << " y: " << this->y << std::endl;
    if (side_location=='h'|| side_location == 'H')
    {
        for (int i = 0; i < this->Length; i++)
        {

            std::cout << "x : " << this->x << " y: " << this->y + i << std::endl;
        }
    }
    else {
    
        for (int i = 0; i < this->Length; i++)
        {

            std::cout << "x : " << this->x+i << " y: " << this->y << std::endl;
        }
    }
    
}
Squer::Squer(int x_of_begin, int y_of_begin, int length):Point(x_of_begin,y_of_begin),Line(x_of_begin, y_of_begin,length,'h') {
    this->side = 4;
   
}
Squer::Squer() {
    this->side = 0;
}
void Squer::Set_squer(int x_of_begin, int y_of_begin, int length) {
    this->side = 4;
    Point::x = x_of_begin;
    Point::y = y_of_begin;
    Line::Length = length;
    Line::side_location = 'h';
}

void Squer::Get_Squer_line() {
    std::cout << "Squer location\n";
        Line::Get_line_info();
        Line::Set_line(Point::x, Point::y + Line::Length, Line::Length, 'v');
        Line::Get_line_info();
        Line::Set_line(Point::x + Line::Length, Point::y, Line::Length, 'h');
        Line::Get_line_info();
        Line::Set_line(Point::x, Point::y, Line::Length, 'v');
        Line::Get_line_info();
}
Circle::Circle(int radius, int x_center, int y_center) :Point(x_center, y_center), Line(x_center, y_center, radius, 'h') {
    this->radius = radius;
    this->Lenght_of_line = 2 * PI * this->radius;
}
Circle::Circle() {
    this->radius = 0;
    this->Lenght_of_line = 0;
}
void Circle::SetCircle(int radius, int x_center, int y_center) {
    this->radius = radius;
    this->Lenght_of_line = 2 * PI * this->radius;
}
void Circle::Get_Circle_info() {
    std::cout << "Circle_info : \n";
    std::cout << "center point courdinat:"; Point::Get_point_cordinat();
    std::cout << "radius lenght :" << this->radius << std::endl;
    std::cout << "Radius coordinat\n";
    this->Get_line_info();
    std::cout << "The langht of line wich drow the circle: " << this->Lenght_of_line << std::endl;
}
circle_in_squer::circle_in_squer(int radius, int x_center_of_circle, int y_center_of_circle) :Circle(radius, x_center_of_circle, y_center_of_circle), Squer((x_center_of_circle - radius), (y_center_of_circle - radius), (radius + radius)) {
}
void circle_in_squer::Get_info() {
    std::cout << "Info about Circle in squer\n" << std::endl;
    this->Get_Circle_info();
    this->Get_Squer_line();
}
