#pragma once 
#include "point.h"

namespace miit::figure
{
	class line
	{
	public:
		/// <summary>
		/// �������� ����� ��� ������ ��������� � �������� �����
		/// </summary>
		/// <param name="start"> ��������� �����</param>
		/// <param name="end">�������� �����</param>
		line(const point& start, const point& end);

		/// <summary> 
		/// ��������� ��������� ����� ������� 
		/// </summary> 
		/// <returns></returns> 
		point get_start() const;

		/// <summary> 
		/// ��������� �������� ����� �������  
		/// </summary> 
		/// <returns></returns> 
		point get_end() const;

		/// <summary> 
		/// ��������� ���������� ����� ��������� � �������� ������� 
		/// </summary> 
		/// <returns></returns> 
		double get_lenght() const;
	private:
		const point start;
		const point end;
	};
}