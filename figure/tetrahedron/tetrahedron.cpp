#include <sstream>
#include "tetrahedron.h"
#include "line.h"

miit::figure::tetrahedron::tetrahedron()
{}

miit::figure::tetrahedron::tetrahedron(const point& vertex1, const point& vertex2, const point& vertex3, const point& vertex4)
	: vertex1(vertex1), vertex2(vertex2), vertex3(vertex3), vertex4(vertex4)
{}

miit::figure::tetrahedron::tetrahedron(const sphere& sphere, bool isinscribed)
{
	double vertex_length = isinscribed ?
		sphere.get_radius() * 6 / std::sqrt(6) :
		sphere.get_radius() * 2 / std::sqrt(2);

	double step = 100.0 / 3;

	this->vertex2 = sphere.project(120, step * 0);
	this->vertex3 = sphere.project(120, step * 1);
	this->vertex4 = sphere.project(120, step * 2);
	this->vertex1 = point(
		sphere.get_center().get_x(),
		sphere.get_center().get_y() - sphere.get_radius(),
		sphere.get_center().get_z()
	);
}

miit::figure::point miit::figure::tetrahedron::get_vertex1() const
{
	return vertex1;
}

miit::figure::point miit::figure::tetrahedron::get_vertex2() const
{
	return vertex2;
}

miit::figure::point miit::figure::tetrahedron::get_vertex3() const
{
	return vertex3;
}

miit::figure::point miit::figure::tetrahedron::get_vertex4() const
{
	return vertex4;
}

double miit::figure::tetrahedron::math_area() const
{
	return std::pow(line(vertex1, vertex2).get_lenght(), 2) * std::sqrt(3);
}

double miit::figure::tetrahedron::math_perimeter() const
{
	return miit::figure::line(this->vertex1, this->vertex2).get_lenght() * 6;
}

std::string miit::figure::to_string(const tetrahedron& tetrahedron)
{
	std::stringstream ss;

	ss << "tetrahedron(vertex1=" << tetrahedron.get_vertex1()
		<< ", vertex2=" << tetrahedron.get_vertex2()
		<< ", vertex3=" << tetrahedron.get_vertex3()
		<< ", vertex4=" << tetrahedron.get_vertex4()
	<< ")";

	return ss.str();
}

std::ostream& miit::figure::operator<<(std::ostream& ostream, const tetrahedron& tetrahedron)
{
	return ostream << to_string(tetrahedron);
}

std::istream& miit::figure::operator>>(std::istream& istream, tetrahedron& tetrahedron)
{
	return istream >> tetrahedron.vertex1 >> tetrahedron.vertex2 >> tetrahedron.vertex3 >> tetrahedron.vertex4;
}
