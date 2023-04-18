#pragma once
#include "sphere"

namespace miit::figure
{
	class tetrahedron
	{
	public:
		/// <summary>
		/// Создает тетраэдр по 4 вершинам
		/// </summary>
		/// <param name="vertex1">Вершина 1</param>
		/// <param name="vertex2">Вершина 2</param>
		/// <param name="vertex3">Вершина 3</param>
		/// <param name="vertex4">Вершина 4</param>
		tetrahedron(const point&vertex1, const point&vertex2, const point&vertex3, const point&vertex4);
		
		/// <summary>
		/// Создает тетраэд по центру вписанной или описанной окружности и стороны тераэдра
		/// </summary>
		/// <param name="circle_center">Центр сферы</param>
		/// <param name="isinscribed">является ли окружность вписанной</param>
		/// <param name="vertex_lenght">Длина стороны тетраэдра</param>
		tetrahedron(const circle& circle, bool isinscribed, double vertex_lenght);
		
		const point& get_vertex1() const;
		const point& get_vertex2() const;
		const point& get_vertex3() const;
		const point& get_vertex4() const;

	private:
		const point& vertex1;
		const point& vertex2;
		const point& vertex3;
		const point& vertex4;

	};
};