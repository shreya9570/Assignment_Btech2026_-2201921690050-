/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       if(head == NULL){
        return NULL ;
       }
       // isme hm copy node bana rhe 1->1->2->2->3->3
       Node*curr = head ;
       while(curr != NULL ){
        Node*copy = new Node(curr->val);
        copy ->next = curr->next ;
        curr->next = copy ;
        curr = copy->next ;
  }
  // making random pointer 
  curr= head ;
  while(curr != NULL){
    if(curr ->random != NULL){
        curr->next->random = curr->random->next ;
    }
        curr = curr->next->next;
    
  }
  //seperate both these now 
  Node*dummy = new Node(0);
  Node*curent = dummy ;
  curr = head ;
  while( curr != NULL){
    Node*copy = curr ->next ;
    curent ->next = copy ;
    curent = copy ;
    curr->next = copy->next; // restore original list
            curr = curr->next;
  }
  return dummy ->next ;
    }
};