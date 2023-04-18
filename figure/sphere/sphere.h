#pragma once
#include "point.h"

namespace miit::figure
{
	class sphere
	{
		public:

			/// <summary>
			/// ������� ����� �� ������� � ������
			/// </summary>
			/// <param name="radius">������ �����</param>
			/// <param name="center">����� �����</param>
			sphere(const double radius, const point& center);

			double get_radius() const;
			const point& get_center() const;

		private:
			const double radius;
			const point& center;

	};
};
