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
    bool isPalindrome(ListNode* head) {
        ListNode*fast = head ;
        ListNode*slow = head ;
        //finding middle
        while( fast != NULL && fast ->next != NULL){
            fast = fast->next ->next ;
            slow = slow ->next ;
        }
        // reverse karna next ko 
         ListNode*prev = NULL;
         ListNode*curr = slow ;
        while( curr != NULL){
        ListNode*nexts = curr -> next ;
         curr ->next = prev;
         prev = curr ;
         curr = nexts ;
         }
         //now compair
         ListNode*temp = head ; 
         ListNode*second = prev ;
         while( second != NULL){
           if( temp ->val != second ->val ){
            return false;
           } 
           temp = temp -> next ;
           second = second ->next ;
         }
         return true ;
    }
};
        