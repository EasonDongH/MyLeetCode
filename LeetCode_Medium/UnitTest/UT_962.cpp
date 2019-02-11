#include "stdafx.h"
#include "CppUnitTest.h"
#include "../962. Maximum Width Ramp/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_962)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> A{ 6,0,8,2,1,5 };
			Assert::IsTrue(obj.maxWidthRamp(A)== 4);
		}
	};
}