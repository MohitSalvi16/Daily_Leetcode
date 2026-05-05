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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        int L=1;

        ListNode* Tail=head;

        while(Tail->next!=NULL){
            Tail=Tail->next;
            L++;
        }
        
        Tail->next=head;

        k=k%L;
        if(k==0){
            return head;
        }
        int G=L-k;

        ListNode* NewTail=head;
        for(int i=1;i<G;i++){
            NewTail=NewTail->next;
        }
        ListNode* NewHead=NewTail->next;

        NewTail->next=NULL;

        return NewHead;
    }
};