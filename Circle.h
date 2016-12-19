#pragma once

#include "Shape.h"
#include "Point.h"

class Circle : public Shape
{	
public:
	Circle(const Point& crd, const int& rad);
	Circle(const Circle &) = default;
    Circle& operator=(const Circle&) = default;

public:
	void set_radius(const int& rad);
	unsigned int get_radius() const;
	void set_center_crd(const Point&);
	const Point& get_center_crd() const;


public:
	virtual double area() const;
	virtual double perimeter() const;

public:
	bool operator==(const Circle& other) const;
	bool operator!=(const Circle& other) const;

public:
	friend std::ostream& operator<<(std::ostream& , const Circle&);

private:
	unsigned int m_radius;
	Point m_center_crd;
};
