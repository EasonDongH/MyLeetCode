#pragma once
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

inline ListNode* CreateList(const vector<int>& list)
{
	ListNode* head = nullptr, *pre = nullptr;
	for (auto i : list)
	{
		ListNode* node = new ListNode(i);
		if (pre == nullptr)
			head = node;
		else
			pre->next = node;
		pre = node;
	}
	return head;
}

inline vector<int> ConvertListToVector(ListNode* head) {
	vector<int> ans;
	while (head != nullptr) {
		ans.push_back(head->val);
		head = head->next;
	}
	return ans;
}

inline void deleteAllNode(ListNode* head)
{
	while (head)
	{
		ListNode* tmp = head;
		head = head->next;
		delete tmp;
	}
}

