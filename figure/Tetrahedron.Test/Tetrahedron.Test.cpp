#include "pch.h"
#include "../tetrahedron/tetrahedron.h"
#include "CppUnitTest.h"
#include <limits>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit::figure;

namespace TetrahedronTest
{
	TEST_CLASS(TetrahedronTest_WithInSphere)
	{
	public:
		tetrahedron* testingTetrahedron;
		
		TEST_METHOD_INITIALIZE(InitializeTetrahedron)
		{
			testingTetrahedron = new tetrahedron(
				sphere(10, point(0, 0, 0)),
				true
			);
		}

		TEST_METHOD(TestTetrahedronArea)
		{
			auto area = this->testingTetrahedron->math_area();
			auto rightArea = 720.74485637035548;

			Assert::IsTrue(
				std::abs(area - rightArea) < std::numeric_limits<double>::epsilon()
			);
		}
		
		TEST_METHOD(TestTetrahedronPerimeter)
		{
			auto perimeter = this->testingTetrahedron->math_perimeter();
			auto rightPerimeter = 122.39444646849245;

 			Assert::IsTrue(
				std::abs(perimeter - rightPerimeter) < std::numeric_limits<double>::epsilon()
			);
		}

		TEST_METHOD_CLEANUP(DeinitializeTetrahedron)
		{
			delete testingTetrahedron;
		}
	};

	TEST_CLASS(TetrahedronTest_WithOutSphere)
	{
	public:
		tetrahedron* testingTetrahedron;

		TEST_METHOD_INITIALIZE(InitializeTetrahedron)
		{
			testingTetrahedron = new tetrahedron(
				sphere(10, point(0, 0, 0)),
				false
			);
		}

		TEST_METHOD(TestTetrahedronArea)
		{
			auto area = this->testingTetrahedron->math_area();
			auto rightArea = 720.74485637035548;

			Assert::IsTrue(
				std::abs(area - rightArea) < std::numeric_limits<double>::epsilon()
			);
		}

		TEST_METHOD(TestTetrahedronPerimeter)
		{
			auto perimeter = this->testingTetrahedron->math_perimeter();
			auto rightPerimeter = 122.39444646849245;

			Assert::IsTrue(
				std::abs(perimeter - rightPerimeter) < std::numeric_limits<double>::epsilon()
			);
		}

		TEST_METHOD_CLEANUP(DeinitializeTetrahedron)
		{
			delete testingTetrahedron;
		}
	};

	TEST_CLASS(TetrahedronTest_Vertex)
	{
	public:
		tetrahedron* testingTetrahedron;

		TEST_METHOD_INITIALIZE(InitializeTetrahedron)
		{
			testingTetrahedron = new tetrahedron(
				point(0,0,0),
				point(0,1,0),
				point(1,0,1),
				point(1,1,1)
			);
		}

		TEST_METHOD(TestTetrahedronArea)
		{
			auto area = this->testingTetrahedron->math_area();
			auto rightArea = 1.7320508075688772;

			Assert::IsTrue(
				std::abs(area - rightArea) < std::numeric_limits<double>::epsilon()
			);
		}

		TEST_METHOD(TestTetrahedronPerimeter)
		{
			auto perimeter = this->testingTetrahedron->math_perimeter();
			auto rightPerimeter = 6;

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
