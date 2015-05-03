#include "circle.hpp"
#define _USE_MATH_DEFINES
#include <cmath>
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>

#define GLM_FORCE_RADIANS
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/gtx/multiple.hpp>

Circle::Circle(float r, float x, float y, float c1, float c2, float c3) : radius_{r}, punkt_{x,y}, farbe_{c1, c2, c3} {}

Circle::Circle(float r, float x, float y) : radius_{r}, punkt_{x,y} {}

Circle::Circle() : radius_{0.0}, punkt_{0.0,0.0} {}

Circle::~Circle(){}

float Circle::getRadius() const{
	return radius_;
}

Point2d Circle::getPunkt() const{
	return punkt_;
}

float Circle::circumference() const{
	return (2 * M_PI * radius_);
}

Color Circle::getColor() const{
	return farbe_;
}

void Circle::draw(Window const& w) const{
	for (int i = 0; i < 1080; ++i)
	{
		w.drawPoint(punkt_.x()+radius_*cos(i),punkt_.y()+radius_*sin(i), farbe_.r, farbe_.g, farbe_.b);
	}
}

void Circle::draw(Window const& w, Color const& c) const{
	for (int i = 0; i < 1080; ++i)
	{
		w.drawPoint(punkt_.x()+radius_*cos(i),punkt_.y()+radius_*sin(i), c.r, c.g, c.b);		
	}
}

bool Circle::is_inside(glm::vec2 const& mousePosition) const{
	bool a = true;
	/*Point2d p{punkt_};
	p.rotate(M_PI);
	for (int i = 0; i < 180; ++i)
	{
		if (punkt_.x()+radius_*cos(i) < mousePosition.x && p.x()+radius_*cos(i) > mousePosition.x)
		{
		 	if (punkt_.y()+radius_*sin(i) < mousePosition.y && p.y()+radius_*sin(i) > mousePosition.y)
			{
		 		a = true;
			} 
		} 
		else{
			a = false;
		}

			
	}*/

	return a;

}