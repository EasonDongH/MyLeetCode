#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Medium/1031. Maximum Sum of Two Non-Overlapping Subarrays.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1031)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			int L = 1, M = 2;
			vector<int> A{ 0,6,5,2,2,5,1,9,4 };
			Assert::IsTrue(obj.maxSumTwoNoOverlap(A, L, M) == 20);
		}


	};
}