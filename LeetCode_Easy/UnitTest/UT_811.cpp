#include "stdafx.h"
#include "CppUnitTest.h"
#include "../811. Subdomain Visit Count/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_811)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<string> websits{ "9001 discuss.leetcode.com" };
			vector<string> ans{ "9001 discuss.leetcode.com", "9001 leetcode.com", "9001 com" };
			set<string> s_s;
			for (auto s : ans)
				s_s.insert(s);
			auto answer = obj.subdomainVisits(websits);

			size_t cnt = 0;
			for (auto s : answer) {
				Assert::IsTrue(s_s.find(s) != s_s.end());
				++cnt;
			}

			Assert::AreEqual(s_s.size(), cnt);
		}
	};
}