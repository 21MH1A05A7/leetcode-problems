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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* y;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        ListNode* nehe;
        if(count==n){
            if(head->next==NULL){
                return y;
            }
            else{
                y=head->next;
                head=y;
            }
            return head;
        }
        temp=head;
        int c=count-n;
        int i=1;
        while(i<c){
            temp=temp->next;
            i+=1;
        }
        if(temp->next->next!=NULL){
            ListNode* x=temp->next->next;
            temp->next=x;
        }
        else{
            temp->next=NULL;
        }
        return head;
    }
};