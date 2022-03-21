//https://leetcode.com/problems/add-two-numbers/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *head,*NN,*temp;
        int sum=0,rem=0;
        NN=new ListNode();
        head=NN;
        while(l1!=NULL or l2!=NULL)
        {
            //cout<<rem;
            if(l1==NULL  )
                sum=l2->val+rem;
            else if(l2==NULL)
                sum=l1->val+rem;
            else
                sum=l1->val+l2->val+rem;
            //cout<<sum;
            if(sum>9)
            {
                temp=new ListNode();
                temp->val=sum%10;
                //cout<<temp->val<<" ";
                rem=sum/10;
                if(NN==NULL)
                {
                    NN=temp;
                    head=NN;
                }
                else
                    NN->next=temp;
                    NN=NN->next;
            }
            else
            {
                temp=new ListNode();
                temp->val=sum;
                //cout<<temp->val<<" ";
                rem=0;
                if(NN==NULL)
                {
                    NN=temp;
                    head=NN;
                }
                else
                    NN->next=temp;
                    NN=NN->next;
            }
            if(l1!=NULL && l1->next!=NULL)
            {
                l1=l1->next;
            }
            else{
                l1=NULL;
            }
            if(l2!=NULL && l2->next!=NULL)
                l2=l2->next;
            else
            {
                l2=NULL;
            }
        }
        if(rem!=0){
            temp=new ListNode();
            temp->val=rem;
            NN->next=temp;
        }
        return head->next;
    }
};
