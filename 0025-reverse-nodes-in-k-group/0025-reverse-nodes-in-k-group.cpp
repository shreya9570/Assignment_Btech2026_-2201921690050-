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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        // Step 1: check if there are at least k nodes ahead
        int count = 0;
        ListNode* node = head;
        while (node && count < k) {
            node = node->next;
            count++;
        }

        // If less than k nodes, return head (no reversal)
        if (count < k) return head;

        // Step 2: reverse k nodes
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        count = 0;

        while (curr && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Step 3: connect reversed part to recursion
        head->next = reverseKGroup(curr, k);

        // Step 4: return new head of this group
        return prev;
    }
};

         