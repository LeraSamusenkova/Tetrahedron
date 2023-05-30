#include "sphere.h"
#define M_PI           3.14159265358979323846

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

miit::figure::point miit::figure::sphere::project(const double zenith, const double azimuth) const
{
    static const double toRadians = M_PI / 180;
    auto x0 = center.get_x();
    auto y0 = center.get_y();
    auto z0 = center.get_z();

    return point(
        x0 + radius * std::sin(zenith * toRadians) * std::cos(azimuth * toRadians),
        y0 + radius * std::sin(zenith * toRadians) * std::sin(azimuth * toRadians),
        z0 + radius * std::cos(zenith * toRadians)
    );
}