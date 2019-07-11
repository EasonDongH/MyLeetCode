#include <bits/stdc++.h>
#include "../Base/Tree.h"
using namespace std;

/**
 * Definition for a binary tree node.
 **/
class Solution {
private:
	vector<int> prevOrderTraversal(TreeNode* root) {
		vector<int> ans;
		stack<TreeNode*> sT;

		while (!sT.empty() || root) {
			while (root) {
				sT.push(root);
				root = root->left;
			}
			if (!sT.empty()) {
				root = sT.top(); sT.pop();
				if (root->left == nullptr && root->right == nullptr)
					ans.push_back(root->val);
				root = root->right;
			}
		}

		return ans;
	}
public:
	bool leafSimilar(TreeNode* root1, TreeNode* root2) {
		auto vec1 = prevOrderTraversal(root1);
		auto vec2 = prevOrderTraversal(root2);
		if (vec1.size() != vec2.size())
			return false;
		for (int i = 0, size = vec1.size(); i < size; ++i)
			if (vec1[i] != vec2[i])
				return false;
		return true;
	}
};