#include <sstream>
#include <limits>
#include "point.h"

using namespace miit::figure;

miit::figure::point::point()
{}

point::point(const double x, const double y,const double z) : x(x), y(y), z(z)
{}

double point::get_x() const
{
	return this->x;
}

double point::get_y() const
{
	return this->y;
}

double point::get_z() const
{
	return this->z;
}

std::ostream& miit::figure::operator<<(std::ostream& stream, const point& point)
{
	return stream << "Point(" << point.get_x() << "," << point.get_y() << "," << point.get_z() << ")";
}

std::istream& miit::figure::operator>>(std::istream& stream, point& point)
{
	return stream >> point.x >> point.y >> point.z;
}

bool miit::figure::operator==(const point&left, const point&right)
{
	constexpr double epsilon = std::numeric_limits<double>::epsilon();

	return std::abs(left.x - right.x) < epsilon &&
		std::abs(left.y - right.y) < epsilon &&
		std::abs(left.z - right.z) < epsilon;
}

bool miit::figure::operator!=(const point&left, const point&right)
{
	return !operator==(left, right);
}

const std::string point::to_string()
{
	std::stringstream ss;
	ss << this;
	return ss.str();
}