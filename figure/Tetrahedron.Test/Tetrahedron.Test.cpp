#include "pch.h"
#include "../tetrahedron/tetrahedron.h"
#include "CppUnitTest.h"
#include <limits>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit::figure;

namespace TetrahedronTest
{
	TEST_CLASS(TetrahedronTest)
	{
	public:
		tetrahedron* testingTetrahedron;
		
		TEST_METHOD_INITIALIZE(InitializeTetrahedron)
		{
			testingTetrahedron = new tetrahedron(
				sphere(10, point(0, 0, 0))
			);
		}

		TEST_METHOD(MathArea_ExeceptRightArea)
		{
			auto area = this->testingTetrahedron->math_area();
			auto exceptedArea = 461.88021535175346;

			Assert::IsTrue(
				std::abs(area - exceptedArea) < std::numeric_limits<double>::epsilon()
			);
		}
		
		TEST_METHOD(MathPerimeter_ExceptRightPerimeter)
		{
			auto perimeter = this->testingTetrahedron->math_perimeter();
			auto rightPerimeter = 97.979589711332736;

 			Assert::IsTrue(
				std::abs(perimeter - rightPerimeter) < std::numeric_limits<double>::epsilon()
			);
		}

		TEST_METHOD_CLEANUP(DeinitializeTetrahedron)
		{
			delete testingTetrahedron;
		}
	};
}
