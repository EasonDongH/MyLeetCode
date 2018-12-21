#include <bits/stdc++.h>
using namespace std;

class MyLinkedList {
private:
	struct LinkedListNode {
		int value;
		LinkedListNode* next;
		LinkedListNode(int val) :value(val), next(nullptr) {}
	};

	int size = 0;
	LinkedListNode* header = nullptr, *prev = nullptr;
public:
	/** Initialize your data structure here. */
	MyLinkedList() {

	}

	/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
	int get(int index) {
		if (size <= index) return -1;

		LinkedListNode* tmp = header;
		prev = nullptr;
		while (0 < index--) {
			prev = tmp;
			tmp = tmp->next;
		}

		return tmp->value;
	}

	/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
	void addAtHead(int val) {
		LinkedListNode* node = new LinkedListNode(val);
		node->next = header;
		header = node;
		++size;
	}

	/** Append a node of value val to the last element of the linked list. */
	void addAtTail(int val) {
		LinkedListNode* node = new LinkedListNode(val);
		LinkedListNode* tmp = header;
		while (tmp->next != nullptr)
			tmp = tmp->next;
		tmp->next = node;
		++size;
	}

	/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
	void addAtIndex(int index, int val) {
		if (size < index) return;

		if (index == 0)
			addAtHead(val);
		else if (index == size)
			addAtTail(val);
		else {
			get(index);
			LinkedListNode* node = new LinkedListNode(val);
			node->next = prev->next;
			prev->next = node;
			++size;
		}
	}

	/** Delete the index-th node in the linked list, if the index is valid. */
	void deleteAtIndex(int index) {
		if (-1 == get(index))
			return;

		LinkedListNode* tmp = nullptr;
		if (prev == nullptr) {
			tmp = header;
			header = header->next;
		}
		else {
			tmp = prev->next;
			if (tmp != nullptr)
				prev->next = tmp->next;
		}
		--size;

		delete tmp;
	}
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */