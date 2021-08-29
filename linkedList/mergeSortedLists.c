/*
 * https://leetcode.com/problems/merge-two-sorted-lists/
 * Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the node   of the first two lists.
 * Input: l1 = [1,2,4], l2 = [1,3,4] 
 * Output: [1,1,2,3,4,4]
 
 * Muskan,1910990665
*/

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;

     struct ListNode *ans =  malloc(sizeof(struct ListNode));
      struct ListNode *dummy=ans;

      while(l1!=NULL && l2!=NULL)
      {
         if(l1->val < l2->val)
         {
            ans->next=l1;
            l1=l1->next;
            ans=ans->next;
         }
         else
         {
            ans->next=l2;
            l2=l2->next;
            ans=ans->next;
         }
      }

        while(l1!=NULL)
        {
            ans->next=l1;
            l1=l1->next;
            ans=ans->next;
        }

         while(l2!=NULL)
        {
            ans->next=l2;
            l2=l2->next;
            ans=ans->next;
        }

    return dummy->next;

}

