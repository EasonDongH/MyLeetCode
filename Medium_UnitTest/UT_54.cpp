#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Medium/54. Spiral Matrix.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_54)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<vector<int>> matrix{ {1,2,3},{4,5,6},{7,8,9} };
			vector<int> expected{ 1,2,3,6,9,8,7,4,5 };
			vector<int>  actual = obj.spiralOrder(matrix);
			Assert::IsTrue(actual.size() == expected.size());
			for (int i = 0, size = actual.size(); i < size; ++i)
				Assert::IsTrue(expected[i] == actual[i]);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<vector<int>> matrix{ {1, 2, 3, 4},{5, 6, 7, 8},{9,10,11,12} };
			vector<int> expected{ 1,2,3,4,8,12,11,10,9,5,6,7 };
			vector<int>  actual = obj.spiralOrder(matrix);
			Assert::IsTrue(actual.size() == expected.size());
			for (int i = 0, size = actual.size(); i < size; ++i)
				Assert::IsTrue(expected[i] == actual[i]);
		}
	};
}