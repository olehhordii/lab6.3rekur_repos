#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3_rekur/lab6.3_rekur.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 6;
			int a[n] = {-2,3,15,8,-9,2};
			int c;
			c = SumParn(a, n, 0, 0);
			Assert::AreEqual(8, c);
		}
	};
}
