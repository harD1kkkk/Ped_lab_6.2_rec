#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.2_rec/lab_6.2_rec.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int testArray[size] = { 3, -2, 7, 4, 1 };
			int expectedSum = 5;
			int actualSum = FindSumOfMaxAndMin(testArray, size);
			Assert::AreEqual(expectedSum, actualSum);
		}
	};
}
