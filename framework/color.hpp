# ifndef BUW_Color_HPP
# define BUW_Color_HPP

struct Color
{
	float r;
	float g;
	float b;

	Color(float x, float y, float z) : r{x}, g{y}, b{z} {}

	Color(float x) : r{x}, g{x}, b{x} {}

	Color(Color const& c) : r{c.r}, g{c.g}, b{c.g} {}

	Color() :  r{0.0}, g{0.0}, b{0.0} {}
};

# endif // BUW_Color_HPP