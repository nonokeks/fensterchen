#include "point2d.hpp"
#define _USE_MATH_DEFINES
#include <cmath>

Point2d::Point2d(double x, double y) : x_{x}, y_{y} {}

Point2d::Point2d() : x_{0.0}, y_{0.0} {}

Point2d::~Point2d(){}

double Point2d::x() const { 
	return x_;
}

double Point2d::y() const {
	return y_;
}

void Point2d::translate(double x, double y){
	x_ = x_ + x;
	y_ = y_ + y;
}

void Point2d::rotate(double alpha){
	double xx = x_;
	double yy = y_;
	x_ = (xx*cos(-M_PI + alpha)) - (yy*sin(-M_PI + alpha));
	y_ = (xx*sin(-M_PI + alpha)) + (yy*cos(-M_PI + alpha));
}