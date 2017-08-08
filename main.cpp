/** 
 * Definition for singly-linked list. 
 * struct ListNode { 
 *     int val; 
 *     ListNode *next; 
 *     ListNode(int x) : val(x), next(NULL) {} 
 * }; 
 */  
class Solution {  
public:  
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {  
        ListNode *ans=new ListNode(0);  
        ListNode *p=ans;  
        int add=0;  
        ListNode *cur1=l1;  
        ListNode *cur2=l2;  
        while(cur1!=NULL||cur2!=NULL||add>0){  
            int v1=0,v2=0,v3=0;  
            if(cur1!=NULL)v1=cur1->val;  
            if(cur2!=NULL)v2=cur2->val;  
            v3=(v1+v2+add)%10;  
            add=(v1+v2+add)/10;  
            p->next=new ListNode(v3);  
            if(cur1!=NULL)cur1=cur1->next;  
            if(cur2!=NULL)cur2=cur2->next;  
            p=p->next;  
        }  
        return ans->next;  
    }  
};  
