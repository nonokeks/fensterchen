#include "circle.hpp"
#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle(double r) : radius_{r} {}

Circle::Circle() : radius_{0.0} {}

Circle::~Circle(){}

double Circle::radius() const{
	return radius_;
}