#include "stdafx.h"
#include "CppUnitTest.h"
#include "../859. Buddy Strings/Solution.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_859)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			string A = "ab", B = "ba";
			Assert::IsTrue(obj.buddyStrings(A,B) == true);
		}
	};
}