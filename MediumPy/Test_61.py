import unittest
from RotateList_61 import Solution
from List import *

class Test_Test_61(unittest.TestCase):
    def test_A(self):
        input = [1,2,3,4,5]
        k = 5
        exceptOut = [1,2,3,4,5]
        head1 = ListToListNode(input)
        head2 = Solution().rotateRight(head1,  k)
        actualOut = ListNodeToList(head2)
        self.assertTrue(len(exceptOut) == len(actualOut))
        for i in range(0,len(exceptOut)):
            self.assertTrue(exceptOut[i] == actualOut[i])

if __name__ == '__main__':
    unittest.main()
