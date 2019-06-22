#include "stdafx.h"
#include "CppUnitTest.h"
#include "../33. Search in Rotated Sorted Array/33. Search in Rotated Sorted Array.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_33)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> nums{ 4,5,6,7,0,1,2 };
			auto ans = obj.search(nums,0);

			Assert::IsTrue(ans == 4);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> nums{ 0,1,2,4,5,6,7 };
			auto ans = obj.search(nums, 0);

			Assert::IsTrue(ans == 0);
		}

		TEST_METHOD(TestMethod3)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> nums{ 6,0,1,2,4,5 };
			auto ans = obj.search(nums, 6);

			Assert::IsTrue(ans == 0);
		}

		TEST_METHOD(TestMethod4)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> nums{ 1 };
			auto ans = obj.search(nums, 0);

			Assert::IsTrue(ans == -1);
		}

		TEST_METHOD(TestMethod5)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<int> nums{ 3,1 };
			auto ans = obj.search(nums, 1);

			Assert::IsTrue(ans == 1);
		}
	};
}