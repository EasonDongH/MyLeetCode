#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/819. Most Common Word.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_819)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			string paragraph = "Bob. hIt, baLl";
			vector<string> banned{ "bob", "hit" };
			Assert::IsTrue(obj.mostCommonWord(paragraph, banned) == "ball");
		}
	};
}