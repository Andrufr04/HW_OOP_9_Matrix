#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(int a, int b)
{
	x = a;
	y = b;
}

Point Point::operator+(const Point& obj2)
{
	Point res;
	res.x = this->x + obj2.x;
	res.y = this->y + obj2.y;
	return res;
}
