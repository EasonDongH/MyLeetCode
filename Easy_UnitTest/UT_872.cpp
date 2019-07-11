#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Easy/872. Leaf-Similar Trees.cpp"
#include "../Base/Tree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UT_872)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			TreeNode* root1 = constructByVector({ 3,5,1,6,2,9,8,Null,Null,7,4 });
			TreeNode* root2 = constructByVector({ 3,5,1,6,7,4,2, Null,Null,Null,Null,Null,Null,9,8 });
			Assert::IsTrue(obj.leafSimilar(root1, root2) == true);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			Solution obj;
			TreeNode* root1 = constructByVector({ 1,2 });
			TreeNode* root2 = constructByVector({ 2,2 });
			Assert::IsTrue(obj.leafSimilar(root1, root2) == true);
		}
	};
}