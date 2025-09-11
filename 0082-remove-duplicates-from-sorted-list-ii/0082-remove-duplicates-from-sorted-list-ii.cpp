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
      ListNode*temp = head ;
      ListNode dummy(0);
      ListNode* prev = &dummy;
      dummy.next = head ;
      while( temp != nullptr){
        if( temp->next != nullptr && temp -> val == temp->next->val){
            while(temp -> next != nullptr && temp -> val == temp -> next -> val){
                temp = temp -> next ;
            }
        prev -> next = temp->next ;
        }
        else {
            prev = prev -> next ;

        }
        temp = temp -> next ;
        }
        return dummy.next ;
      }   
    
};