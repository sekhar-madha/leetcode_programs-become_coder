//https://leetcode.com/problems/rotate-list/
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
        ListNode *head1,*temp,*temp1;
        if(head==NULL or head->next==NULL)
            return head;
        temp=head;
        temp1=head;
        int n=1;
        while(temp->next!=NULL)
        {
            n+=1;
            temp=temp->next;
        }
        k=n-(k%n);
        if(n==k)
            return head;
        if(k==0)
            return head;
        while(k!=1)
        {
            temp1=temp1->next;
            k-=1;
            /*if(k==0)
            {
                if(temp1->next!=NULL)
                    head1=temp1->next;
            }*/
        }
        if(temp1->next!=NULL)
            head1=temp1->next;
        temp1->next=NULL;
        temp->next=head;
        return head1;
    }
};
