#include "stdafx.h"
#include "CppUnitTest.h"
#include "../12. Integer to Roman/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_12)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.intToRoman(1994)=="MCMXCIV");
		}
	};
}