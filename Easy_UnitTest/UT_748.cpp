#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/748. Shortest Completing Word.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_748)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			string licensePlate = "1s3 PSt";
			vector<string> words{ "step", "steps", "stripe", "stepple" };
			Solution obj;
			Assert::IsTrue(obj.shortestCompletingWord(licensePlate, words) == "steps");
		}


	};
}