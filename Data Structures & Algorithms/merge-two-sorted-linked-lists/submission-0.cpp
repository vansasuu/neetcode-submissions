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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode dummy(0); // a dummy with value o 
        ListNode* tail = &dummy; // tail that have link to dummy

        while(list1 != nullptr && list2 != nullptr ) // this so that nonoe of them reach the end
        {
            if(list1->val <= list2->val) // if the value of first is smaller 
            {
                tail->next = list1; // give that tail the new beginning 
                list1 = list1->next; // just to move ahead for final
            }else
            {
                tail->next = list2;  // this if list2 is smaller
                list2 = list2->next;
            }
            tail = tail->next; // none the less move on 
        }
            tail->next  = (list1 != nullptr) ? list1 : list2; // for both if nodes left;
            return dummy.next;  // we want head thats why dummy.next     
    }
};
