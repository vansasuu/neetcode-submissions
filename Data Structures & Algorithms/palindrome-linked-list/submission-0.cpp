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
    bool isPalindrome(ListNode* head) {

        ListNode* slow = head; // this for finding middle 
        ListNode* fast = head; // from there we are gonna reverse the linked list

        while(fast != nullptr && fast->next != nullptr) // as long as fast is not 0 
        {
            slow = slow->next; // for steping
            fast = fast->next->next; // to get middle
        }

        ListNode* prev = nullptr; // this to deverse the middle 
        ListNode* current = slow; // to make new head 
 // to so that from the middle we reverse
        while(current != nullptr)  // from that head
        {
            ListNode* nxt = current->next; // we have given a node whatever is next of slow 
            current->next = prev; // the current next will be prev that is null
            prev = current; // prev is new current 
            current = nxt; // holy lord this all for reversing 

        }
        // now we check if left is = right

        ListNode* left = head; // to start now from letf
        ListNode* right = prev; // to start from behind
        while  (right != nullptr) // till behind is not null ptr 
         {
            if(left->val != right->val)
            {
                return false;
            }
            left = left->next;
            right = right->next;

        }
        return true;
    }
};