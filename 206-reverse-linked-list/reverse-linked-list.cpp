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
    ListNode* reverseList(ListNode* head) {
    if(!head){
        return head;
    }
       struct ListNode* store=head;
       struct ListNode*  temp=head->next;
        head->next=NULL;
        while(temp){
            store=temp->next;
            temp->next=head;
            head=temp;
            temp=store;
        }
        
        return head;
    }
};