# ifndef BUW_CIRCLE_HPP
# define BUW_CIRCLE_HPP

class Circle
{
public:
	Circle(double r);
	Circle();
	~Circle();

	double radius() const;

private:
	double radius_;

};



# endif // BUW_CIRCLE_HPP