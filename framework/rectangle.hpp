# ifndef BUW_RECTANGLE_HPP
# define BUW_RECTANGLE_HPP
#include <point2d.hpp>
#include <color.hpp>

class Rectangle
{
public:
	Rectangle(double a, double b, double x, double y, double c1, double c2, double c3);
	Rectangle(double a, double b, double x, double y);
	Rectangle();
	~Rectangle();

	double hoehe() const;
	double breite() const;
	Point2d punkt() const;
	double circumference() const;

	
private:
	double a_; //hoehe
	double b_; //breite
	Point2d punkt_;
	Color f_;
};



# endif // BUW_RECTANGLE_HPP