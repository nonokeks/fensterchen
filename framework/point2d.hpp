# ifndef BUW_POINT2D_HPP
# define BUW_POINT2D_HPP

class Point2d
{
public:
	Point2d(float x, float y);
	//Point2d(Point2d const& p);
	Point2d();

	//Destructor
	~Point2d();

	//Getter
	float x() const;
	float y() const;

	//Punkt verschieben
	void translate(float x, float y);

	//Rotation im Uhrzeigersinn
	void rotate(float alpha);


private:
	float x_;
	float y_;

};




// Point2d class declaration
# endif // BUW_POINT2D_HPP
