#include "sphere.h"

miit::figure::sphere::sphere(const double radius, const point& center)
	: radius(radius), center(center)
{}

double miit::figure::sphere::get_radius() const
{
	return this->radius;
}

miit::figure::point miit::figure::sphere::get_center() const
{
	return this->center;
}

miit::figure::point miit::figure::sphere::project(const double x_axis, const double z_perc) const
{
	auto x0 = center.get_x();
	auto y0 = center.get_y();
	auto z0 = center.get_z();

	return point(
		x0 + radius * std::cos(x_axis),
		y0 + radius * std::sin(x_axis),
		z0 + (radius * 2 * z_perc / 100) - radius
	);
}
