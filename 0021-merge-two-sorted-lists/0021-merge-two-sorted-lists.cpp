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

        // Ensure list1 starts with the smaller value
        if (list1->val > list2->val) {
            swap(list1, list2);
        }

        ListNode* current = list1; // Iterator pointing to the merged list

        while (current->next && list2) {
            if (current->next->val > list2->val) {
                // Insert list2's current node into list1
                ListNode* temp = list2;
                list2 = list2->next;
                temp->next = current->next;
                current->next = temp;
            }
            current = current->next; // Move the iterator forward
        }

        // If list1 ends, attach remaining list2 nodes
        if (list2) {
            current->next = list2;
        }

        return list1; // Return the modified list1
    }
};
