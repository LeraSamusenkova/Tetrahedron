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
		point(const double x, const double y, const double z);

		/// <summary>
		/// Получить х компоненту точки
		/// </summary>
		/// <returns> х компоненту точки </returns>
		double x() const;

		/// <summary>
		/// Получить y компоненту точки
		/// </summary>
		/// <returns> y компоненту точки </returns>
		double y() const;

		/// <summary>
		/// Получить z компоненту точки
		/// </summary>
		/// <returns> z компоненту точки </returns>
		double z() const;

		/// <summary>
		/// Представляет точку в виде строки
		/// </summary>
		/// <returns> точка в виде строки </returns>
		const std::string to_string();

		friend std::ostream& operator<<(std::ostream&, const point&);
		friend std::istream& operator>>(std::istream&, const point&);
		friend bool operator==(const point&, const point&);
	private:
		double x;
		double y;
		double z;
	};
};