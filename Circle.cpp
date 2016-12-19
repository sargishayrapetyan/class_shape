#include <iostream>
#include <cmath>

#include "Circle.h"

using std::cout;

Circle::Circle(const Point& crd, const int& rad)
	: m_center_crd(crd)
	, m_radius(rad)
{
}

void Circle::set_radius(const int& rad)
{
	m_radius = rad;
}

unsigned int Circle::get_radius() const
{
	return m_radius;
}

void Circle::set_center_crd(const Point& crd)
{
	m_center_crd = crd;
}

const Point& Circle::get_center_crd() const
{
	return m_center_crd;
}

double Circle::perimeter() const
{
	return(2 * 3.14 * m_radius);
}

double Circle::area() const
{
	return 3.14 * pow(m_radius, 2);
}

std::ostream& operator<<(std::ostream& output, const Circle& circle)
{
	output << circle.m_radius <<'('<< circle.m_center_crd.get_x() 
	   << circle.m_center_crd.get_y() << ')';
	return output;
}

bool Circle::operator==(const Circle& other) const
{
	return (m_center_crd == other.m_center_crd
			&& m_radius == other.m_radius);
}

bool Circle::operator!=(const Circle& other) const
{
	return !(*this == other);
}
