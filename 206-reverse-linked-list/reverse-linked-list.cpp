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
    
   void inshead(ListNode* &h,int data)
    {
        ListNode * newnode = new ListNode(data);

        newnode->next=h;
        h= newnode;

        
        



    }
    ListNode* reverseList(ListNode* head) {
       ListNode* temp = head;
       ListNode * h =NULL;

        while(temp != NULL)
        {
            inshead(h,temp->val);
            temp=temp->next;


        }

        return h;




        
        
    }
};