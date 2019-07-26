class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None

def ListToListNode(ls: list) -> ListNode:
    head = None
    node = None
    preNode = None
    for i in ls:
        node = ListNode(i)
        if head == None:
            head = node
        if preNode != None:
            preNode.next = node
        preNode = node
    return head

def ListNodeToList(head:ListNode)->list:
    ls = []
    while head != None:
        ls.append(head.val)
        head = head.next
    return ls



