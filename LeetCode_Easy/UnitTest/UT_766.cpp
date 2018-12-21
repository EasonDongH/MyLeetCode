#include "stdafx.h"
#include "CppUnitTest.h"
#include "../766. Toeplitz Matrix/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_766)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<vector<int>> matrix;
			matrix.push_back(vector<int>{1, 2, 3, 4});
			matrix.push_back(vector<int>{5, 1, 2, 3});
			matrix.push_back(vector<int>{9, 5, 1, 2});
			Assert::IsTrue(obj.isToeplitzMatrix(matrix));
		}

	};
}