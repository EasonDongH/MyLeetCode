#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Medium/1054. Distant Barcodes.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1054)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> barcodes{ 2,2,2,1,5 };
			auto ans = obj.rearrangeBarcodes(barcodes);
			bool flag = ans.size() == barcodes.size();
			if (flag)
			{
				for (int i = 1, size = ans.size(); i < size; ++i)
				{
					if (ans[i - 1] == ans[i])
					{
						flag = false;
						break;
					}
				}
			}

			Assert::IsTrue(flag);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> barcodes{ 3,7,3,7,7,7,7,2,2,2 };
			auto ans = obj.rearrangeBarcodes(barcodes);
			bool flag = ans.size() == barcodes.size();
			if (flag)
			{
				for (int i = 1, size = ans.size(); i < size; ++i)
				{
					if (ans[i - 1] == ans[i])
					{
						flag = false;
						break;
					}
				}
			}

			Assert::IsTrue(flag);
		}
	};
}