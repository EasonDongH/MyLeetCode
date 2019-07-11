#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/705. Design HashSet.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_705)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			MyHashSet hashSet;
			hashSet.add(91);
			hashSet.add(48);
			Assert::IsTrue(hashSet.contains(48));
		}

	};
}