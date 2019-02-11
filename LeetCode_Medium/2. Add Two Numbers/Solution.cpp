#include <bits/stdc++.h>
#include "../UnitTest/List.h"
using namespace std;
 
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		if (l1 == nullptr)
			return l2;
		if (l2 == nullptr)
			return l1;

		int carry = 0;
		ListNode* ans = l1, *pre = nullptr;
		while (l1 && l2)
		{
			int tmp = l1->val + l2->val + carry;
			l1->val = tmp % 10;
			carry = tmp / 10;

			pre = l1;
			l1 = l1->next; l2 = l2->next;
		}

		if (l2 != nullptr)
			pre->next = l2;
		l1 = pre->next;
		while (carry > 0)
		{
			if (l1 == nullptr) {
				l1 = new ListNode(0);
				pre->next = l1;
			}
			int tmp = l1->val + carry % 10;
			l1->val = tmp%10;
			carry =tmp/ 10;
			pre = l1; l1 = l1->next;
		}

		return ans;
	}
};