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
		delete[]this->begin;
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