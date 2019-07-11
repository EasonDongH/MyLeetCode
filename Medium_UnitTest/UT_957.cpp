#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Medium/957. Prison Cells After N Days.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_957)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			int N = 15;
			vector<int> cells{ 0,1,0,1,1,0,0,1 };
			vector<int> ans{ 0,1,1,0,0,0,0,0 };
			Assert::IsTrue(obj.isSame(ans, obj.prisonAfterNDays(cells, N)));
		}

	};
}