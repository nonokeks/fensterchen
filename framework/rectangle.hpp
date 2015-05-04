# ifndef BUW_RECTANGLE_HPP
# define BUW_RECTANGLE_HPP
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>


class Rectangle
{
public:
	Rectangle(float a, float b, float x, float y, float c1, float c2, float c3);
	Rectangle(float a, float b, float x, float y);
	Rectangle(float a, float b, Point2d const& punkt, Color const& farbe);
	Rectangle(float a, float b, Point2d const& punkt);
	Rectangle();
	~Rectangle();

	float hoehe() const;
	float breite() const;
	Point2d punkt() const;
	float circumference() const;
	Color getColor() const;
	void draw(Window const& w) const;
	void draw(Window const& w, Color const& c) const;
	bool is_inside(glm::vec2 const& mousePosition) const;
	
private:
	float a_; //hoehe
	float b_; //breite
	Point2d punkt_;
	Color farbe_;
};



# endif // BUW_RECTANGLE_HPP