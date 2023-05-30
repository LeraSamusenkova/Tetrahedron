#pragma once
#include "../sphere/sphere.h"

namespace miit::figure
{
	class tetrahedron
	{
	public:
		tetrahedron();
		
		/// <summary>
		/// Создает тетраэдр по 4 вершинам
		/// </summary>
		/// <param name="vertex1">Вершина 1</param>
		/// <param name="vertex2">Вершина 2</param>
		/// <param name="vertex3">Вершина 3</param>
		/// <param name="vertex4">Вершина 4</param>
		tetrahedron(const point& vertex1, const point& vertex2, const point& vertex3, const point& vertex4);

		/// <summary>
		/// Создает тетраэд по центру вписанной или описанной окружности и стороны тераэдра
		/// </summary>
		/// <param name="sphere">Сфера</param>
		/// <param name="vertex_lenght">Длина стороны тетраэдра</param>
		tetrahedron(const sphere& sphere);
		
		point get_vertex1() const;
		point get_vertex2() const;
		point get_vertex3() const;
		point get_vertex4() const;

		double math_area() const;
		double math_perimeter() const;

		friend std::string to_string(const tetrahedron& tetrahedron);
		friend std::ostream& operator<<(std::ostream& ostream, const tetrahedron& tetrahedron);
		friend std::istream& operator>>(std::istream& istream, tetrahedron& tetrahedron);
	private:
		point vertex1;
		point vertex2;
		point vertex3;
		point vertex4;

	};
};