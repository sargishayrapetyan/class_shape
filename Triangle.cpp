#include <iostream>
#include <cmath>

#include "Triangle.h"

Triangle::Triangle(const Point& crd1, const Point& crd2, const Point& crd3)
{
	if (are_valid_triangle_crds(crd1, crd2, crd3)) {
		m_left_crd = crd1;
		m_high_crd = crd2;
		m_right_crd = crd3;
	}

}

void Triangle::set_left_crd(const Point& crd1)
{
	m_left_crd = crd1;
}

void Triangle::set_high_crd(const Point& crd2)
{
	m_high_crd = crd2;
}

void Triangle::set_right_crd(const Point& crd3)
{
	m_right_crd = crd3;
}

const Point Triangle::get_left_crd() const
{
	return m_left_crd;
}

const Point Triangle::get_high_crd() const
{
	return m_high_crd;
}

const Point Triangle::get_right_crd() const
{
	return m_right_crd;
}

bool Triangle::operator==(const Triangle& other) const
{
	return ( m_left_crd == other.m_left_crd &&
			m_high_crd == other.m_high_crd
			&& m_right_crd == other.m_right_crd);
}

bool Triangle::operator!=(const Triangle& other) const
{
	return !(*this == other);
}

double Triangle::area() const
{
	const double a = sqrt(std::abs(pow((m_high_crd.get_x() - 
						m_left_crd.get_x()), 2)
	             + pow((m_high_crd.get_y() - m_left_crd.get_y()), 2)));

	const double b = sqrt(std::abs(pow((m_high_crd.get_x() - 
						m_right_crd.get_x()), 2)
				 + pow((m_high_crd.get_y() - m_right_crd.get_y()), 2)));

	const double c = sqrt(std::abs(pow((m_right_crd.get_x() - 
						m_left_crd.get_x()), 2)
				 + pow((m_right_crd.get_y() - m_left_crd.get_y()), 2)));

	double p = (a + b + c)/2;

	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Triangle::perimeter() const
{
	const double a = sqrt(std::abs(pow((m_high_crd.get_x()
											- m_left_crd.get_x()), 2)
		         				 + pow((m_high_crd.get_y()
						 					- m_left_crd.get_y()), 2)));

	const double b = sqrt(std::abs(pow((m_high_crd.get_x() - 
						m_right_crd.get_x()), 2)
				 + pow((m_high_crd.get_y() - m_right_crd.get_y()), 2)));

	const double c = sqrt(std::abs(pow((m_right_crd.get_x() -
						m_left_crd.get_x()), 2)
				 + pow((m_right_crd.get_y() - m_left_crd.get_y()), 2)));

	return (a + b + c);
}


void Triangle::print() const
{

	std::cout << *this << std::endl;

}


std::ostream& operator<<(std::ostream& os, const Triangle& triangle)
{
	os << "m_left_crd =" <<'('<< triangle.m_left_crd.get_x() <<
		','<<triangle.m_left_crd.get_y() <<')';
	os << "m_high_crd =" <<'('<< triangle.m_high_crd.get_x() <<
		','<<triangle.m_high_crd.get_y() <<')';
	os << "m_right_crd =" <<'('<< triangle.m_right_crd.get_x() <<
		','<<triangle.m_right_crd.get_y() <<')';
	return os;
}

bool Triangle::are_valid_triangle_crds(const Point& left, const Point& high, const Point& right)
{

	return (((left.get_x() - high.get_x()) * 
				(high.get_y() - right.get_y())) !=
			((high.get_x() - right.get_x()) * 
			 (left.get_y() - high.get_y())));

}

