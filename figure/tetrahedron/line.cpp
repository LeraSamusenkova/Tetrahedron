#include "line.h"

miit::figure::line::line(const point& start, const point& end)
    : start(start), end(end)
{}

miit::figure::point miit::figure::line::get_start() const {
    return this->start;
}

miit::figure::point miit::figure::line::get_end() const
{
    return this->end;
}

double miit::figure::line::get_lenght() const {
    return std::sqrt(
        std::pow(this->start.get_x() - this->end.get_x(), 2)
        + std::pow(this->start.get_y() - this->end.get_y(), 2)
        + std::pow(this->start.get_z() - this->end.get_z(), 2)
    );
}