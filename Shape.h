#pragma once

class Shape
{
public:
	virtual ~Shape() {}

public:
	virtual double area() const = 0;
	virtual double perimeter() const = 0;
	virtual void print() const = 0;
};
