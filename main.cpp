#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

void Point_test()
{ 

	Point p;
	std::cout << "=======test default constructor=======" << std::endl;
	std::cout << "condinates of p : " << p <<  std::endl;

	std::cout << "=======test constructor with parameter=======" << std::endl;
	Point p1(8.7, 7.3); 		
	std::cout << "cordinates of p1 : " << p1 <<  std::endl;

	Point p2(8.7, 7.3);
	if(p1 == p2)
		std::cout << "===== operator== passed ======" <<  std::endl;
	if(p1 != p)
		std::cout << "===== opertaor!= passed ======" << std::endl;
	
	Point temp = p1 - p2;
	std::cout << "==== test  operator- ====" << std::endl;
	std::cout << "cordinates of temp :" << temp << std::endl;

	p = p2;
	if(p2 == p1){
		std::cout << "==== test operator= ====" << std::endl;
		std::cout << "cordinates of p1 and p2 : " << p2 << std::endl;
	}
}



void Rectangle_test()
{
	Point p1(2, 4);
	Point p2(2, 5);
	Rectangle rec1(p1, p2);
	std::cout <<"====test Rectangle constructor==== " << std::endl;
	std::cout <<"====test Rectangle::operator<< ====" << std::endl;
	std::cout <<"====test invalide Rectangle ====" << std::endl;
	std::cout <<"vertex of a: " << rec1 <<std::endl; 
	
	Point p3(2, 4);
	Point p4(3, 6);

	Rectangle rec2(p3, p4);
	std::cout <<"====test valid rectangle ====" << std::endl;
	std::cout << "vertex of rec2 : " << rec2 << std::endl;	
	
	if(rec1 != rec2){
		std::cout <<"==== operator!= passed ===="<< std::endl;
	}

	Rectangle rec3 = rec2;
	if(rec2 == rec3){
		std::cout << "====operator= passed====" << std::endl;
		std::cout << "====operator== passed====" <<std::endl;
	}	

	std::cout << "====test Rectangle::area() funtcion====" << std::endl;
	std::cout << "area of rec2 : " << rec2.area() << std::endl;
	
	std::cout <<"====test Rectangle::perimeter() function====" << std::endl;
	std::cout << "perimeter of rec3 : " << rec3.perimeter() << std::endl;
}



void Triangle_test()
{

	Point p1(2, 4);
	Point p2(3, 6);
	Point p3(3, 6);
	Triangle tr1(p1, p2, p3);
	std::cout <<"====test triangle constructor====" << std::endl;
	std::cout <<"====test invalide triangle====" << std::endl;
	std::cout <<"====test Triangle::operator<< ====" << std::endl;
	std::cout <<"vertex of tr1 : " << tr1 << std::endl; 
	Point p4(3, 4);
	Triangle tr2(p1, p2, p4);

	std::cout <<"====test Triangle::area() funtcion====" << std::endl;
	std::cout <<"area of tr2 : " << tr2.area() << std::endl;
	std::cout <<"====test Triangle::perimeter() function====" << std::endl;
	std::cout <<"perimeter of tr2 : " << tr2.perimeter() <<std::endl;
}


void Circle_test()
{
	Point p(0, 0);
	int radius = 13;
	Circle c(p, radius);

	std::cout <<"====get c radius====" << std::endl;
	std::cout <<"c radius : " << c.get_radius() << std::endl;
	std::cout <<"====test Circle::area() function====" << std::endl;
	std::cout <<"area of c : " << c.area() << std::endl; 
	
	std::cout <<"====test Circle::perimeter() function====" << std::endl;
	std::cout <<"perimeter of c : " << c.perimeter() << std::endl; 
}

int main()
{
    Circle_test();
	std::cout <<"++++++++++++++++++++++++++++++++++++++" << std::endl;
	Triangle_test();
	std::cout <<"+++++++++++++++++++++++++++++++++++++" << std::endl;
	Rectangle_test();
	std::cout <<"+++++++++++++++++++++++++++++++++++++" << std::endl;
	Point_test();
}
