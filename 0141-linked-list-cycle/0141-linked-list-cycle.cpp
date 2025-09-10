/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;  // empty or single node (no cycle)

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;           // move 1 step
            fast = fast->next->next;     // move 2 steps

            if(slow == fast) return true;  // cycle detected
        }
        return false;  // reached end → no cycle
    }
};



















    /* ListNode*slow = head;
     ListNode*fast = head ;
     while( fast && fast ->next){
        slow = slow ->next ;
        fast = fast ->next ->next ;
        if(slow == fast){
            return true;
        }
     } 
     return false ;  
    }
};

 bool hasCycle(ListNode *head) {

        map<ListNode*, bool> table;

        ListNode*temp=head;
        while(temp != NULL){
        if(table[temp]==false){
            table[temp]=true;
       }
       else{
           return true;
       }
       temp=temp->next;
    }
    return false;
}
};
*/