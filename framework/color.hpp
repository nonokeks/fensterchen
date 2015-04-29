struct Color
{
	double r;
	double g;
	double b;

	Color(double x, double y, double z) : r{x}, g{y}, b{z} {}

	Color(double x) : r{x}, g{x}, b{x} {}

	Color() :  r{0.0}, g{0.0}, b{0.0} {}
};

