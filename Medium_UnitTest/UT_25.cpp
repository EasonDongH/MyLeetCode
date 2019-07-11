#include "CppUnitTest.h"
//#include "../Base/List.h"
#include "../Medium/25. Reverse Nodes in k-Group.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_25)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			bool flag = true;
			vector<int> nums{ 1,2,3,4,5 }, excpted{ 2,1,4,3,5 };
			auto head = CreateList(nums);
			ListNode* ans = obj.reverseKGroup(head, 2);
			vector<int> actual = ConvertListToVector(ans);
			flag = excpted.size() == actual.size();
			if (flag) {
				for (int i = 0, size = excpted.size(); i < size; ++i)
					flag &= (excpted[i] == actual[i]);
			}
			Assert::IsTrue(flag);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			bool flag = true;
			vector<int> nums{ 1,2,3,4,5 }, excpted{ 3,2,1,4,5 };
			auto head = CreateList(nums);
			ListNode* ans = obj.reverseKGroup(head, 3);
			vector<int> actual = ConvertListToVector(ans);
			flag = excpted.size() == actual.size();
			if (flag) {
				for (int i = 0, size = excpted.size(); i < size; ++i)
					flag &= (excpted[i] == actual[i]);
			}
			Assert::IsTrue(flag);
		}

		TEST_METHOD(TestMethod3)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			bool flag = true;
			vector<int> nums{ 1,2,3,4,5 }, excpted{ 1,2,3,4,5 };
			auto head = CreateList(nums);
			ListNode* ans = obj.reverseKGroup(head, 1);
			vector<int> actual = ConvertListToVector(ans);
			flag = excpted.size() == actual.size();
			if (flag) {
				for (int i = 0, size = excpted.size(); i < size; ++i)
					flag &= (excpted[i] == actual[i]);
			}
			Assert::IsTrue(flag);
		}
	};
}