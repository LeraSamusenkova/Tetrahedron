#pragma once 
#include "point.h"

namespace miit::figure
{
	class line
	{
	public:
		/// <summary>
		/// Создание линии при помощи начальной и конечной точки
		/// </summary>
		/// <param name="start"> Начальная точка</param>
		/// <param name="end">Конечная точка</param>
		line(const point& start, const point& end);

		/// <summary> 
		/// Получение начальной точки стороны 
		/// </summary> 
		/// <returns></returns> 
		point get_start() const;

		/// <summary> 
		/// Получение конечной точки стороны  
		/// </summary> 
		/// <returns></returns> 
		point get_end() const;

		/// <summary> 
		/// Получение расстояния между начальной и конечной точками 
		/// </summary> 
		/// <returns></returns> 
		double get_lenght() const;
	private:
		const point start;
		const point end;
	};
}