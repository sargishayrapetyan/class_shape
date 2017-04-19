#include <iostream>
#include <cmath>

#include "Rectangle.h"
using std::cout;

Rectangle::Rectangle(const Point& crd_1, const Point& crd_2)
{    
	if(are_valid_rectangle_crd(crd_1, crd_2)) {
	    m_left_low_crd = crd_1;
	    m_right_high_crd = crd_2;
	}
}

void Rectangle::set_left_low_crd(const Point& crd_1)
{
    m_left_low_crd = crd_1;
}

const Point& Rectangle::get_left_low_crd() const
{
	return m_left_low_crd;
}

void Rectangle::set_right_high_crd(const Point& crd_2)
{
    m_right_high_crd = crd_2;
}

const Point& Rectangle::get_right_high_crd() const
{
	return m_right_high_crd;
}

double Rectangle::get_height() const
{
	return (m_right_high_crd.get_y() - m_left_low_crd.get_y());
}

double Rectangle::get_width() const
{
	return (m_right_high_crd.get_x() - m_left_low_crd.get_x());
}

double Rectangle::area() const
{
	return (this->get_width() * this->get_height());
}

double Rectangle::perimeter() const
{
	return ((2 * this->get_width()) +
		(2 * this->get_height()));
}

void Rectangle::print() const
{

	std::cout << *this << std::endl;

}

std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle)
{
	os << "m_left_low_crd =" <<'(' <<rectangle.m_left_low_crd.get_x()<<
		','<< rectangle.m_left_low_crd.get_y()<< ')';
	os <<"m_right_high_crd =" <<'(' <<rectangle.m_right_high_crd.get_x()
		<<','<< rectangle.m_right_high_crd.get_y()<< ')';
	return os;

}

bool Rectangle::operator==(const Rectangle& other) const
{
	return (m_left_low_crd == other.m_left_low_crd 
			&& m_right_high_crd == other.m_right_high_crd);
}

bool Rectangle::operator!=(const Rectangle& other) const
{
	return !(*this == other);
}

bool Rectangle::are_valid_rectangle_crd(const Point& low, const Point& high)
{
	return ((high.get_x() > low.get_x())
			&& (high.get_y() > low.get_y()));
}
