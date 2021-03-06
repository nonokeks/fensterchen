#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <point2d.hpp>
#include <color.hpp>
#include <circle.hpp>
#include <rectangle.hpp>

int main(int argc, char *argv[])
{
    return Catch::Session().run(argc, argv);

}

TEST_CASE("describe_point2d", "[point2d]")
{
	Point2d p{};
	REQUIRE(p.x() == Approx(0.0));

	Point2d p1{3.4, 5.1};
	REQUIRE(p1.x() == Approx(3.4));
	REQUIRE(p1.y() == Approx(5.1));

	Point2d p2{2.0,4.0};
	p2.translate(2.5, 1.0);
	REQUIRE(p2.x() == Approx(4.5));
	REQUIRE(p2.y() == Approx(5.0));

	Point2d p3{-1.0, 1.0};
	p3.rotate(M_PI);
	REQUIRE(p3.x() == Approx(1.0));
	REQUIRE(p3.y() == Approx(-1.0));

	Color black(0.0);
	Color red(1.0, 0.0, 0.0);

	Circle c{5.7, 2.0, 2.0};
	REQUIRE(c.getRadius() == Approx(5.7));
	REQUIRE(c.getPunkt().x() == Approx(2.0));
	REQUIRE(c.getPunkt().y() == Approx(2.0));
	REQUIRE(c.circumference() == Approx(35.8141));

	Rectangle r{2.0, 3.0, 1.0, 1.0};
	REQUIRE(r.hoehe() == Approx(2.0));
	REQUIRE(r.breite() == Approx(3.0));
	REQUIRE(r.punkt().x() == Approx(1.0));
	REQUIRE(r.punkt().y() == Approx(1.0));
	REQUIRE(r.circumference() == Approx(10.0));

	Circle c2{1.0, p , black};
	REQUIRE(c2.getColor().r == Approx(0.0));
	REQUIRE(c2.getColor().g == Approx(0.0));
	REQUIRE(c2.getColor().b == Approx(0.0));

	Rectangle r2{1.0, 1.0, p, red};
	REQUIRE(r2.getColor().r == Approx(1.0));
	REQUIRE(r2.getColor().g == Approx(0.0));
	REQUIRE(r2.getColor().b == Approx(0.0));
}
