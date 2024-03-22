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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t1=list1;
        // ListNode* t2=list2;

        int c=0;
        while(c<a-1){
            t1=t1->next;
            c+=1;
        }
        ListNode* temp=t1; // first node
        while(c<=b){
            t1=t1->next;
            c+=1;
        }
        // t1==> contains the last node address
        temp->next=list2;
        // t1->next=list2;
        while(list2->next){
            list2=list2->next;
        }
        list2->next=t1;
        return list1;
    }
};