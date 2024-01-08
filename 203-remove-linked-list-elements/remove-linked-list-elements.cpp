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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode* prev=temp;
        while(temp){
            if(head->val==val){
                head=head->next;
                prev=head;
                temp=head;
            }

            else if(temp->val==val){
                prev->next=temp->next;
                temp=temp->next;
            }
            else{
                prev=temp;
                temp=temp->next;
           
            }
            
            
            
        }
        return head;
    }
};