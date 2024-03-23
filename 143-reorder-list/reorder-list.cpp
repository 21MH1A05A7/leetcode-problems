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
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        ListNode* t=head;
        while(t){
            st.push(t);
            t=t->next;
        }
        ListNode* temp=head;
        // ListNode t3=temp;
        // cout<<st.top()->val;
        int c=0;
        ListNode* t2=head->next;
        int s=st.size();
        while(s>1){
            temp->next=st.top();
            st.top()->next=t2;
            temp=t2;
            t2=temp->next;
            st.pop();
            s=s-2;   
        }
        temp->next=NULL;
        return;

    }
};