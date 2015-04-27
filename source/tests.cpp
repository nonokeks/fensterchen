#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <point2d.hpp>
#define _USE_MATH_DEFINES
#include <cmath>

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
	REQUIRE(p3.x() == Approx(-1.0));
	REQUIRE(p3.y() == Approx(1.0));
}

