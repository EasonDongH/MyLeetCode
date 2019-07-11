#include <bits/stdc++.h>
#include "..\Base\List.h"
using namespace std;

class Solution {
	ListNode* reverseK(ListNode* node, int k) {
		if (k <= 1 || node==nullptr) return node;
		ListNode * newNode = node->next, *tmp = newNode->next;
		for (int i = 1; i < k && tmp != nullptr; ++i) {
			ListNode* tmp_next = tmp->next;
			tmp->next = newNode;
			newNode = tmp;
			tmp = tmp_next;
		}
		ListNode* last_Node = node->next;
		last_Node->next = tmp;
		node->next = newNode;
		return last_Node;
	}
public:
	ListNode* swapPairs(ListNode* head) {
		int i = 0, k = 2;
		ListNode header(-1);
		header.next = head;
		head = &header;
		ListNode * node = head->next;
		while (node != nullptr) {
			if (++i == k) {
				i = 0;
				head = reverseK(head, k);
			}
			node = node->next;
		}
		return header.next;
	}
};
