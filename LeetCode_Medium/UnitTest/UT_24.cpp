#include "stdafx.h"
//#include "CppUnitTest.h"
//#include "List.h"
//#include "../24. Swap Nodes in Pairs/24. Swap Nodes in Pairs.cpp"
//using namespace Microsoft::VisualStudio::CppUnitTestFramework;
//
//namespace UnitTest
//{
//	TEST_CLASS(UT_24)
//	{
//	public:
//
//		TEST_METHOD(TestMethod1)
//		{
//			// TODO: 在此输入测试代码
//			Solution obj;
//			bool flag = true;
//			vector<int> nums{ 1,2,3,4 }, excpted{2,1,4,3};
//			auto head = CreateList(nums);
//			ListNode* ans = obj.swapPairs(head);
//			vector<int> actual = ConvertListToVector(ans);
//			flag = excpted.size() == actual.size();
//			if (flag) {
//				for (int i = 0, size = excpted.size(); i < size; ++i)
//					flag &= (excpted[i] == actual[i]);
//			}
//			Assert::IsTrue(flag);
//		}
//	};
//}