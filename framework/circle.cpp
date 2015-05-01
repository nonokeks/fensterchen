#include "circle.hpp"
#define _USE_MATH_DEFINES
#include <cmath>
#include <point2d.hpp>
#include <color.hpp>

Circle::Circle(double r, double x, double y, double c1, double c2, double c3) : radius_{r}, punkt_{x,y}, farbe_{c1, c2, c3} {}

Circle::Circle(double r, double x, double y) : radius_{r}, punkt_{x,y} {}

Circle::Circle() : radius_{0.0}, punkt_{0.0,0.0} {}

Circle::~Circle(){}

double Circle::radius() const{
	return radius_;
}

Point2d Circle::punkt() const{
	return punkt_;
}

double Circle::circumference() const{
	return (2 * M_PI * radius_);
}