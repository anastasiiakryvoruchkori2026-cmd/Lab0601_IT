#include "pch.h"
#include "CppUnitTest.h"
#include "../lab0601/lab0601.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab0601
{
	TEST_CLASS(UnitTestlab0601)
	{
	public:
		
		TEST_METHOD(TestCount)
		{
			int t;
			const int n = 5;
			int a[n] = { -5, 1, 2, 3, 4 }; 

			t = Count(a, n);

			Assert::AreEqual(t, 3);
		}

		TEST_METHOD(TestSum)
		{
			int t;
			const int n = 5;
			int a[n] = { -5, 1, 2, 3, 4 }; 

			t = Sum(a, n);

			Assert::AreEqual(t, 6);
		}
	};
}
