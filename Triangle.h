#pragma once

#include "Shape.h"
#include "Point.h"

class Triangle : public Shape
{
public:
	Triangle(const Point& crd1, const Point& crd2, const Point& crd3);
	Triangle(const Triangle&) = default;
	Triangle& operator=(const Triangle& other) = default;

public:
	void set_left_crd(const Point& crd1);
	void set_high_crd(const Point& crd2);
	void set_right_crd(const Point& crd3);
	const Point get_left_crd() const;
	const Point get_high_crd() const;
	const Point get_right_crd() const;

public:
	bool operator==(const Triangle& other) const;
	bool operator!=(const Triangle& other) const;

public:
	virtual double area() const;
	virtual double perimeter() const;
	virtual void print() const;

public:
	friend std::ostream& operator<<(std::ostream&, const Triangle&);

public:
    static bool are_valid_triangle_crds(const Point&,
										const Point&,
										const Point&);
private:
	Point m_left_crd;
	Point m_high_crd;
	Point m_right_crd;
};
