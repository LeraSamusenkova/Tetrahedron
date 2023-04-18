#pragma once
#include "point.h"

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

			double get_radius() const;
			const point& get_center() const;

		private:
			const double radius;
			const point& center;

	};
};
