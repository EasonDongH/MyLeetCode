#include "stdafx.h"
#include "CppUnitTest.h"
#include "../966. Vowel Spellchecker/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_966)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			vector<string> wordList{ "KiTe","kite","hare","Hare" };
			vector<string> queries{ "kite","Kite","KiTe","Hare","HARE","Hear","hear","keti","keet","keto" };
			vector<string> excepted{ "kite","KiTe","KiTe","Hare","hare","","","KiTe","","KiTe" };
			auto  actual = obj.spellchecker(wordList, queries);
			Assert::IsTrue(excepted.size() != actual.size());
			for (int i = 0, size = actual.size(); i < size; ++i)
				Assert::IsTrue(actual[i] == excepted[i]);
		}
	};
}