#include "stdafx.h"
#include "CppUnitTest.h"
#include "../1047. Remove All Adjacent Duplicates In String/1047. Remove All Adjacent Duplicates In String.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1047)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			string ans = obj.removeDuplicates("abbaca");
			Assert::IsTrue(ans == "ca");
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			string ans = obj.removeDuplicates("aaaaaaaa");
			Assert::IsTrue(ans == "");
		}

	};
}