#include "rectangle.hpp"
#include <point2d.hpp>
#include <color.hpp>

Rectangle::Rectangle(double a, double b, double x, double y, double c1, double c2, double c3): a_{a}, b_{b}, punkt_{x,y}, f_{c1,c2,c3} {}

Rectangle::Rectangle(double a, double b, double x, double y) : a_{a}, b_{b}, punkt_{x,y} {}

Rectangle::Rectangle() : a_{1.0}, b_{1.0}, punkt_{0.0, 0.0} {}

Rectangle::~Rectangle(){}

double Rectangle::hoehe() const{
	return a_;
}

double Rectangle::breite() const{
	return b_;
}

Point2d Rectangle::punkt() const{
	return punkt_;
}

double Rectangle::circumference() const{
	return (2 * a_ + 2 * b_);
}