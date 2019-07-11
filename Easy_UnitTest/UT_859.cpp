#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/859. Buddy Strings.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_859)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			string A = "ab", B = "ba";
			Assert::IsTrue(obj.buddyStrings(A, B) == true);
		}
	};
}