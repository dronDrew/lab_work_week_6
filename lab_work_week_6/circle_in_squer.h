#pragma once
#include "dependies.h"
class Point {
	int x;
	int y;
public:
	Point(int, int);//done
	Point();//done
	void Get_point_cordinat();//done
	void Set_point(int x, int y);
};
class Line:protected Point {
	int Length;
	char side_location;
	Point* begin;
public:
	Line();//done
	Line(int x_of_begin, int y_of_begin, int length, char side_location);//h-horizontal,v-vertical;
	void Get_line_info();//done
	void Set_line(int x_of_begin, int y_of_begin, int length, char side_location);//done
	~Line();//done
};
class Squer :protected Line {
	int side;
	Line* all_line;
public:
	Squer(int x_of_begin, int y_of_begin, int length);//done
	void Get_Squer_line();//done
	~Squer();//done
};
class Circle:public Line,public Point {
	Point point_center;
	float radius;
	Line line_drow;
public:
	Circle();
	void Get_Circle_info();
};
class circle_in_squer:public Circle,public Squer
{
	Squer outside;
	Circle inside;
public:
	void Get_info();
};

