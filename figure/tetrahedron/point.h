#pragma once
#include <iostream>

namespace miit::figure
{
	class point
	{
	public:
		/// <summary>
		/// конструтор класса point
		/// </summary>
		/// <param name="x"> x компонента точки</param>
		/// <param name="y"> y компонента точки</param>
		/// <param name="z"> z компонента точки</param>
		point( double x,  double y,  double z);

		/// <summary>
		/// Получить х компоненту точки
		/// </summary>
		/// <returns> х компоненту точки </returns>
		double get_x() const;

		/// <summary>
		/// Получить y компоненту точки
		/// </summary>
		/// <returns> y компоненту точки </returns>
		double get_y() const;

		/// <summary>
		/// Получить z компоненту точки
		/// </summary>
		/// <returns> z компоненту точки </returns>
		double get_z() const;

		/// <summary>
		/// Представляет точку в виде строки
		/// </summary>
		/// <returns> точка в виде строки </returns>
		const std::string to_string();

		friend std::ostream& operator<<(std::ostream&, const point&);
		friend std::istream& operator>>(std::istream&,  point&);
		friend bool operator==(const point&left, const point&right);
		friend bool operator!=(const point&left, const point&right);
	private:
		double x;
		double y;
		double z;
	};
};