#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/1104. Path In Zigzag Labelled Binary Tree.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1104)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> ans = obj.pathInZigZagTree(14);
			vector<int> excepted{ 1, 3, 4, 14 };
			Assert::IsTrue(ans.size() == excepted.size());
			for (int i = 0, size = ans.size(); i < size; ++i)
				Assert::IsTrue(ans[i] == excepted[i]);
		}

	};
}