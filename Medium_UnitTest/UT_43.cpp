#include "CppUnitTest.h"
#include "../Medium/43. Multiply Strings.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_43)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Solution obj;

			Assert::IsTrue(obj.multiply("123", "456") == "56088");
		}
	};
}