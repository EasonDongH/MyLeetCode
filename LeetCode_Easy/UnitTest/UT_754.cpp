#include "stdafx.h"
#include "CppUnitTest.h"
#include "../754. Reach a Number/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_754)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.reachNumber(3) == 2);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.reachNumber(2) == 3);
		}

	};
}