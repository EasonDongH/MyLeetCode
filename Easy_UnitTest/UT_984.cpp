#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/984. String Without AAA or BBB.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_984)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.strWithout3a3b(1, 2) == "bba");
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.strWithout3a3b(4, 1) == "aabaa");
		}

		TEST_METHOD(TestMethod3)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.strWithout3a3b(1, 4) == "bbabb");
		}
	};
}