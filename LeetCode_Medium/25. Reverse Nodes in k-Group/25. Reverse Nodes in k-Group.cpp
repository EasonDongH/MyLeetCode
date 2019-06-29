// 25. Reverse Nodes in k-Group.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <bits/stdc++.h>
#include "C:\GitHub\MyLeetCode\LeetCode_Medium\UnitTest\List.h"

class Solution {
	ListNode* reverseK(ListNode* node, int k) {
		if (k <= 1 || node == nullptr) return node;
		ListNode * newNode = node->next, *tmp = newNode->next, *tmp_next = nullptr;
		for (int i = 1; i < k && tmp != nullptr; ++i) {
			tmp_next = tmp->next;
			tmp->next = newNode;
			newNode = tmp; tmp = tmp_next;
		}
		ListNode* last_Node = node->next;
		last_Node->next = tmp;
		node->next = newNode;
		return last_Node;
	}
public:
	ListNode* reverseKGroup(ListNode* head, int k) {
		if (k <= 1)return head;
		int i = 0;
		ListNode header(-1), *node = head;
		header.next = head;
		head = &header;
		while (node != nullptr) {
			if (++i == k) {
				i = 0;
				head = reverseK(head, k);
				node = head;
			}
			node = node->next;
		}
		return header.next;
	}
};
