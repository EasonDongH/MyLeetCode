#include "CppUnitTest.h"
#include "../Medium/18. 4Sum.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_18)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			bool flag = true;
			vector<int> nums{ 1, 0, -1, 0, -2, 2 };
			vector<vector<int>> ans, except{ {-1,  0, 0, 1} , {-2, -1, 1, 2},{-2,  0, 0, 2} };
			ans = obj.fourSum(nums, 0);
			flag = except.size() == ans.size();
			if (flag) {
				for (int i = 0, isize = ans.size(); i < isize; ++i) {
					for (int j = 0, jsize = ans[i].size(); j < jsize; ++j) {
						flag &= ans[i][j] == except[i][j];
					}
				}
			}
			Assert::IsTrue(flag);
		}
	};
}