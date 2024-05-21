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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        // Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the list
        ListNode* secondHalfStart = reverse(slow);

        // Compare the first and the second half
        ListNode* firstHalfStart = head;
        ListNode* secondHalfIter = secondHalfStart;
        bool palindrome = true;
        while (secondHalfIter != nullptr) {
            if (firstHalfStart->val != secondHalfIter->val) {
                palindrome = false;
                break;
            }
            firstHalfStart = firstHalfStart->next;
            secondHalfIter = secondHalfIter->next;
        }

        // Restore the list (optional)
        

        return palindrome;
    }
};
