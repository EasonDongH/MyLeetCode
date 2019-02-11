#include "stdafx.h"
#include "CppUnitTest.h"
#include "../893. Groups of Special-Equivalent Strings/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_893)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<string> A{ "a","b","c","a","c","c" };
			Assert::IsTrue(obj.numSpecialEquivGroups(A) == 3);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<string> A{ "aa","bb","ab","ba" };
			Assert::IsTrue(obj.numSpecialEquivGroups(A) == 4);
		}

		TEST_METHOD(TestMethod3)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<string> A{ "abc","acb","bac","bca","cab","cba" };
			Assert::IsTrue(obj.numSpecialEquivGroups(A) == 3);
		}

		TEST_METHOD(TestMethod4)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<string> A{ "abcd","cdab","adcb","cbad" };
			Assert::IsTrue(obj.numSpecialEquivGroups(A) == 1);
		}
	};
}