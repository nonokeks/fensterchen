# ifndef BUW_CIRCLE_HPP
# define BUW_CIRCLE_HPP
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>

#define GLM_FORCE_RADIANS
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/gtx/multiple.hpp>

class Circle
{
public:
	Circle(float r, float x, float y, float c1, float c2, float c3);
	Circle(float r, float x, float y);
	Circle();
	~Circle();

	float getRadius() const;
	Point2d getPunkt() const;
	float circumference() const;
	Color getColor() const;
	void draw(Window const& w) const;
	void draw(Window const& w, Color const& c) const;
	bool is_inside(glm::vec2 const& mousePosition) const;

private:
	float radius_;
	Point2d punkt_;
	Color farbe_;
};



# endif // BUW_CIRCLE_HPP