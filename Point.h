#pragma once

class Point
{
public:
		Point();
		Point(const double&, const double&);
public:
		bool operator==(const Point& other) const;
        bool operator!=(const Point& other) const;
		Point operator-(const Point& other);
public:
		void set_x(double& x);
		void set_y(double& y);
		double get_x() const;
		double get_y() const;
public:
		friend std::ostream& operator<<(std::ostream& , const Point&);

private:
		double m_x;
		double m_y;
};
