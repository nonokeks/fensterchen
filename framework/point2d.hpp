# ifndef BUW_POINT2D_HPP
# define BUW_POINT2D_HPP

class Point2d
{
public:
	Point2d(double x, double y);

	Point2d();

	//Destructor
	~Point2d();

	//Getter
	double x() const;
	double y() const;

	//Punkt verschieben
	void translate(double x, double y);

	//Rotation im Uhrzeigersinn
	void rotate(double alpha);


private:
	double x_;
	double y_;

};




// Point2d class declaration
# endif // BUW_POINT2D_HPP
