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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left == right) return head;

        // Step 1: Move temp to 'left' node
        ListNode* temp = head;
        int k = 1;
        while(k < left) {
            temp = temp->next;
            k++;
        }

        // Step 2: Move curr to 'right' node
        ListNode* curr = head;
        int j = 1;
        while(j < right) {
            curr = curr->next;
            j++;
        }

        // Step 3: Now reverse the list between temp and curr
        ListNode* prev = nullptr;
        ListNode* start = temp;
        ListNode* endNext = curr->next;  // save next of right node

        while(start != endNext) {
            ListNode* nxt = start->next;
            start->next = prev;
            prev = start;
            start = nxt;
        }

        // Step 4: Fix connections
        // Find node before temp (left-1)
        ListNode dummy(0);
        dummy.next = head;
        ListNode* beforeLeft = &dummy;
        for(int i = 1; i < left; i++) {
            beforeLeft = beforeLeft->next;
        }

        beforeLeft->next = prev;   // connect before-left to reversed head
        temp->next = endNext;      // connect reversed tail to endNext

        return dummy.next;
    }
};
