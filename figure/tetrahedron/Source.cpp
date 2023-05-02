#pragma once
#include "../sphere/sphere.h"

namespace miit::figure
{
	class circle
	{
	public:
		explicit circle(const double radius, const point& center);

		double get_radius() const;
		point get_center() const;
	private:
		const double radius;
		const point center;
	}
};