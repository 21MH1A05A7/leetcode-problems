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
        if(head==NULL){
            return 0;
        }
        if(head->next==NULL){
            return 0;
        }
        ListNode* fast=head->next->next;
        ListNode* slow=head;
        while(fast && fast->next){
            if(slow==fast){
                return 1;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        return 0;
    }
};