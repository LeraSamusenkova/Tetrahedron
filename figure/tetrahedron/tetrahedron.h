#pragma once
#include "sphere"

namespace miit::figure
{
	class tetrahedron
	{
	public:
		/// <summary>
		/// ������� �������� �� 4 ��������
		/// </summary>
		/// <param name="vertex1">������� 1</param>
		/// <param name="vertex2">������� 2</param>
		/// <param name="vertex3">������� 3</param>
		/// <param name="vertex4">������� 4</param>
		tetrahedron(const point&vertex1, const point&vertex2, const point&vertex3, const point&vertex4);
		
		/// <summary>
		/// ������� ������� �� ������ ��������� ��� ��������� ���������� � ������� ��������
		/// </summary>
		/// <param name="circle_center">����� �����</param>
		/// <param name="isinscribed">�������� �� ���������� ���������</param>
		/// <param name="vertex_lenght">����� ������� ���������</param>
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