#include "point2d.hpp"
#define _USE_MATH_DEFINES
#include <cmath>

Point2d::Point2d(float x, float y) : x_{x}, y_{y} {}

Point2d::Point2d() : x_{0.0}, y_{0.0} {}

Point2d::~Point2d(){}

float Point2d::x() const { 
	return x_;
}

float Point2d::y() const {
	return y_;
}

void Point2d::translate(float x, float y){
	x_ = x_ + x;
	y_ = y_ + y;
}

void Point2d::rotate(float alpha){
	float xx = x_;
	float yy = y_;
	x_ = (xx*cos(-M_PI + alpha)) - (yy*sin(-M_PI + alpha));
	y_ = (xx*sin(-M_PI + alpha)) + (yy*cos(-M_PI + alpha));
}