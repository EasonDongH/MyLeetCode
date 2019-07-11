#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/706. Design HashMap.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_706)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			MyHashMap hashMap;
			hashMap.put(1, 1);
			hashMap.put(2, 2);
			Assert::IsTrue(hashMap.get(1) == 1);
			Assert::IsTrue(hashMap.get(3) == -1);
			hashMap.put(2, 1);
			Assert::IsTrue(hashMap.get(2) == 1);
			hashMap.remove(2);
			Assert::IsTrue(hashMap.get(2) == -1);
			hashMap.remove(1);
			Assert::IsTrue(hashMap.get(1) == -1);
			hashMap.put(1, 1);
			hashMap.put(2, 2);
			Assert::IsTrue(hashMap.get(1) == 1);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			MyHashMap hashMap;
			hashMap.put(2, 2);
			hashMap.put(1, 1);
			hashMap.put(3, 3);
			hashMap.remove(2);
			Assert::IsTrue(hashMap.get(2) == -1);
		}

	};
}