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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next ==NULL){
            return head;
        }
        ListNode* f=head;
        ListNode* s=head->next;
        ListNode* pre=NULL;
        while(f != NULL && s!= NULL){
            ListNode* t=s->next;


            s->next= f;
            f->next= t;
            if(pre!= NULL){
                pre->next=s;
            }else{
                head = s;
            }
            pre=f;
            f=t;
            if(t!=NULL){
                s=t->next;
            }else{
                s=NULL;
            }
        }
        return head;
        
    }
};