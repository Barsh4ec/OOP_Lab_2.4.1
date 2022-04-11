#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_2.4_Part_1/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector a(4, 1);
			double t = a.NormOfVector(4);
			Assert::AreEqual(2., t);
		}
	};
}
