#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/1005. Maximize Sum Of Array After K Negations.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1005)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> A{ 4,2,3 };
			int K = 1;
			Assert::IsTrue(obj.largestSumAfterKNegations(A, K) == 5);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> A{ 3,-1,0,2 };
			int K = 3;
			Assert::IsTrue(obj.largestSumAfterKNegations(A, K) == 6);
		}

		TEST_METHOD(TestMethod3)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> A{ 2,-3,-1,5,-4 };
			int K = 2;
			Assert::IsTrue(obj.largestSumAfterKNegations(A, K) == 13);
		}
	};
}