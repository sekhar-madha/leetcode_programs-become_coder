//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ptr1,*ptr2,*tmp;
        if(head==NULL or head->next==NULL) return head;
        ptr1=head->next;
        ptr2=head;
        tmp=NULL;
        int f=0,f1=0;
        while(ptr1){
            if(f==0)
            {
                if(ptr1->val==ptr2->val)
                {
                    ptr1=ptr1->next;
                    if(tmp==NULL and ptr1==NULL) return tmp;
                    f=1;
                }
                else
                {
                    ptr1=ptr1->next;
                    tmp=ptr2;
                    ptr2=ptr2->next;
                }
            }
            else
            {
                if(ptr1->val==ptr2->val)
                {
                    ptr1=ptr1->next;
                    if(tmp==NULL and ptr1==NULL) return tmp;
                }
                else
                {
                    ptr2=ptr1;
                    ptr1=ptr1->next;
                    if(tmp==NULL)
                    {
                        head=ptr2;
                        f1=1;
                    }
                    else
                        tmp->next=ptr2;
                    f=0;
                }
            }
            
        }
        if(f1!=1 and tmp==NULL) return tmp;
        if(f==1) tmp->next=ptr1;
        return head;
        
    }
};
