#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Medium/6. ZigZag Conversion.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_6)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR");
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;
			Assert::IsTrue(obj.convert("PAYPALISHIRING", 2) == "PYAIHRNAPLSIIG");
		}
	};
}