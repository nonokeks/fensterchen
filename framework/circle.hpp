# ifndef BUW_CIRCLE_HPP
# define BUW_CIRCLE_HPP
#include <point2d.hpp>
#include <color.hpp>

class Circle
{
public:
	Circle(double r, double x, double y, double c1, double c2, double c3);
	Circle(double r, double x, double y);
	Circle();
	~Circle();

	double radius() const;
	Point2d punkt() const;
	double circumference() const;

private:
	double radius_;
	Point2d punkt_;
	Color farbe_;
};



# endif // BUW_CIRCLE_HPP