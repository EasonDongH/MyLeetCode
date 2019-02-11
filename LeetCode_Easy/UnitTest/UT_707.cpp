#include "stdafx.h"
#include "CppUnitTest.h"
#include "../707. Design Linked List/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_707)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			MyLinkedList linkedList;
			linkedList.addAtHead(1);
			linkedList.addAtIndex(1, 2);
			Assert::IsTrue(linkedList.get(1) == 2);
			Assert::IsTrue(linkedList.get(0) == 1);
			Assert::IsTrue(linkedList.get(2) == -1);
		}

	};
}