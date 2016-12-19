#pragma once

#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape
{
public:
	Rectangle(const Point& crd_1, const Point& crd_2);
	Rectangle(const Rectangle&) = default;
	Rectangle& operator=(const Rectangle& ohter) = default;

public:
	void set_left_low_crd(const Point& crd_1);
	const Point& get_left_low_crd() const;
	void set_right_high_crd(const Point& crd_2);
	const Point& get_right_high_crd() const;

public:
	double get_height() const;
	double get_width() const;

public:
	virtual double area() const;
	virtual double perimeter() const;

public:
	bool operator==(const Rectangle& ohter) const;
	bool operator!=(const Rectangle& ohter) const;

public:
	static bool are_valid_rectangle_crd(const Point&, const Point&);

public:
	friend std::ostream& operator<<(std::ostream& , const Rectangle&);

private:
	Point m_left_low_crd;
	Point m_right_high_crd;
};
