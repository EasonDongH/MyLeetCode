# Definition for singly-linked list.
from List import ListNode

class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None

class Solution:
    def rotateRight(self, head: ListNode, k: int) -> ListNode:
        listLen = 0
        node = head
        lastNode = None
        while node != None:
            listLen += 1
            lastNode = node
            node = node.next
        if listLen == 0:
            return head;
        k = listLen - k%listLen - 1
        node = head
        for i in range(0,k):
            node = node.next
        tmp = node.next
        if tmp != None:
            node.next = None
            lastNode.next = head
            head = tmp
        return head