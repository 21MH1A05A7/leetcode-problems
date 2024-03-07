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
    ListNode* middleNode(ListNode* head) {
        int c=0;
        ListNode* temp=head;
        while(temp){
            c+=1;
            temp=temp->next;
        }
        ListNode* t=head;
            int x=c/2;
            while(x){
                t=t->next;
                x--;
            }
            return t;
        
    }
};