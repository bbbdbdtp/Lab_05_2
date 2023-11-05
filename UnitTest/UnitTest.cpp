#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 1;
			double pi = atan(1) * 4;
				double eps = 0.0000001;
			int n = 0;
			double s = 0;
			double expected = pi / 2 - atan(x);

			double actual = S(x, eps, n, s);

			Assert::AreEqual(expected, actual, eps);
		}
	};
}