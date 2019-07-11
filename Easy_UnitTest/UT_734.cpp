#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/743. Network Delay Time.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_734)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			vector<vector<int>> times;
			times.push_back(vector<int>{2, 1, 1});
			times.push_back(vector<int>{2, 3, 1});
			times.push_back(vector<int>{3, 4, 1});

			int N = 4, K = 2;
			Solution obj;
			Assert::IsTrue(obj.networkDelayTime(times, N, K) == 2);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			vector<vector<int>> times;
			times.push_back(vector<int>{1, 2, 1});
			times.push_back(vector<int>{2, 3, 2});
			times.push_back(vector<int>{1, 3, 4});

			int N = 3, K = 1;
			Solution obj;
			Assert::IsTrue(obj.networkDelayTime(times, N, K) == 3);
		}
	};
}