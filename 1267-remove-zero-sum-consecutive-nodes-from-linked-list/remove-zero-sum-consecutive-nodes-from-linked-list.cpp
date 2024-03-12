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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*> mp;
        ListNode node=ListNode(0,head);
        int s=0;
        // ListNode* temp=head;
        for(ListNode* temp=&node;temp!=NULL;temp=temp->next){
            s+=(temp->val);
            mp[s]=temp;
        }
        ListNode* t=head;
        int su=0;
        ListNode* prev=t;
        for(ListNode* ptr=&node;ptr!=NULL;ptr=ptr->next){
            su+=(ptr->val);
            ptr->next=mp[su]->next;
        }
        return node.next;
    }
};