#include "stdafx.h"
#include "CppUnitTest.h"
#include "../5. Longest Palindromic Substring/5. Longest Palindromic Substring.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_5)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			string ans = obj.longestPalindrome("babad");
			Assert::IsTrue(ans == "bab");
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			string ans = obj.longestPalindrome("cbbd");
			Assert::IsTrue(ans == "bb");
		}
	};
}