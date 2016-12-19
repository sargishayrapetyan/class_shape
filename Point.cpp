#include <iostream>

#include "Point.h"

using std::cout;
using std::endl;

Point::Point()
	: m_x(0)
	, m_y(0)
{
}

Point::Point(const double& x, const double& y)
	: m_x(x)
	, m_y(y)
{
}

Point Point::operator-(const Point& other)
{
	m_x -= other.m_x;
	m_y -= other.m_y;

	return *this;
}

bool Point::operator==(const Point& other) const
{
	return(m_x == other.m_x && m_y == other.m_y);
}

bool Point::operator!=(const Point& other) const
{
	return !(*this == other);
}

double Point::get_x() const
{
	return m_x;
}

void Point::set_x(double& x)
{
	m_x = x;
}

double Point::get_y() const
{
	return m_y;
}

void Point::set_y(double& y)
{
	m_y = y;
}
 
std::ostream& operator<<(std::ostream& os, const Point& point)
{
	os << '(' << point.m_x << ',' << point.m_y << ')';
	return os;
}
