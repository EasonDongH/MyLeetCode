#include "stdafx.h"
#include "CppUnitTest.h"
#include "../1034. Coloring A Border/1034. Coloring A Border.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1034)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			int r0 = 0, c0 = 0, color = 3;
			bool flag = true;
			vector<vector<int>> grid{ {1,1},{1,2} }, ans{ {3,3},{3,2} };
			grid = obj.colorBorder(grid, r0, c0, color);
			for (int i = 0, R = grid.size(); i < R; ++i) {
				for (int j = 0, C = grid[0].size(); j < C; ++j) {
					flag &= grid[i][j] == ans[i][j];
				}
			}
			Assert::IsTrue(flag);
		}
	};
}