#include "circle_in_squer.h"
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}
Point::Point() {
	this->x = 0;
	this->y = 0;
}
void Point::Set_point(int x,int y) {
	this->x = x;
	this->y = y;
}
void Point::Get_point_cordinat(){
	std::cout << "x: " << this->x << " y: " << this->y << std::endl;
}
Line::Line() {
	this->Length = 0;
	this->side_location = '\0';
	this->begin = nullptr;
}
Line::Line(int x_of_begin, int y_of_begin, int length, char side_location):Point() {
	this->Length = length;
	this->side_location = side_location;
	this->begin = new Point[this->Length];
	if (side_location == 'h' || side_location == 'H') {
		begin[0].Set_point(x_of_begin, y_of_begin);
		for (int i = 1; i < length; i++)
		{
			y_of_begin++;
			begin[i].Set_point(x_of_begin, y_of_begin);
		}
	}
	else
	{
		begin[0].Set_point(x_of_begin, y_of_begin);
		for (int i = 1; i < length; i++)
		{
			x_of_begin++;
			begin[i].Set_point(x_of_begin, y_of_begin);
		}
	}

}
void Line::Set_line(int x_of_begin, int y_of_begin, int length, char side_location) {
	this->Length = length;
	this->side_location = side_location;
	if (this->begin == nullptr) {
		this->begin = new Point[this->Length];
		if (side_location == 'h' || side_location == 'H') {
			begin[0].Set_point(x_of_begin, y_of_begin);
			for (int i = 1; i < length; i++)
			{
				y_of_begin++;
				begin[i].Set_point(x_of_begin, y_of_begin);
			}
		}
		else
		{
			begin[0].Set_point(x_of_begin, y_of_begin);
			for (int i = 1; i < length; i++)
			{
				x_of_begin++;
				begin[i].Set_point(x_of_begin, y_of_begin);
			}
		}
	}
	else
	{
		//delete[]this->begin;
		this->begin = new Point[this->Length];
		if (side_location == 'h' || side_location == 'H') {
			begin[0].Set_point(x_of_begin, y_of_begin);
			for (int i = 1; i < length; i++)
			{
				y_of_begin++;
				begin[i].Set_point(x_of_begin, y_of_begin);
			}
		}
		else
		{
			begin[0].Set_point(x_of_begin, y_of_begin);
			for (int i = 1; i < length; i++)
			{
				x_of_begin++;
				begin[i].Set_point(x_of_begin, y_of_begin);
			}
		}
	}
}
Line::~Line() {
	delete[]this->begin;
}
void Line::Get_line_info() {
	std::cout << "Line info\n";
	for (int i = 0; i < this->Length; i++)
	{
		this->begin[i].Get_point_cordinat();
	}
}
Squer::Squer(int x_of_begin, int y_of_begin, int length):Line() {
	this->side = 4;
	this->all_line = new Line[this->side];
	this->all_line[0].Set_line(x_of_begin,y_of_begin,length,'h');
    this->all_line[1].Set_line(x_of_begin, y_of_begin+(length-1), length, 'v');
	this->all_line[2].Set_line(x_of_begin+(length-1), y_of_begin, length, 'h');
	this->all_line[3].Set_line(x_of_begin, y_of_begin, length, 'v');
}
Squer::Squer() {
	this->all_line = nullptr;
	this->side = 0;
}
void Squer::Set_squer(int x_of_begin, int y_of_begin, int length) {
	this->side = 4;
	this->all_line = new Line[this->side];
	this->all_line[0].Set_line(x_of_begin, y_of_begin, length, 'h');
	this->all_line[1].Set_line(x_of_begin, y_of_begin + (length - 1), length, 'v');
	this->all_line[2].Set_line(x_of_begin + (length - 1), y_of_begin, length, 'h');
	this->all_line[3].Set_line(x_of_begin, y_of_begin, length, 'v');
}
Squer::~Squer(){
	delete[]this->all_line;
}
void Squer::Get_Squer_line() {
	std::cout << "Squer location\n";
	for (int i = 0; i < this->side; i++)
	{
		this->all_line[i].Get_line_info();
	}
}
Circle::Circle(int radius, int x_center, int y_center):Point(),Line() {
	this->radius = radius;
	this->center.Set_point(x_center, y_center);
	this->line_drow.Set_line(x_center, y_center, radius, 'h');
	this->Lenght_of_line = 2 * PI * this->radius;
}
Circle::Circle() {
	this->center.Set_point(0, 0);
	this->radius = 0;
	this->Lenght_of_line = 0;
	this->line_drow.Set_line(0, 0, 0, 'h');
}
void Circle::SetCircle(int radius, int x_center, int y_center) {
	this->radius = radius;
	this->center.Set_point(x_center, y_center);
	this->line_drow.Set_line(x_center, y_center, radius, 'h');
	this->Lenght_of_line = 2 * PI * this->radius;
}
void Circle::Get_Circle_info() {
	std::cout << "Circle_info : \n";
	std::cout << "center point courdinat:"; center.Get_point_cordinat();
	std::cout << "radius lenght :" << this->radius << std::endl;
	std::cout << "Radius coordinat\n";
	this->line_drow.Get_line_info();
	std::cout << "The langht of line wich drow the circle: " << this->Lenght_of_line << std::endl;
}
circle_in_squer::circle_in_squer(int radius, int x_center_of_circle, int y_center_of_circle, int x_of_begin_squer, int y_of_begin_squer, int length) :Circle(), Squer() {
	this->inside.SetCircle(radius, x_center_of_circle, y_center_of_circle);
	this->outside.Set_squer(x_of_begin_squer, y_of_begin_squer, length);
}
void circle_in_squer::Get_info() {
	std::cout << "Info about Circle in squer\n" << std::endl;
	this->inside.Get_Circle_info();
	this->outside.Get_Squer_line();
}