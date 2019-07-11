#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Medium/8. String to Integer (atoi).cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_8)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			Assert::IsTrue(obj.myAtoi("-91283472332") == INT_MIN);
		}
	};
}