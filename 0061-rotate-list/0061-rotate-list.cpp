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
    int findlength(ListNode* head) {
        int length = 0;
        while (head != NULL) {
            length++;
            head = head->next;
        }
        return length;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return NULL;

        int length = findlength(head);
        int rotation = k % length;
        if (rotation == 0) return head;

        // Step 1: find the node before new head
        int lastPos = length - rotation - 1;
        ListNode* lastNode = head;
        for (int i = 0; i < lastPos; i++) {
            lastNode = lastNode->next;
        }

        // Step 2: break the list
        ListNode* newHead = lastNode->next;
        lastNode->next = NULL;

        // Step 3: go to the end of new list
        ListNode* tail = newHead;
        while (tail->next != NULL) {
            tail = tail->next;
        }

        // Step 4: connect tail to old head
        tail->next = head;

        return newHead;
    }
};
