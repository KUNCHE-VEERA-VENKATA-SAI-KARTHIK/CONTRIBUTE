/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head ;
        ListNode* t1=NULL ;
        int len=0;


        while(temp!=NULL)
        {
            if(len==k-1)
            t1=temp;
            temp=temp->next;
            len++;
            
            
            
        }

        temp = head;

        while(len!=k)
        {
            temp=temp->next;
            len--;
        }

        swap(temp->val,t1->val);

        
          return head;
        



        
    }
};