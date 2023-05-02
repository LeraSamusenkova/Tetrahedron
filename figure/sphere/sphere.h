#pragma once
#include "../tetrahedron/point.h"

namespace miit::figure
{
	class sphere
	{
	public:
		/// <summary>
		/// Создает сферу по радиусу и центру
		/// </summary>
		/// <param name="radius">радиус сферы</param>
		/// <param name="center">центр сферы</param>
		sphere(const double radius, const point& center);

		/// <summary>
		/// Получить радиус
		/// </summary>
		/// <returns>Возвращает радиус</returns>
		double get_radius() const;

		/// <summary>
		/// Получает центр сферы
		/// </summary>
		/// <returns>Возвращает центр сферы</returns>
		point get_center() const;

		/// <summary>
		/// Создать проекцию на сферу
		/// </summary>
		/// <param name="x_axis">Градус по оси х</param>
		/// <param name="y_axis">Градус по оси у</param>
		/// <returns></returns>
		point project(const double x_axis, const double y_axis) const;
	private:
		const double radius;
		const point center;
	};
};