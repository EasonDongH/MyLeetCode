#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/1006. Clumsy Factorial.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_1006)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.clumsy(4) == 7);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.clumsy(10) == 12);
		}
	};
}