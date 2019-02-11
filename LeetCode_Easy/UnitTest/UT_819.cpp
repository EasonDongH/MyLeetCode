#include "stdafx.h"
#include "CppUnitTest.h"
#include "../819. Most Common Word/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_819)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			string paragraph = "Bob. hIt, baLl";
			vector<string> banned{"bob", "hit"};
			Assert::IsTrue(obj.mostCommonWord(paragraph, banned) == "ball");
		}
	};
}