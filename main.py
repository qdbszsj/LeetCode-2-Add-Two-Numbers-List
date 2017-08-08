# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
        def addTwoNumbers(self, l1, l2):
            """
            :type l1: ListNode
            :type l2: ListNode
            :rtype: ListNode
            """
            ans=ListNode(0)
            p=ans
            add=0
            cur1=l1
            cur2=l2
            while cur1!=None or cur2!=None or add>0:
                v1=0
                v2=0
                v3=0
                if cur1!=None:
                    v1=cur1.val
                if cur2!=None:
                    v2=cur2.val
                v3=(v1+v2+add)%10
                add=(v1+v2+add)/10
                p.next=ListNode(v3)
                if cur1!=None:
                    cur1=cur1.next
                if cur2!=None:
                    cur2=cur2.next
                p=p.next
            return ans.next
