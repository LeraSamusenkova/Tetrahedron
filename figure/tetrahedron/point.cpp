#include <sstream> 
#include "point.h" 

using namespace miit::figure;

point::point(double x, double y, double z) : x(x), y(y), z(z)
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
	stream << "Point(" << point.get_x() << "," << point.get_y() << "," << point.get_z() << ")";
}

std::istream& miit::figure::operator>>(std::istream&, const point&)
{
	// TODO: вставьте здесь оператор return
}

bool miit::figure::operator==(const point&, const point&)
{
	return false;
}

const std::string point::to_string()
{
	std::stringstream ss;
	ss << this;
	return ss.str();
}