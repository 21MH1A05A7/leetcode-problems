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
    ListNode* mergeTwoLists(ListNode* node1, ListNode* node2) {
       ListNode *i=node1;
       ListNode *j=node2;
        ListNode * res=new ListNode();
        if(i!=NULL && j!=NULL){
            if(i->val<=j->val){
                res=new ListNode(i->val);
                i=i->next;
            }
            else{
                res=new ListNode(j->val);
                j=j->next;
            }    
        }
        else if(i!=NULL && j==NULL){
            res=new ListNode(i->val);
            i=i->next;
        }
        else if(i==NULL && j!=NULL){
            res=new ListNode(j->val);
            j=j->next;
        }
        else{
            return node1;
        }
        // cout<<res->val<<" ";
       ListNode *temp=res;
        if(i!=NULL && j!=NULL){
            while(i && j){
                if((i->val)<=j->val){
                    // cout<<i->val<<" ";
                    temp->next=new ListNode(i->val);
                    i=i->next;
                    temp=temp->next;
                }
                else{
                    //ListNode *t;
                    // t->val=j->val;
                    temp->next=new ListNode(j->val);
                    j=j->next;
                    temp=temp->next;
                }
            }
        }
        
        while(i){
            temp->next=new ListNode(i->val);
            i=i->next;
            temp=temp->next;
        }
        while(j){
            temp->next=new ListNode(j->val);
            j=j->next;
            temp=temp->next;
        }
        
    //    ListNode* store=res;
    //    ListNode*  tes=res->next;
    //     res->next=NULL;
    //     while(tes){
    //         store=tes->next;
    //         tes->next=res;
    //         res=tes;
    //         tes=store;
    //     }
        return res;
    }
};