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
        if (!list1) return list2;  // If list1 is empty, return list2
        if (!list2) return list1;  // If list2 is empty, return list1

       
        if (list1->val > list2->val) {
            swap(list1, list2);
        }

        ListNode* current = list1; 
        while (current->next && list2) {
            if (current->next->val > list2->val) {
               
                ListNode* temp = list2;
                list2 = list2->next;
                temp->next = current->next;
                current->next = temp;
            }
            current = current->next; 
        }

     
        if (list2) {
            current->next = list2;
        }

        return list1;
    }
};
