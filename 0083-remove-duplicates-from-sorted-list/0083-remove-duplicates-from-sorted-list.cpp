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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) return head; // Edge case: Empty or 1-node list

        ListNode* curr = head;

        while (curr != NULL && curr->next != NULL) {
            if (curr->val == curr->next->val) {
                ListNode* temp = curr->next;
                curr->next = temp->next; // Skip duplicate node
                delete temp; // Free memory
            } else {
                curr = curr->next; // Move forward only when there's no duplicate
            }
        }

        return head;
    }
};
