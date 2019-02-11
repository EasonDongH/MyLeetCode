#pragma once
#include <bits/stdc++.h>
using namespace std;

#define Null INT_MAX

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* constructByVector(vector<int> nums) {
	int i = 0, size = nums.size();
	if (size == 0)
		return nullptr;

	queue<TreeNode*> qI;
	TreeNode* root = new TreeNode(nums[0]);
	qI.push(root);
	while (!qI.empty()) {
		auto node = qI.front(); qI.pop();
		if (++i < size && nums[i] != Null) {
			node->left = new TreeNode(nums[i]);
			qI.push(node->left);
		}
			
		if (++i < size&& nums[i] != Null) {
			node->right = new TreeNode(nums[i]);
			qI.push(node->right);
		}
	}

	return root;
}
