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
        ListNode* temp=head;
        map<ListNode*,int> mp;
        if(temp==NULL){
            return 0;
        }
        if(head->next==NULL){
            return 0;
        }
        while(temp){
            mp[temp]++;
            if(mp[temp]>1){
                return 1;
            }
            temp=temp->next;
        }
        return 0;
    }
};