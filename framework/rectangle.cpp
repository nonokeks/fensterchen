#include "rectangle.hpp"
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>

Rectangle::Rectangle(float a, float b, float x, float y, float c1, float c2, float c3): a_{a}, b_{b}, punkt_{x,y}, farbe_{c1,c2,c3} {}

Rectangle::Rectangle(float a, float b, float x, float y) : a_{a}, b_{b}, punkt_{x,y} {}

Rectangle::Rectangle(float a, float b, Point2d const& punkt, Color const& farbe) : a_{a}, b_{b}, punkt_{punkt}, farbe_{farbe} {}

Rectangle::Rectangle(float a, float b, Point2d const& punkt): a_{a}, b_{b}, punkt_{punkt} {}

Rectangle::Rectangle() : a_{1.0}, b_{1.0}, punkt_{0.0, 0.0} {}

Rectangle::~Rectangle(){}

float Rectangle::hoehe() const{
	return a_;
}

float Rectangle::breite() const{
	return b_;
}

Point2d Rectangle::punkt() const{
	return punkt_;
}

float Rectangle::circumference() const{
	return (2 * a_ + 2 * b_);
}

Color Rectangle::getColor() const{
	return farbe_;
}

void Rectangle::draw(Window const& w) const{
	Point2d p1{punkt_.x()-(b_/2), punkt_.y()+(a_/2)};
	Point2d p2{punkt_.x()+(b_/2), punkt_.y()+(a_/2)};
	Point2d p3{punkt_.x()+(b_/2), punkt_.y()-(a_/2)};
	Point2d p4{punkt_.x()-(b_/2), punkt_.y()-(a_/2)};
	w.drawLine(p1.x(), p1.y(), p2.x(), p2.y(), farbe_.r, farbe_.g, farbe_.b);
	w.drawLine(p2.x(), p2.y(), p3.x(), p3.y(), farbe_.r, farbe_.g, farbe_.b);
	w.drawLine(p3.x(), p3.y(), p4.x(), p4.y(), farbe_.r, farbe_.g, farbe_.b);
	w.drawLine(p4.x(), p4.y(), p1.x(), p1.y(), farbe_.r, farbe_.g, farbe_.b);
}

void Rectangle::draw(Window const& w, Color const& c) const{
	Point2d p1{punkt_.x()-(b_/2), punkt_.y()+(a_/2)};
	Point2d p2{punkt_.x()+(b_/2), punkt_.y()+(a_/2)};
	Point2d p3{punkt_.x()+(b_/2), punkt_.y()-(a_/2)};
	Point2d p4{punkt_.x()-(b_/2), punkt_.y()-(a_/2)};
	w.drawLine(p1.x(), p1.y(), p2.x(), p2.y(), c.r, c.g, c.b);
	w.drawLine(p2.x(), p2.y(), p3.x(), p3.y(), c.r, c.g, c.b);
	w.drawLine(p3.x(), p3.y(), p4.x(), p4.y(), c.r, c.g, c.b);
	w.drawLine(p4.x(), p4.y(), p1.x(), p1.y(), c.r, c.g, c.b);
}

bool Rectangle::is_inside(glm::vec2 const& mousePosition) const{
	Point2d p1{punkt_.x()-(b_/2), punkt_.y()+(a_/2)};
	//Point2d p2{punkt_.x()+(b_/2), punkt_.y()+(a_/2)};
	Point2d p3{punkt_.x()+(b_/2), punkt_.y()-(a_/2)};
	//Point2d p4{punkt_.x()-(b_/2), punkt_.y()-(a_/2)};
	if (p1.x() < mousePosition.x && mousePosition.x < p3.x())
	{
		if (p1.y() < mousePosition.y && mousePosition.y < p3.y())
		{
			return true;
		}
	}
	return false;
}