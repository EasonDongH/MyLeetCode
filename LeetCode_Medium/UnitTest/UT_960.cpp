#include "stdafx.h"
#include "CppUnitTest.h"
#include "../960. Delete Columns to Make Sorted III/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_960)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			vector<string> A{ "babca","bbazb" };
			Assert::IsTrue(obj.minDeletionSize(A) == 3);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			vector<string> A{ "edcba"};
			Assert::IsTrue(obj.minDeletionSize(A) == 4);
		}

		TEST_METHOD(TestMethod3)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			vector<string> A{ "ghi","def","abc" };
			Assert::IsTrue(obj.minDeletionSize(A) == 0);
		}

	};
}