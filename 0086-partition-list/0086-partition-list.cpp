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
    ListNode* partition(ListNode* head, int x) {
     ListNode*smalldummy = new ListNode(0);
     ListNode*largedummy = new ListNode(0);
     ListNode*small = smalldummy;
     ListNode*large = largedummy ;
     ListNode*temp = head ;
     while(temp != NULL){
        if( temp -> val < x ){
            small -> next = temp ;
            small = small -> next ;
        }
        else {
            large-> next = temp;
            large = large -> next ;  
        }
        temp = temp -> next ;
     }
     small -> next = largedummy-> next ;
     large -> next = NULL;
      ListNode* result = smalldummy->next;

        // Free dummy nodes
        delete smalldummy;
        delete largedummy;

        return result;
    }
};